namespace wallet {
  struct Wallet {
    uint64_t secret_key;
    uint64_t public_key;
    std::string address;
    uint64_t balance;
  } wallet_t;
}
