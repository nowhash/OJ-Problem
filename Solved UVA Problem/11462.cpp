#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   long long int n, i, t;
   do
   {
      cin >> n;
      if (n == 0)
         break;

      long long int arr[n];

      for (int j = 0; j < n; j++)
      {
         cin >> arr[j];
      }

      sort(arr, arr + n);

      for (int k = 0; k < n; k++)
      {
         cout << arr[k];

         if (k < (n - 1))
            cout << " ";
      }
      cout << "\n";
      
   } while (n != 0);
   return 0;
}