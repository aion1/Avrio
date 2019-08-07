#include <iostream.h>
#include <math.h>
#include "block.h"

namespace Core 
{
  bool verifyBlock(Block block) 
  {
    uint64_t hash = malloc(150,1);
    uint64_t salt, height, timestamp, txIds;
    hash = block.hash;
    height = block.index;
    timestamp = block.header.timestamp;
    txIds = block.transactions;
    currentHeight = Blockchain::getHeight();
    if (height != currentHeight + 1) {
      std::cout << "ERROR: height missmatch for block: " + hash + "\n";
      std::cout << "expected height: " + currentHeight;
      std::cout << "Provided Height: " + height;
      return false;
      break;
   }else if (hash in chain) { // TODO: if hash in chain needs proper synitax.
     std::cout << "ERROR: Block " + hash + "already exists!";
     return false;
     break;
   }else {
      return true;
   }
  }
  uint64_t getBlockReward(height)
  {
    uint64_t baseReward = config::blockReward;
  }
  
}
