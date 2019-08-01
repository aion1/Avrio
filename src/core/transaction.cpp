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

struct Transaction {
    uint64_t amount;
    std::string senderKey;
    std::string receiverKey;
    std::vector<txInput> inputs;
    std::vector<txOutput> outputs;
    uint64_t unlockTime; // The height at which the coins unlock (become spendable) at.
    time_t timestamp;
};

bool validateTx(Transaction transaction) {
  uint64_t inputsCount = inputs.transaction.size();
  uint64_t outputsCount = outputs.transaction.size();
  for (uint64_t i = 0; i < outputsCount; i++) {
    uint64_t outputsValue += outputs.transaction.at(i)
  }
  if (amount.transaction != outputsValue) {
    return false;
  }else {
    for (uint64_t i = 0; i < inputsCount; i++) {
      uint64_t inputsValue += inputs.transaction.at(i)
    }
    if (inputsCount != outputsCount) {
      returun false;
    }else if (amount.transaction != inputsValue) {
      return false;
    }
  }
}
