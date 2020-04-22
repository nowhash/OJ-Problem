//Uva 900
#include <iostream>
using namespace std;

int main()
{
   int n, i, next;
   while (cin >> n)
   {
      if (n == 0)
         break;
      int sum = 0, t1 = 0, t2 = 1;

      for (i = 0; i < n; i++)
      {
         sum = sum + t1;
         next = t1 + t2;
         t1 = t2;
         t2 = next;
      }

      cout << sum + 1 << endl;
   }

   return 0;
}