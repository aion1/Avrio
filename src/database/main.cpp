#include <stdio.h>
#include <stdint.h>
#include <core/blockchain.h>
#include <core/block.h>
#include <iostream.h>
#include <string>
#include <src/utils/initilised.cpp> // TODO
#include <cstdio>
#include <cstdlib>
#include <lmdb++.h>


void main() {
  if (notInitilised("database") {
  	std::cout << "Opening DB";
  	auto env = lmdb::env::create();
        env.set_mapsize(1UL * 1024UL * 1024UL * 1024UL); /* 1 GiB */
        std::string path = getFolder() + "blockchain.mdb";
        env.open(path, 0, 0664);
  	heightIndex = getBlockHeight();
  	if (heightIndex == 0) {
    		Blockchain::Blockchain()
  	}else{
  		std::cout << "INFO: Current Block Index " + heightIndex;
  	}
  	setInitilised("database"); // TODO
  }
}

char* getFolder(){
  char* folder = calloc(256,1);
  if (DB_FOLDER == "") {
  	snprintf(folder, 256, "~/.%s/", CURRENCY_NAME);
  }else {
    snprintf(folder, 256 DB_FOLDER)
  }
  return(folder);
}

	
