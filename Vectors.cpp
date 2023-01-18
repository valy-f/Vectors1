#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
long long convert(int);
int main() {
    vector<int> bits;
    int dec, bin;
    cout << "Hello! This is a programme which implements right/left/arithmetical right shift.\nPlease enter your number: ";
    cin >> dec;
    bin = convert(dec);

    while (bin > 0) {
        bits.insert(bits.begin(), bin % 10);
        bin /= 10;
    }

    cout << "\nOriginal binary:    ";
    for (auto i = bits.begin(); i != bits.end(); ++i) {
        cout << *i << " ";
    }

    cout << "\nMove to the right:  ";
    vector<int> bitsright;
    bitsright = bits;
    bitsright.insert(bitsright.begin(), 0);
    bitsright.pop_back();
    for (int bit : bitsright) {
        cout << bit << " ";
    }
    cout << "\nMove to the left:   ";
    vector<int> bitsleft;
    bitsleft = bits;
    bitsleft.push_back(0);
    bitsleft.erase(bitsleft.begin());
    for (int bit : bitsleft) {
        cout << bit << " ";
    }
      
    cout << "\nArithmetical right: ";
    vector<int> aright;
    aright = bits;
    aright.insert(aright.begin(), 1);
    aright.pop_back();
    for (int bit : aright) {
        cout << bit << " ";
    }
}
long long convert(int dec) {
    long long bin = 0;
    int rem, i = 1;

    while (dec != 0) {
        rem = dec % 2;
        dec /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
