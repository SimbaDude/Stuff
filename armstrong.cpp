#include <iostream>
#include <math.h>
using namespace std;

int main() {
    bool armstrong = false;
    unsigned int num, n, mod, digits = 0, sum = 0;
    cin >> num;
    n = num;
    while(n)
    {
        digits ++;
        n /= 10;
    }
    n = num;
    while(n)
    {
        mod = n % 10;
        double s = pow(mod, digits); // if value s is stored as an integer the program will fail ?? why ??
        n /= 10;
        sum += s;
       // cout << "n = " << n << " s = " << s << " mod = " << mod << " sum = " << sum << endl;

    }
    if (sum == num)
        armstrong = true;
    cout<< armstrong;




	return 0;
}
