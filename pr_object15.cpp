#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
 
int main()
{
    std::vector<int> from_vector(10);
    std::iota(from_vector.begin(), from_vector.end(), 0);
 
    std::vector<int> to_vector;
 
    namespace ranges = std::ranges;
    ranges::copy(from_vector.begin(), from_vector.end(),
                 std::back_inserter(to_vector));
    
    std::cout << "to_vector contains: ";
 
    ranges::copy(to_vector, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    std::cout << "odd numbers in to_vector are: ";
 
    ranges::copy_if(to_vector, std::ostream_iterator<int>(std::cout, " "),
                 [](int x) { return (x % 2) == 1; });
    std::cout << '\n';
}