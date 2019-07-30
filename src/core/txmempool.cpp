#include <src/core/transaction.cpp>
#include <src/core/blockchain.cpp>

struct mempool {
    std::vector<int> id;
    std::vector<float> percentage;
    std::vector<tx_data> tx;  // tx details
};

void initMempool() {
  mempool memPool;
  Block block = getBlockDataForHeight(Blockchain::getHeight()); // TODO: getBlockDataForHeight
  updateMempoolFromBlock(Block block);
  return;
}
