# currency
A c/c++ implementation of a blockchain based cryptocurrency. Join our discord for more info http://discord.gg/R3UhgCk

## TODO:
[ ] Blockchain:
   [ ] Store blockchain on drive rather than current implementatio where it is stored on ram! 
[ ] P2p:
   [ ] make connections to peers
   [ ] share blocks with peers
   [ ] share transactions with peers
   [ ] get blocks from peers
   [ ] submit uptime proof
[ ] Wallet:
   [ ] (Wallet) Core:
       [ ] Create rawtx
       [ ] sign rawtx
       [ ] scan blockchain for transactions
       [ ] generate public & private keys
   [ ] Make a nice cli interface
   [ ] Create, save and open wallet files
[ ] RPC :
    [ ] Daemon (getBlockHeight, getPeerCount, ect) http rpc api
    [ ] Wallet (sendTranscation, getBalanceForAddress, ect) rpc api
    [ ] Daemon (addBlock, addPeer, ect) json rpc api
[ ] Core:
    [ ] verify uptime proof
    [ ] create blocks
    [ ] verify submitted blocks
    [ ] verfy transactions
[ ] Daemon:
    [ ] Daemon Core
        [ ] Sync blockchain from other peers
    [ ] Make a nice Cli interface
[ ] Database:
    [ ] Save Blockchain
    [ ] (if not a full node) prune old transaction data
