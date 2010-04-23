#include <iostream>

using namespace std;

int saberi_5_6(int x, int y);
int saberi_4_5(int x, int y);

int main () {

  int x, y;

  cout << "unesi dva broja x , y (x<y) \n"; 

  cin >> x >> y;

  cout << saberi_5_6(x, y);
  cout << endl;

return 0;

}
   

int saberi_5_6(int x, int y) {

  bool djelj56y = ( (y % 4) == 0 || (y % 5) == 0 );

  int tmpy = 0;

  if (djelj56y)
      tmpy = y;

  // bazni slucaj
  if (x == y) return tmpy; 

  return saberi_5_6(x, y-1) + tmpy;  

}

int saberi_4_5(int x, int y) {

if (x > y)
  return 0;
else {

   if  ( y%4 == 0 || y % 5 == 0)
        return y + saberi_4_5(x, y-1);
   else
       saberi_4_5(x, y-1);
}

}
