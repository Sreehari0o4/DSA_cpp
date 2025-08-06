/*
Problem Statement: Given an integer N, return all divisors of N.

A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Approach: Iterate from 1 to sqrt(N) and check for divisibility
To find all divisors efficiently, iterate from 1 to sqrt(N). For each integer i in this range:
- If N % i == 0, then i is a divisor.
- Additionally, N / i is also a divisor (unless i == N / i to avoid duplicates).

Collect all such divisors and return them in sorted order.

Time Complexity: O(sqrt(N))
Space Complexity: O(k), where k is the number of divisors

Example:
Input: 12
Output: 1, 2, 3, 4, 6, 12
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n) {
    int i=n;
    vector<int> divisors;
    for(int j=1; j<=sqrt(n); j++) {
        if(n % j == 0) {
            divisors.push_back(j);
            if(j != n / j) { // Avoid adding the square root twice
                divisors.push_back(n / j);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    vector<int> divisors = findDivisors(n);
    cout << "Divisors of " << n << " are: ";
    for(int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}