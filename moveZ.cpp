/*
Problem Statement:
Given an array of integers, move all zeros to the end of the array while maintaining the relative order of the non-zero elements. The operation should be performed in-place.

Approach:
Iterate through the array and copy all non-zero elements to the front. After all non-zero elements have been moved, fill the remaining positions in the array with zeros.

Time Complexity: O(n), where n is the number of elements in the array.
Space Complexity: O(1), as the operation is performed in-place.

Example:
Input: arr = [0, 1, 0, 3, 12]
Output: Array after moving zeros: [1, 3, 12, 0, 0]
*/

#include<iostream>
#include<vector>
using namespace std;

int moveZeros(vector<int>& arr, int n) {
    if (arr.empty()) return 0;
    int newLength = 0;
    for ( int i = 0; i < n; i++){
        if (arr[i] != 0){
            arr[newLength] = arr[i];
            newLength++;
        }
    }
    for (int i = newLength; i < n; i++){
        arr[i] = 0;
    }
    return newLength;
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
    int newLength = moveZeros(arr,n);
    cout << "After moving zeros: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}