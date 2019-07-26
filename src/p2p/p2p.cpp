#include <src/config.h>
#incluce "peerlist.cpp"
namespace p2p {
  bool launchsrv() {
    uint64_t peerIdTemp = genPeerId();
    #define peerId = peerIdTemp
    uint64_t peerList = peerlist::getPeerlist();
    if (peerList.size() = 0) { // We dont have any peers
      if (config::seedNodes.size() = 0 && peerList.size() = 0) {
         throw std::runtime_error("No Peers or seednodes found, exiting...");
         return false;
      }
      for (uint8_t i = 0; i < config::seedNodes.size(); i++) { 
        peerlist::addPeer(config:seedNodes[i]); // Add seed nodes as peers
      }
    }
    uint64_t peerCount = peerList.size();
    for (uint64_t ii = 0; ii < peerList.size(); i++) {
      uint64_t connectCatch = p2p::createConnection(peerList[i]); // Connect to peers
      if (connectCatch = 0) {
        peerCount = (peerCount - 1);
      }
    }
    if (peerCount > 0) {
      std::cout << "Connected to " << peerCount << " peers out of " << peerList.size() << " in peerlist";
      return true;
    } else{
       std::cout << "Failed to connect to any peers out of " << peerList.size() << " in peerlist";
      return false;
    }
  }
}
