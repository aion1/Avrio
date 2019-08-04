class Storage {
Public:
  char* getFolder();
  bool createFolder();
  bool createChain(std::string path, std::string hash);
  bool init(const std::string &blocksFilame, const std::string &indexesFilename);
  bool closeStorage();
  bool pushBlock(Block block);
  bool popBlock(amount);
  bool rewindTo(uint64_t height);
  Block getBlockByheight(uint64_t height);
  uint64_t getBlockCount();
  bool reset();
}
