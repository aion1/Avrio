struct txInput {
  std::string inputTx; // Hash of the transaction That created this input.
  uint8_t txOut-index; // Index of a output of the to-be-used transaction.
  uint64_t scriptSig; // The scriptSig of the block (https://en.bitcoin.it/wiki/Script)
  uint64_t sequence_no; // Ignored (usually 0xFFFFFFFF) unless tx unlock time is > 0.
};

struct txOutput {
  uint64_t value; // Amount of coins to be transfered in atomic units.
  uint64_t scriptSig; // The scriptSig of the block (https://en.bitcoin.it/wiki/Script)
};

struct tx_data {
    uint64_t amount;
    std::string senderKey;
    std::string receiverKey;
    std::vector<txInput> inputs;
    std::vector<txOutput> outputs;
    uint64_t unlockTime; // The height at which the coins unlock (become spendable) at.
    time_t timestamp;
};
