#pragma once
class Move
{  
    std::vector<int> x = {1,2,3,4,5,6};
    int n = 1;
public:
    
    void LeftMove()
    {
        std::cout << "\nVector << n:\n";
        for (const int& i : x) {
            std::cout << (i << n) << "  ";
        }
    }
    void RightMove()
    {
        std::cout << "\nVector >> n:\n";
        for (const int& i : x) {
            std::cout << (i >> n) << "  ";
        }
    }
    void ArithmeticRight()
    {
        std::cout << "\nVector arithmetic shift >> n:\n";
        for (const int& i : x) {
            std::cout << (i >> n) << "  "; // nie wymyuslilam jeszcze
        }
    }

};