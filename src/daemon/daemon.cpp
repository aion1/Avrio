#include <src/config.h>
#include <iostream>
#include <ip2string.h>
#include <src/msg/CliCommon.cpp>
#include <src/P2p/p2p.h>
#include <string>

void printGenesisTx(std::string rewardAddress) {
    uint64_t  reward = config::PREMINE_AMMOUNT;
    if (reward == 0) {
        reward = getBlockReward();
        Transaction tx = buildCoinbaseTx(rewardAddress, reward);
        crypto::hash(tx);
    }else {
        Transaction tx = buildCoinbaseTx(rewardAddress, reward);   
        crypto::hash(tx);
    }
    std::cout << "Genesis TX hash: \n";
    std::cout << tx + "\n";
    return;
}

void main() {
    cli::cliMain(); // TODO (a "header" that is printed at the begining of every program that includes a ascii art and a license
    std::cout << "Starting node";
    #ifdef useCheckpoints
    std::cout << "Loading checkpoints for faster sync";
    #ifdef internalCheckpoints
    for (uint64_t i = 0; i < checkpoints.size(); i++) {
        std::string errorCatch = checkpoints::load(checkPoints[i].hash, checkPoints[i].height)
        if (errorCatch != '') {
            std::cout << "ERROR loading checkpoints: " << errorCatch;
            break;
       }   
    }
    std::cout << "INFO: Loaded " << checkpoints.size() << " checkpoints";
    #endif
    #endif
    std::cout << "INFO: Launching P2p server";
    if (!p2p::launchsrv()) {
        // Launch failed, abort
        throw std::runtime_error("Failed to start P2p server, exiting...");
    }else {
        std::cout << "P2p server running with peer ID: " << p2p::getId();
        //TODO: finish daemon code
   }                       
}
    
    
