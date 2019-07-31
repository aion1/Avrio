#include <stdio.h>
#include <stdint.h>
#include <core/blockchain.h>
#include <core/block.h>
#include <iostream.h>
#include <string>
#include <src/utils/initilised.cpp> // TODO

void main() {
  if (notInitilised("database") {
  	std::cout << "Opening DB";
  	if (!openDatabase()) {
		exit();
	}
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

	
