#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, pos;
  long long lowest = LLONG_MAX;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    long long num;
    cin >> num;

    if (num < lowest)
    {
      lowest = num;
      pos = i;
    }
  }

  cout << pos;

  return 0;
}