#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
 
int main()
{
    std::vector<int> v1{0, 1, 2, 3, 40, 40, 41, 41, 5};
 
    namespace ranges = std::ranges;
 
    auto i1 = ranges::adjacent_find(v1.begin(), v1.end());
 
    if (i1 == v1.end()) {
        std::cout << "Нет совпадений\n";
    } else {
        std::cout << "Первая смежная пара элементов: "
                  << ranges::distance(v1.begin(), i1) << '\n';
    }
 
    auto i2 = ranges::adjacent_find(v1, ranges::greater());
    if (i2 == v1.end()) {
        std::cout << "Весь вектор отсортирован в порядке возрастания\n";
    } else {
        std::cout << "Последний элемент в неубывающей последовательности: "
                  << ranges::distance(v1.begin(), i2) << '\n';
    }
}