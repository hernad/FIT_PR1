#include <iostream>

using namespace std;


bool check_1()
{
   cout << "check 1" << endl;
   return true;
}

bool check_2()
{
   cout << "check 2" << endl;
   return true;
}

bool check_3()
{
   cout << "check 3" << endl;
   return true;
}

//typedef t_check_fn = bool (*fn)();


bool (*  get_check_fn(int fun_num))()
//t_check_fn get_check_fn(int fun_num)
{
  switch (fun_num)
  {
      case 1:
         return &check_1;
         break;

      case 2:
         return &check_2;
         break;
      
      default:
         return &check_3;
  }
}



int main()
{

   cout << "ptr na funkcije 2" << endl;

   bool (*pf)() =  get_check_fn(1);
   pf();

   pf = get_check_fn(2);
   pf();

   return 0;
}
