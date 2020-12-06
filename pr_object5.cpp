#include <algorithm>
#include <array>
#include <iostream>
 
int main()
{
  std::array<int, 6> arr{ 13, 90, 99, 5, 40, 80 };
 
  std::cout << "Enter a value to search for and replace with: ";  
  int search{};
  int replace{};
  std::cin >> search >> replace;
  auto found{ std::find(arr.begin(), arr.end(), search) };
  if (found == arr.end())
  {
    std::cout << "Could not find " << search << '\n';
  }
  else
  {
    *found = replace;
  }
 
  for (int i : arr)
  {
    std::cout << i << ' ';
  }
 
  std::cout << '\n';
  return 0;
}