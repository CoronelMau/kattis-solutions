#include <bits/stdc++.h>

using namespace std;

int main()
{
  int g, s, c, t;
  cin >> g >> s >> c;
  g *= 3;
  s *= 2;
  t = g + s + c;

  if (t > 1)
  {
    if (t > 7)
    {
      cout << "Province";
    }
    else if (t > 4)
    {
      cout << "Duchy";
    }
    else
    {
      cout << "Estate";
    }
    cout << " or ";
  }

  if (t > 5)
  {
    cout << "Gold";
  }
  else if (t > 2)
  {
    cout << "Silver";
  }
  else
  {
    cout << "Copper";
  }

  return 0;
}