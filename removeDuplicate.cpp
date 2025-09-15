/*
Problem Statement:
Given a sorted array of integers (possibly with duplicates), remove the duplicates in-place such that each unique element appears only once and return the new length of the array. The relative order of the elements should be kept the same.

Approach:
Use two pointers: one to iterate through the array and another to keep track of the position of the last unique element found. When a new unique element is found, increment the unique pointer and update the array in-place.

Time Complexity: O(n), where n is the number of elements in the array.
Space Complexity: O(1), as the operation is performed in-place.

Example:
Input: [1, 1, 2, 2, 3]
Output: New length after removing duplicates: 3
Modified array: [1, 2, 3, ...]
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums, int n) {
        if (nums.empty()) return 0;
        int newLength = 0;
        for ( int i = 1; i < n; i++){
            if (nums[newLength] != nums[i]){
                newLength++;
                nums[newLength] = nums[i];
            }
        }
        return newLength + 1;
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
    int newLength = removeDuplicates(arr,n);
    cout << "New length after removing duplicates: " << newLength << endl;
    
    return 0;
}