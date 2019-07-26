#include <src/config.h>
#include <iostream>
#include <ip2string.h>
#include <src/msg/CliCommon.cpp>
#include <src/P2p/p2p.h>
void printGenesisTx(std::string rewardAddress) {
    uint64_t  reward = config::PREMINE_AMMOUNT;
    if (reward == 0) {
        uint64_t  reward = getBlockReward();
        tx = buildCoinbaseTx(rewardAddress, reward);
    }else {
     tx = buildCoinbaseTx(rewardAddress, reward);   
    }
    std:;cout << "Genesis TX hash: \n";
    std::cout << tx + "\n";
    return;
}

void main() {
    cli::cliMain();
    std::cout << "Starting node";
    #ifdef useCheckpoints
    std::cout << "Loading checkpoints for faster sync";
    #ifdef internalCheckpoints
    for (uint64_t i = 0; i < checkpoints.size(); i++
        std::string errorCatch = checkpoints::load(checkPoints[i].hash, checkPoints[i].height)
        if (errorCatch != true) {
            std::cout << "ERROR loading checkpoints: " << errorCatch;
            break;
       }   
    }
    std::cout << "INFO: Loaded " << checkpoints.size() << " checkpoints";
    std::cout << "INFO: Launching P2p server";
    std::string e = p2p::launchsrv();
    if (!e) {
        // Launch failed, abort
        throw std::runtime_error("Failed to start P2p server, exiting...");
       std::cout << "ERROR: " << e;
   }else {
        std::cout << "P2p server running with peer ID: " << p2p::getId();
        //TODO: finish daemon code
   }                       
}
    
    
