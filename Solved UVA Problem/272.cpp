//Unaccepted Code
/*#include <iostream>
using namespace std;

int main()
{
   char str[100000];
   int count = 0;
   while (fgets(str, 1000000, stdin))
   {
      for (int i = 0; str[i] != '\0'; i++)
      {
         if (str[i] == '"')
         {
            count++;

            if (count % 2 != 0)
               cout << "`"
                    << "`";
            else
               cout << "'"
                    << "'";
         }
         else
            cout << str[i];
      }
   }
   return 0;
}
*/

//Accepted Code
#include <iostream>
using namespace std;

int main()
{
   char ch;
   int count = 0;

   while (scanf("%c", &ch) == 1)
   {
      if (ch == '"')
      {
         count++;
         if (count % 2 != 0)
            cout << "`"
                 << "`";
         else
            cout << "'"
                 << "'";
      }
      else
         cout << ch;
   }
   return 0;
}
