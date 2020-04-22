#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long int t, numberElephant, maxWeight, i, j, sum, k, count;

  cin >> t;

  for (i = 1; i <= t; i++)
  {

    cin >> numberElephant >> maxWeight;

    sum = 0;
    count = 0;
    k = 0;

    long long int wieght[numberElephant];

    for (j = 0; j < numberElephant; j++)
    {
      cin >> wieght[j];
    }

    sort(wieght, wieght + numberElephant);

    while (sum <= maxWeight)
    {
      sum = sum + wieght[k];
      k++;

      if (sum <= maxWeight)
        count++;
    }
    cout << count << endl;
  }
  return 0;
}