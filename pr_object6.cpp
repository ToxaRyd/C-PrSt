#include <iostream>
#include <algorithm>
#include <vector>

int main () {
  std::vector<int> myvector;

  for (int i=1; i<=5; i++)
    myvector.push_back(i*10);

  myvector.resize(myvector.size()+3);

  std::copy_backward ( myvector.begin(), myvector.begin()+5, myvector.end() );

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}