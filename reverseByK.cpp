/*
Problem Statement:
Given an array, reverse the array in groups of size k. If the number of elements is not a multiple of k, then the remaining elements at the end should be reversed as well.

Approach:
First, reverse the entire array. Then, reverse the first k elements and the remaining n-k elements separately to achieve the desired rotation by k positions.

Time Complexity: O(n), where n is the number of elements in the array.
Space Complexity: O(1), as the operation is performed in-place.

Example:
Input: arr = [1, 2, 3, 4, 5, 6], k = 2
Output: Array after reversing in groups of k: [5, 6, 1, 2, 3, 4]
*/

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    cout << "Array after reversing in groups of k: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
