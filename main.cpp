#include <iostream>
using namespace std;

int main()
{
  int secretnum;
  int guess;
  secretnum = 7;
  cout << "Guess a number";
  cin >> guess;
  if(secretnum == guess) 
  {
    cout << "Correct";
  }
  return 0;
}
