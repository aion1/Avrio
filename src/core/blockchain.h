class Blockchain {
public:
    Blockchain();
 
    void AddBlock(Block bNew);
 
private:
    vector<Block> Chain;
 
    Block _GetLastBlock() const;
};
