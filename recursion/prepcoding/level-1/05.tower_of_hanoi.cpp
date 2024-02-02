// tower of hanoi using recrusion
// print all the steps from source to destination using any other tower helper
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void toh(int n, string tower1, string tower2, string tower3)
{
  if (n == 0)
  {
    return;
  }

  toh(n - 1, tower1, tower3, tower2);
  cout << n << "[" << tower1 << "->" << tower2 << "]" << endl;
  toh(n - 1, tower3, tower2, tower1);
}
int main()
{

  int n;
  cout << "Enter the value of disk" << endl;
  cin >> n;
  toh(n, "A", "B", "C");
}