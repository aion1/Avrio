#include "peerlist.h"
namespace peerlist {
  struct peerlist {
    uint8_t whitelist;
    uint8_t greylist;
    uint8_t blacklist
  }
  uint8_t getPeerlist() {
    //uint8_t ip = (uint8_t*)malloc(8); // No longer used (yet)
    folder = getFolder();
    ifstream file(folder + "peerlist.txt");
      if(file.is_open())
      {
          std::uint32_t peerList[];
          while(file >> peerList[i]; i++; )
      }
      return PeerList;
  }
  void addPeer(peer) {
    folder = getFolder();
    ifstream file(folder + "peerlist.txt");
    if(file.is_open()) {
      peer >> file;
    }
    greyList.peerList.push_back(peer);
    std::cout << "INFO: Succsessfully Added peer: " << peer;
    if (connectPeer(peer) {
      peerList.erase(std::remove(peerList.greylist.begin(), peerList.greylist.end(), peer), peerList.greylist.end());
      peerList.whitelist.push_back(peer);
    }
    return;
  }
}  
