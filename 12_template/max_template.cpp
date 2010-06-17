#include <iostream>

using namespace std;


template <class T>
T Max(T a, T b) {
  T rezultat;
  rezultat = (a > b) ? a : b;

  return rezultat;
}


int main() {

    int i = 5, j = 10;

    cout << "max 5, 10 je =" << Max<int>(i, j) << endl;;

    double d1 = 5.5, d2 = 8.8;

    cout << "max 5.5, 8.8 je=" << Max<double>(d1, d2) << endl;

    return 0;
}
