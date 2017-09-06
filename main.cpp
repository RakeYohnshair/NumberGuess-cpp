#include <iostream>
using namespace std;

int main()
{
  int secretnum = 7;
  int guess;
  cout << "Guess a number";
  cin >> guess;
  if (secretnum == guess) 
  {
    cout << "Correct";
  }
  else
  {
    cout << "Wrong, try again";
  }
  return 0;
}
