// OOPLab9T.cpp 

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout << "Lab №9. STL. \n";
    std::vector<int> L = { 1, 2, 2, 3, 3, 1, 2, 2, 2, 4 };

    
    auto it = std::adjacent_find(L.rbegin(), L.rend());
    if (it != L.rend()) {
        
        *it *= 2;
        *(it + 1) *= 2;
    }

    
    for (int x : L) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    return 0;
}
