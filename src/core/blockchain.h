class Blockchain {
public:
    vector<Block> Chain;
    static const fork_heights hard_forks[];
    Blockchain();
    void AddBlock(Block block);
    uint64_t getHeight();
    uint8_t getVersion(uint64_t height);
    Block _GetLastBlock() const;
    Block getBlockDataForHeight(uint64_t height);
};
