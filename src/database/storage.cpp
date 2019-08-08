#include <core/blockchain.h>
#include <core/block.h>
#include "storage.h"
#include <src/utils/initilised.cpp> // TODO

#include <string>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <stdio.h>
#include <stdint.h>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>


namespace fs = boost::filesystem;

char* getFolder(){
	char* folder = calloc(256,1);
	if (DB_FOLDER == "") {
		snprintf(folder, 256, "~/.%s/", CURRENCY_NAME);
	}else {
		snprintf(folder, 256 DB_FOLDER)
	}
	return(folder);
}
bool createFolder(std::string path) {
	fs::path P path + "/";
	fs::create_directories(p / ".Avrio");
	fs::path P path + "/.Avrio");
	fs::create_directories(p / "db");
	fs::create_directories(p / "Chains");
	/* Full Node */
	if (config.fullnode = True) {
    	fs::create_directories(p / "Chains" / "master");
	}
	return true;
}
bool createChain(std::string path, std::string hash) {
	fs::path P path + "/";
	fs::create_directories(p / "Chains" / hash);
	return true;
}
bool Storage::init() {
	if (notInitilised("database") {
		if (config.fullnode = True) {
    		std::cout << "Opening Main Chain" << std::endl;
      		std::string path = getFolder;
			std::ifstream blockF;
   		    blockF.open("blocks.bin");
			// Format
			/*
			height
			blockhash
			previous block hash
			transactions
			timestamp
			extra data;
			*/
  	  	}		
	}
}

	
