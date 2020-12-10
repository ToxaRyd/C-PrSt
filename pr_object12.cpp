#include <random>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
 
int main()
{
    std::mt19937 rng;
    std::generate_n(std::ostream_iterator<std::mt19937::result_type>(std::cout, " "),
                    5, std::ref(rng));
    std::cout << '\n';
}