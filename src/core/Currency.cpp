#include <stdint.h>
#include <math.h>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <src/core/transaction.cpp>

namespace mainChain { // These commands are for the main chain only, NOT wallet chains
  struct Blockheader {
      uint8_t version; // version of the coin (eg 1, 2,3)
      std::string nodePubKey; // Public key of the Full Node that is creating this block
      std::string prevHash; // Hash of the last Block
      uint64_t timestamp; // Time this block was created (UNIX timestamp)
  };
  
  uint8_t* buildTx(txInput in, txOutput out, uint64_t fee, uint64_t amount, uint64_t unlockTime=0, std::string sender, std::string reciever)
  {
      Transaction tx;
      tx.amount = amount;
      tx.senderKey = sender;
      tx.receiverKey = reciever;
      tx.inputs = in;
      tx.outputs = out;
      if (unlockTime == 0) {
      	tx.unlockTime = Blockchain::getHeight() + minimumTxLockTime;
      }else {
	if (unlockTime > Blockchain::getHeight()) {
            tx.unlockTime = unlockTime;
	}else {
	    std::cout << "Bad unlock Time, Aborting!";
            return Transaction badParams;
	}
      }
      tx.timestamp = std::time(nullptr);
      return tx;
  }
  // Sign basic TX
  void signTx(Transaction rawTx, uint8_t* publicKey, uint8_t* privateKey)
  {
      sign(&rawTx[26], publicKey, privateKey, rawTx, 26); // Signature = 64 bytes, raw tx = 24 | total = 90 bytes
  }
  // Build Coinbase tx. No ins only a out becuase this is what create tx inputs.
  uint8_t* buildCoinbaseTx(uint8_t* out, uint64_t amount)
  {
      // TODO
  }

  Blockheader createBlockHeader(std::string prevHash, uint64_t height, std::string publicKey)
  {
      Blockheader blockHeader;
      blockHeader.version = Blockchain::getVersion(height);
      blockHeader.nodePubKey = publicKey;
      blockHeader.prevHash = prevHash;
      blockHeader.timestamp = std::time(nullptr);
      return blockHeader;
  }
}
