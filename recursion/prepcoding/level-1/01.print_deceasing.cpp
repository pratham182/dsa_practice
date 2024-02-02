// understand two thing first its high level thinking and second is low level thinking
// HLT : 1.Establish expectation 2.Faith 3. link both expectation and faith
// LLT : Dry run through stack
#include <iostream>
using namespace std;
void printD(int n)
{
  // base case
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printD(n - 1);
}
int main()
{
  int n;
  cin >> n;
  printD(n);
}