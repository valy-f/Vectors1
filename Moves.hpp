#pragma once
class Move
{  
    std::vector<int> x = {1,2,3,4,5,6};
    int n = 1;
    int an = -1;
public:
    
    void LeftMove()
    {
        std::cout << "\n\nVector << " << n << "\n";
        for (const int& i : x) {
            std::cout << (i << n) << "  ";
        }
    }
    void RightMove()
    {
        std::cout << "\n\nVector >> " << n << "\n";
        for (const int& i : x) {
            std::cout << (i >> n) << "  ";
        }
    }
    void ArithmeticRight()
    {
        std::cout << "\n\nVector arithmetic shift >> " << n << "\n";
        for (const int& i : x) {
            std::cout << (i >> an) << "  "; // nie wymyuslilam jeszcze
        }
    }

};
