/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

The Greatest Common Divisor of any two integers is the largest number that divides both integers.

Approach: Using Euclidean Algorithm with modulo operation
The Euclidean Algorithm operates on the principle that GCD(a,b) = GCD(b, a%b).
We repeatedly apply this until one of the numbers becomes 0.
When one number becomes 0, the other number is the GCD of the original numbers.

Time Complexity: O(log(min(a,b)))
Space Complexity: O(1)

Example:
Input: 20, 15
Output: 5
*/

#include <iostream>
#include <vector>  // Include necessary headers
using namespace std;

// GCD function using Euclidean Algorithm
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
    // Test cases
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    
    int gcd = findGcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}