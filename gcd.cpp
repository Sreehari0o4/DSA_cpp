/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

The Greatest Common Divisor of any two integers is the largest number that divides both integers.

The Euclidean Algorithm is a method for finding the greatest common divisor of two numbers. It operates on the principle that the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number.

To find the GCD of n1 and n2 where n1 > n2:

Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
Once one of them becomes 0, the other number is the GCD of the original numbers.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {

    while(a > 0 && b > 0) {

        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }

    if(a == 0) {
        return b;
    }

    return a;
}




int main() {
    int n1,n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}