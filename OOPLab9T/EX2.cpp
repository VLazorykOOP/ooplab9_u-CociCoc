#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> V = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
    std::sort(V.begin(), V.end()); // сортируем вектор
    auto it = V.begin();
    while (it != V.end()) {
        auto upper = std::upper_bound(it, V.end(), *it);
        int count = std::distance(it, upper);
        std::cout << *it << " - " << count << std::endl;
        it = upper;
    }
    return 0;
}
