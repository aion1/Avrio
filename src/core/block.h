class Block {
public:
    string sPrevHash;
 
    Block(uint32_t nIndexIn, const string &sDataIn);

  
private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sTxIds;
    string _sHash;
    time_t _tTime;
};
