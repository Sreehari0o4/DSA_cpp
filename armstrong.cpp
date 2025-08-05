/*
Problem Statement: Given an integer N, determine whether it is an Armstrong number.

An Armstrong number (also known as narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

Approach: 
1. Count the number of digits in N.
2. For each digit, raise it to the power of the total number of digits and sum the results.
3. If the sum equals N, then N is an Armstrong number.

Time Complexity: O(d), where d is the number of digits in N.
Space Complexity: O(1)

Example:
Input: 153
Output: Yes (153 is an Armstrong number)
*/

#include <iostream> 
#include <string>   // For to_string function
#include <cmath>   // For pow function
using namespace std;

bool isArmstrong(int num) {

    int k = to_string(num).length();
    int sum = 0;

    int n = num;
    while(n>0){
        int digit = n%10;
        sum = sum+ pow(digit,k);
        n=n/10;
    }

    return sum == num ? true : false;
}

int main() {
    cout << "Enter an integer: ";
    int number;
    cin >> number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}