#include <src/core/block.h>
#include <src/util/keygen.cpp>
#include <src/util/address.cpp>
#include <chain.h>

namespace walletChain {
  Chain createChain(std::string privateKey=pretty::emptyKey) {
    if (privateKey == pretty::emptyKey) { // == not set
      privateKey = wallet::generatePrivateKey()
    }
    Chain chain;
    chain.chainKey = getPublicKeyFromPrivate(privateKey); 
    chain.txnCount = 0; 
    chain.height = 0; 
    chain.lastBlockHash = nullptr; 
    chain.lastBlockTimestamp = nullptr; 
    return chain;
  }
  std::string getAddress (Chain chain) {
    return createAddress(chain.chainKey);
  }
}
