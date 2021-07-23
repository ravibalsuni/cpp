//============================================================================
// Name        : HornersRulePolynomial.cpp
// Author      : Ravi Balsuni
// Version     :
// Copyright   : 
// Description : Horners Rule Polynomial in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int hornersRule(int polynomialCoeffs[], int n, int x);

int main(){
	// generic function A(x) = a(n) x^n + a(n-1) x^n-1 + ..... + a(1) x + a(0)
    // evaluate value of 3x4 - 5x3 + 2x2 + 5x - 3 for x = 2
    int polynomialCoeffs[] = {3, -5, 2, 5, -3};
    int x = 2;
    int n = sizeof(polynomialCoeffs)/sizeof(polynomialCoeffs[0]);

    cout << "value of n - " << n << endl;
    cout << "Value of polynomial 3x4 - 5x3 + 2x2 + 5x - 3, for x = 2 is " << hornersRule(polynomialCoeffs, n, x);
    return 0;
}

// generic rule A(x) = (... (a(n) x0 + a(n-1))x0 + .... + a1) x0 + a0
// evaluates - polynomialCoeffs[0]x(n-1) + polynomialCoeffs[1]x(n-2) + .. + polynomialCoeffs[n-1]
int hornersRule(int polynomialCoeffs[], int n, int x){
    int result = polynomialCoeffs[0];

    for (int i=1; i<n; i++)
        result = result*x + polynomialCoeffs[i];

    return result;
}
