#include <bits/stdc++.h>

using namespace std;

int main()
{
  int res = 0, n = 0, total = 0;
  cin >> res >> n;

  while (n--)
  {
    int p;
    cin >> p;
    total += res - p;
  }

  cout << total + res << endl;

  return 0;
}