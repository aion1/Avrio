#include <stdio.h>
#include <stdint.h>
#include <core/blockchain.h>
#include <core/block.h>
#include <iostream.h>


void main() {
  std:;cout << "Opening DB";
  heightIndex = getBlockHeight;
  if (heightIndex == 0) {
    Blockchain::Blockchain()
  std::cout << "INFO: Current Block Index " + heightIndex;
	}
}
	
char* getFolder(){
  char* folder = calloc(256,1);
  if (DB_FOLDER == "") {
	  snprintf(folder, 256, "~/.%s/", CURRENCY_NAME);
  }else{
    snprintf(folder, 256 DB_FOLDER)
	}
  return(folder);
}
