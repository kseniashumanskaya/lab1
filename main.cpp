#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
double exponent(double num, int exp) {
    if (exp < 1)
        return 1;
    return num * exponent(num, --exp);
}

int main() {
    int k, m;
    double x, res, term, ch;
    cout << "input k > 1: ";
    cin >> k;
    if (k <= 1)
        return 1;
    
    cout << "input x: ";
    cin >> x;
    cout << "number of digits after decimal point: ";
    cin >> m;
    
    res = 0;
    term = 1;
    if (x == 0)
        res = 1;
    else {
        
        for (int i = 2; abs(term) > 1 / exponent(10, k); i += 2) {
            
            res += term;
            term = exponent(x, i);
            for (int j = 2; j <= i; j++) {
                term /= j;
            }
            cout << i <<  ' ' << term << endl;
        }
        ch = (exp(x) + exp(-x)) / 2;
         
    }
    cout << fixed << setprecision(m) << res << " " << ch << "\n";
    

    system("pause");
    return 0;
}
