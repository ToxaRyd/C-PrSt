#include <iostream.h>
#include <stdlib.h>
#include <math.h>
typedef int Number;
Number randNum() {
  return rand();
}
int main(int argc, char *argv[]) {
  int N = atoi(argv[1]);
  float ml = 0.0, m2 = 0.0;
  for (int i = 0; i < N; i++) {
    Number x = randNum();
    ml += ((float) x)/N;
    m2 += ((float) x*x)/N;
  }
  cout << " Среднее " << ml << endl;
  cout << "Ср_кв_откл " << sqrt(m2-m1*m1) << endl;
}