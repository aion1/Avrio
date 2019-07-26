#include <stdint.h>
#include <math.h>
#include <stdlib.h>

uint8_t* buildTx(uint8_t* in, uint8_t* out, uint64_t fee, uint64_t amount, uint64_t nonce) 
{
  uint64_t* tx_64    = (uint64_t*)malloc(90); // Raw transaction data (26) + signature (64)
	uint8_t*  tx       = (uint8_t*)tx_64; 
	*tx_64 = nonce;
	tx_64[1] = amount;
  tx_64[2] = fee;
  for(uint8_t i=0;i<5;i++) tx[i+16] = in[i];		
	for(uint8_t i=0;i<5;i++) tx[i+21] = out[i];
  return tx;
}
// Sign basic TX, i need to implement Ring CTs to make transactions private.
void signTx(uint8_t* rawTx, uint8_t* publicKey, uint8_t* privateKey){
	sign(&rawTx[26], publicKey, privateKey, rawTx, 26); // Signature = 64 bytes, raw tx = 24 | total = 90 bytes
}
// Build Coinbase tx. No ins only a out becuase this is what create tx inputs.
uint8_t* buildCoinbaseTx(uint8_t* out, uint64_t amount){
	uint8_t* tx = (uint8_t*)malloc(9);
	uint64_t* amount_8    = (uint64_t*)&amount;
	for(uint8_t i=0;i<5;i++) tx[i] = out[i];
	*(uint32_t*)&out[5] = amount;
	return tx;
}
void blockHeader(uint8_t* publicKey, uint8_t* transactions, uint8_t* prevBlockHash, uint64_t txMemory, uint64_t difficulty, uint32_t fee, uint32_t timestamp, uint8_t* out, uint64_t height){
	uint8_t  root[64]      = {0};
	uint32_t reward        = getCoinbaseAmmount(height);
	uint8_t* coinbase      = buildCoinbaseTx(publicKey, reward);
	
  blakesl(transactions, txMemory, prevBlockHash, 64, root);
	for(uint8_t i=0; i<64; i++) out[i] = root[i];
	*(uint64_t*)&out[64] = txMemory;
	*(uint32_t*)&out[72] = timestamp;
	for(uint8_t i=0; i<12; i++) out[i+76] = coinbase[i];
	// Nonce = 8 bytes (e.g. 45958478, 74808583)
}
