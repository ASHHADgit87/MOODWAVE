#include <iostream>
#include <fstream>
using namespace std;

void encrypt(const string &inFile, const string &outFile, int shift)
{
    ifstream in(inFile);
    ofstream out(outFile);
    char ch;
    while (in.get(ch))
        out.put((ch + shift) % 256);
    in.close();
    out.close();
}

void decrypt(const string &inFile, const string &outFile, int shift)
{
    ifstream in(inFile);
    ofstream out(outFile);
    char ch;
    while (in.get(ch))
        out.put((ch - shift + 256) % 256);
    in.close();
    out.close();
}

int main()
{
    encrypt("input.txt", "encrypted.txt", 5);
    decrypt("encrypted.txt", "decrypted.txt", 5);
    return 0;
}
