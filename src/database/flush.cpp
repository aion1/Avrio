// Copyright Ariel hurdle 2019
/* 
- This File Takes the blocks stored in ram (other than the top (latest) block) and moves them to the database instead,
- this is repeated every 6 minutes ( depending on the amount of txs in the main 
- chain roughtly 2 MAINCHAIN blocks) or if the ammount of blocks currently stored in 
- the ram is over 100 (this can be changed on devices using the --max-ram-blocks flag 
- when launching arieldaemon.
*/

#inlcude <src/database/write.cpp>
#include <src/database/read.cpp>
#include <src/database/main.cpp>
namespace database {
  void main() {
    if (notInitilised(database) { // TODO: make a function that checks what modules are up and running
      // We should not have called this yet, something must have gone wrong
      exit (EXIT_FAILURE);
    }
    else {
    // TODO: Lauch flsuh daemon (every 360 secconds (6 mins) saves blocks (other than top (latest) block)
    // - to db and then removes them from RAM
    }
  }
}
