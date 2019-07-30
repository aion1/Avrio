#include <src/core/transaction.cpp>
#include <src/core/blockchain.cpp>

struct mempool {
    int id;
    float percentage;
    // tx details
    struct tx_data tx_data;
};

void initMempool() {
  mempool memPool;
  Block block = getBlockDataForHeight(Blockchain::getHeight()); // TODO: getBlockDataForHeight
  updateMempoolFromBlock(Block block);
  return;
}
