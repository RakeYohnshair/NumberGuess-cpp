#include <iostream>
using namespace std;

int main()
{
  int secretnum = 7;
  int guess;
  cout << "Guess a number";
  cin >> guess;
  if(secretnum == guess) 
  {
    cout << "Correct";
  }
  return 0;
}
