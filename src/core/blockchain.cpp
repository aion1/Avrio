#include <blockchain.h>
#include <src/config.h>
#include <src/database/flush.cpp>
#include <src/database/main.cpp>
#include <src/core/block.h>

struct fork_heights
{
  uint8_t version;
  uint64_t height;
};

// Hard forks
static const fork_heights hard_forks[] =
{
  { version_1, 0 },
};

if (hard_forks.size() < 1) {
  static_assert("ERROR: fork heights array cannot be under 1 (0 or under)");
}

Blockchain::Blockchain() {
    if (Chain.size() == 0) {
        if (GENESIS_TX_HASH == "") {
            std::cout << "ERROR: Genesis TX hash not defined, please rerun with the --print-genesis-tx option!\n";
            exit()
        }else{
            Chain.emplace_back(Block(0, genesisTxHash)); // Add Block at height 0, with genesis tx hash defined in config.
        }
    }
}
// Add a block
void Blockchain::AddBlock(Block block) {
     if (!verify(Block block)) {
         break;
     }else{
        Chain.push_back(block);
        if (Chain.size() < 150) {
          database::flushToDb(Chain); // Flush blocks to database storage
        }
     }
}
uint64_t Blockchain::getHeight() {
    uint64_t currentHeight = index.Chain.back();
    return currentHeight;
}

uint8_t Blockchain::getVersion(uint64_t height) {
  uint8_t i = 0;
  for(i < hard_forks.size(); i++;)
      if (height > hard_forks[i].height) {
        return i;
      }
  }
}

Block Blockchain::_GetLastBlock() const {
    return Chain.back();
}

// Need to port to use loadBlock(height) 
Block Blockchain::getBlockDataForHeight(uint64_t height) {
  uint64_t oldestBlockHeight = index.Chain.front();
  if (height > oldestBlockHeight) {
    return Chain.at(height);
  }
  else {
    return database::loadBlock(height);
  }
}
