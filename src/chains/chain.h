
#include <string>
namespace walletChain{
  class Chain {
  public: 
    std::string chainKey; // the public key of the chain used for recieving funds
  private:
    uint64_t txnCount; // number of transactions on this chain
    uint64_t height; // The number of blocks since the genesis block and the last block
    std::string lastBlockHash; // The hash of the lsst block
    time_t lastBlockTimestamp; //the timestamp of the last block
  }
}
