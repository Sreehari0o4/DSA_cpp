/*
Problem Statement: Given an array of integers, determine whether the array is sorted and rotated.

An array is considered sorted and rotated if it is possible to rotate it (circularly shift its elements) so that it becomes sorted in non-decreasing order.

Approach: Count the number of places where an element is greater than its next element (considering the array as circular). If this count is more than 1, the array is not sorted and rotated; otherwise, it is.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
Input: [3, 4, 5, 1, 2]
Output: Array is sorted.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int n) {
    int count =0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (isSorted(arr.data(), n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}