#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int arr[3010], temp[3010], flag, i;

   int n;
   while (cin >> n)
   {
      flag = 0;
      for (i = 0; i < n; i++)
         cin >> arr[i];

      for (i = 0; i < n - 1; i++)
         temp[i] = abs(arr[i+1] - arr[i]);

      sort(temp, temp + i);

      for (i = 0; i < n - 1; i++)
      {
         if (temp[i] == 0 || temp[i] == temp[i + 1] || temp[i] > n - 1)
         {
            flag = 1;
            break;
         }
      }

      if (flag == 1)
         cout << "Not jolly" << endl;
      else
         cout << "Jolly" << endl;
   }
   return 0;
}