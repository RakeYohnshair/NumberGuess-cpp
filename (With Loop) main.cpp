#include <iostream>
using namespace std;

int main()
{
  int secretnum = 7;
  int guess;
  while (secretnum != guess) 
  {
    cout << "Guess a number (1-10)" << endl;
    cin >> guess;
    if (secretnum != guess)
    {
      cout << "Wrong, try again" << endl;
    }
    else
    {
      cout << "Correct!" << endl;
    }
  }
  return 0;
}
