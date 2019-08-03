namespace config {
  namespace masterChain {
    std::string currencyName = "Avrio";
    uint64_t blockTarget = 60;
    uint64_t maxBlockSize = 250000000; // 250kb
    uint64_t maxTxExtraSize = 2500000; // the amount of (extra) data that can be attached to a tx (2.5 kb) (eg for smart contracts)
    uint64_t decimalPlaces = 10;
    uint64_t blockmajorVersion = 0;
    uint64_t blockMinorversion = 0;
    uint64_t blockReward = 0
    uint32_t minFee = 1000000; // 0.001 
  }
}
