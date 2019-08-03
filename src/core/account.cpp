#include "transaction.h"
#include <string>

struct account {
  uint32_t index; // The accounts "index" or reference value
  uint64_t balance; // Current account balance
  std::vector<string> addresses; // all addresses related to this account.
  char data; // The data assosiated wirh deposits on this account
  /* a tramsaction to this account must include these data bits in 
  the extra data section.
  The addresses generated for accounts are one byte longer. wallet clients 
  will automatically detetct this and add the data to the transaction
  account address format:
  <prefix> {encoded public key} (account data)
  */
};
struct container {
  std::vector<account> accounts;
  std::string publicKey;
  std::string privateKey;
}
  
