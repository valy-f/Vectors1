#include <iostream>
#include <vector>
#include <bitset>
#include "Moves.hpp"

int main()
{
    std::cout << "Normal vector:\n";
    std::vector<int> bit = {1,2,3,4,5,6};
    for (const int& i : bit) {
        std::cout << i << "  ";
    }

    Move bit1;
    bit1.LeftMove();
    bit1.RightMove();
    bit1.ArithmeticRight();
 
}
