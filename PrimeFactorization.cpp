/* CREATED BY SIMBA ON 1-23-2017 THIS IS FREE SOFTWARE
Created this while working on a Euler Problem
It prints the prime of factorization of n
*/

#include <iostream>

using namespace std;

int main()
{
    int n = 971, a;
    int power = 0;

    while (!(n % 2))
    {
        power ++;
        n /= 2;
    }

      if (power > 0)
      {
          cout << 2 << "^" << power << endl;
      }
      power = 0;
      for (a = 3; a < n; a += 2)
      {
          if (!(n % a))
          do
          {
              power ++;
              n /= a;
          } while (!(n%a));

        cout << a << "^" << power << endl;
        power = 0;
      }
      cout << a << "^1";

}
