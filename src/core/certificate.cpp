 
  // Copywrite the avrio project developers

// this file includes functions related to full nodes registration certificates
#include <ctime>
#include "blockchain.cpp"
#include "core.cpp"
#include. "currency.cpp"

namespace fullnode {
  namespace certificate {
    struct rawCertificate { // unaccepted (yet)
      uint64_t nodeIndex;
      std::string subjectPublicKey;
      std::string subjectSignature;
      uint64_t activationHeight; // the block which the certificate was activated at
      uint64_t timestamp;
    }
    struct signedCertificate { // accepted by node
      rawCertificate certificate;
      std::string signature;
    }
    rawCertificate constructCertificate(pk,s) { // pk = public key, s = signature 
      rawCertificate cert;
      t = time(nullptr);
      cert.nodeIndex = core::getNodeCount(t) + 1; // TODO
      cert.nodePublicKey = pk;
      cert.subjectSignature = s;
      cert.activationHeight = blockchain::getHeightForTimestamp(t) + 100; //TODO
      cert.timestamp = t;
      return cert;
    }
  }
}
