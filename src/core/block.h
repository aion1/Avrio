#include <src/config.h>
#include <src/core/blockheader.cpp> // TODO
#include <string>

class Block {
public: 
    Blockheader header; // The header of the block 
    uint32_t index; // height of this block
    std::string hash;  // The hash of the block
    std::vector<tx_data> transactions; // All transcations in the block in a vector
    std::string data; // Extra data that can be appended to blocks (for example text or a smart contract)
                      // - The larger this feild the higher the fee and the max size is defined in config.h
};
