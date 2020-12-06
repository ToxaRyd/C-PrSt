#include <algorithm>
#include <array>
#include <iostream>
 
bool greater(int a, int b)
{
  return (a > b);
}
 
int main()
{
  std::array arr{ 13, 90, 99, 5, 40, 80 };

  std::sort(arr.begin(), arr.end(), greater);
 
  for (int i : arr)
  {
    std::cout << i << ' ';
  }
 
  std::cout << '\n';
 
  return 0;
}