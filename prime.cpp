/*
Problem Statement: Given an integer n, determine whether it is a prime number.

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Approach: Count the number of factors of n by iterating from 1 to sqrt(n).
For each divisor i, increment the count for both i and n/i (if they are distinct).
If the total number of factors is exactly 1 (which is incorrect for prime checking; should be 2), the number is considered prime.

Time Complexity: O(sqrt(n))
Space Complexity: O(1)

Example:
Input: 7
Output: 7 is a prime number.
*/
#include <iostream>
#include <cmath>
using namespace std;


bool checkPrime(int n){ 

    int cnt = 0;

    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 
            cnt = cnt++;

            if(n / i != i){
                cnt++;
            }
        }
    }
    cout << "Number of factors: " << cnt << endl;

    if(cnt == 1){
        return true;
    }

    return false;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = checkPrime(n);

    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}