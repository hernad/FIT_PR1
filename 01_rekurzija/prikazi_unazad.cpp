#include <iostream>
using namespace std;

void prikaziUnazad() {

  char znak;

  cin.get(znak);

  if (znak != '.') {
     prikaziUnazad();
     cout << znak;
  } else
     cout << "\n obrnutim redoslijedom ste unijeli: ";

}

int main() {

  prikaziUnazad();

  return 0;
}
