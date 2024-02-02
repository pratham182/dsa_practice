#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> key = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> letterCombinations(string digits)
{
  // base case
  if (digits.length() == 0)
  {
    vector<string> result = {};
    return result;
  }

  // last walo ka recrusion anwser la ke dega
  char ch = digits[0];
  string ros = digits.substr(1);

  // call
  vector<string> resultt = letterCombinations(ros); // faith
  vector<string> answer;

  string first_char = key[ch - '0' - 2];

  for (int i = 0; i < first_char.length(); i++)
  {
    char chChar = first_char[i];

    for (const string &h : resultt)
    {

      answer.push_back(chChar + h);
    }
  }
  return answer;
}
int main()
{
  vector<string> str = letterCombinations("2");

  for (const string &h : str)
  {

    cout << h << endl;
  }
}