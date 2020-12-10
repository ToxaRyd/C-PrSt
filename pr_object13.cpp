#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <string_view>
 
auto dice() {
    static std::uniform_int_distribution<int> distr{1, 6};
    static std::random_device engine;
    static std::mt19937 noise{engine()};
    return distr(noise);
}
 
void iota(auto& v, int n) {
    std::ranges::generate(v, [&n] () mutable { return n++; });
}
 
void print(const auto& v, std::string_view comment) {
    for (int i : v) { std::cout << i << ' '; }
    std::cout << "(" << comment << ")\n";
}
 
int main()
{
    std::array<int, 8> v;
 
    std::ranges::generate(v.begin(), v.end(), dice);
    print(v, "dice");
    std::ranges::generate(v, dice);
    print(v, "dice");
 
    iota(v, 1);
    print(v, "iota");
}