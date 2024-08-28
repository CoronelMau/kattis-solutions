#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int x;
    cin >> x;

    if (x % 2 == 0)
    {
      cout << x << " is even";
    }
    else
    {
      cout << x << " is odd";
    }

    cout << endl;
  }

  return 0;
}