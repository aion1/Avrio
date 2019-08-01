struct txInput {
  std::string inputTx; // Hash of the transaction That created this input.
  uint8_t txOut-index; // Index of a output of the to-be-used transaction.
  uint64_t scriptSig; // The scriptSig of the block (https://en.bitcoin.it/wiki/Script)
  uint64_t sequence_no = 0xFFFFFFFF; // Ignored (usually 0xFFFFFFFF) unless tx unlock time is > 0.
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
    std::string extraData = ''; // Extra data which can be bound to the transaction ( very small amount)
    time_t timestamp;
};

bool validateTx(Transaction transaction) {
  uint64_t inputsCount = transaction.inputs.size();
  uint64_t outputsCount = transaction.outputs.size();
  for (uint64_t i = 0; i < outputsCount; i++) {
    uint64_t outputsValue += transaction.outputs.at(i)
  }
  if (transaction.amount != outputsValue) {
    return false;
  }else {
    for (uint64_t i = 0; i < inputsCount; i++) {
      uint64_t inputsValue += transaction.inputs.at(i)
    }
    if (inputsCount != outputsCount) {
      returun false;
    }else if (transaction.amount != inputsValue) {
      return false;
    }
  }
}
