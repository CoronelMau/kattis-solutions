#include <bits/stdc++.h>

using namespace std;

int main()
{
  int count;
  double res;
  cin >> count;

  while (count--)
  {
    double q, y;
    cin >> q >> y;
    res += q * y;
  }

  printf("%.3f\n", res);

  return 0;
}