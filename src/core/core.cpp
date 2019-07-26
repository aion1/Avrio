#include <iostream.h>
#include <math.h>

namespace Core 
{
  bool verify(block) 
  {
    uint64_t hash = malloc(150,1);
    uint64_t salt, height, timestamp, txIds;
    hash = block[0];
    nonce = block[1];
    height = block[2];
    timestamp = block[3];
    txIds = block[4];
    uint64_t difficulty = getDifficulty(height);
    currentHeight = getBlockchainHeight;
    testHash = crypto::hash(block, diffiuclty);
    if (testHash != hash) {
       std::cout << "ERROR: Incorrect blockhash for block " + hash + "\n";
       std::cout << "Proposed hash: " + hash + "\n";
       std::cout << "Calculated Hash: " + testHash + "\n";
       return false;
       break;
    }elif (!checkDifficulty(hash, difficulty) {
      std::cout << "ERROR: Proof of work to weak for block: " + hash;
      return false;
      break;
   }elif (height != currentHeight + 1) {
      std::cout << "ERROR: height missmatch for block: " + hash + "\n";
      std::cout << "expected height: " + currentHeight;
      std::cout << "Provided Height: " + height;
      return false;
      break;
   }elif (hash in _vChain) { // TODO: if hash in _vChain needs proper synitax.
     std:;cout << "ERROR: Block " + hash + "allready exists!";
     return false;
     break;
   }else {
      return true;
    }
  }
  uint64_t getBlockReward(height)
  {
    uint64_t baseReward = (200 + 50 * sin(height/150)); //https://cdn.discordapp.com/attachments/576732602686373888/590964203158896645/unknown.png
    baseReward = baseReward * 1000000000; // Turn decimal place into atomic units
  }
  
}
