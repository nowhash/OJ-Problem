#include <iostream>
using namespace std;

int main()
{
   int problemSets[20], t, i, j;

   cin >> t;

   for (i = 1; i <= t; i++)
   {
      int flag = 0;

      for (j = 0; j < 13; j++)
         cin >> problemSets[j];

      for (j = 0; j < 13; j++)
      {
         if (problemSets[j] == 0)
            flag = 1;
      }

      if (flag == 1)
         cout << "Set #" << i << ": "
              << "No" << endl;
      else
         cout << "Set #" << i << ": "
              << "Yes" << endl;
   }

   return 0;
}