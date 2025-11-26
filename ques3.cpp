
/*
Name: Bani
Roll No: 102403190
Additional Question 1: Find the element that appears more than n/2 times
*/

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    return candidate;
}

int main() {
    vector<int> nums1 = {3, 2, 3};
    cout << "Majority Element: " << majorityElement(nums1) << endl;
    
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums2) << endl;
    
    return 0;
}

