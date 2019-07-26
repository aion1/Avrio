#include "peerlist.h"
namespace peerlist {
  uint8_t getPeerlist() {
    //uint8_t ip = (uint8_t*)malloc(8); // No longer used (yet)
    folder = getFolder();
    ifstream file(folder + "peerlist.txt");
      if(file.is_open())
      {
          std::uint32_t peerList[];
          while(file >> peerList[i]; i++;)
      }
      return PeerList;
  }
  void addPeer(peer) {
    folder = getFolder();
    ifstream file(folder + "peerlist.txt");
    if(file.is_open()) {
      peer >> file;
    }
    std::cout << "INFO: Succsessfully Added peer: " << peer;
    return;
  }
}  
