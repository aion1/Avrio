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
#include <cassert>
#include "rocksdb/db.h"
#include "rocksdb/write_batch.h"

void main() {
  if (notInitilised("database") {
  	std::cout << "Opening DB";
  	rocksdb::DB* db;
        rocksdb::Options options;
        options.create_if_missing = true;
	std::string path = getFolder() + "blockchain.mdb";
        rocksdb::Status status = rocksdb::DB::Open(options, path, &db);
        assert(status.ok());	 	
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

	
