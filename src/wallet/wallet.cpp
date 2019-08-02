#include <sodium.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <inttypes.h>
#include "wallet.h"

namespace wallet {
  wallet_t* generateWallet(void) {
    wallet_t *wallet = malloc(sizeof(wallet_t));
    wallet->balance = 0;
     return wallet;
  }
}

	
