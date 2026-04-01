//A CryptoBox class stores private key material. Define a friend function dumpForAudit(const CryptoBox&) that may inspect private fields for compliance reporting. Prove that regular functions cannot access those fields.
#include <iostream>
using namespace std;

class CryptoBox {
private:
    string privateKey;
    int securityLevel;

public:
    CryptoBox(string key, int level)
        : privateKey(key), securityLevel(level) {}

    friend void dumpForAudit(const CryptoBox& box);
};
void dumpForAudit(const CryptoBox& box) {

    cout << "Private Key: " << box.privateKey << endl;
    cout << "Security Level: " << box.securityLevel << endl;
}
int main() {
    CryptoBox cb("SECRET", 5);
    dumpForAudit(cb);     

    return 0;
}