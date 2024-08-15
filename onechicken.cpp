#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  if (n > m && n - m == 1)
  {
    cout << "Dr. Chaz needs 1 more piece of chicken!";
  }
  else if (n > m)
  {
    cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!";
  }
  else if (n < m && m - n == 1)
  {
    cout << "Dr. Chaz will have 1 piece of chicken left over!";
  }
  else
  {
    cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!";
  }
}