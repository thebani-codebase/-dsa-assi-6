/*
Name: Bani
Roll No: 102403190
 We know that selection sort 
algorithm takes the minimum on every pass on the array, and place it at its 
correct position. The idea is to take also the maximum on every pass and place 
it at its correct position. So in every pass, we keep track of both maximum and 
minimum and array becomes sorted from both ends. Implement this logic.
*/

#include <iostream>
#include <vector>
using namespace std;

void improvedSelectionSort(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int minIdx = left, maxIdx = left;
        
        for (int i = left; i <= right; i++) {
            if (arr[i] < arr[minIdx])
                minIdx = i;
            if (arr[i] > arr[maxIdx])
                maxIdx = i;
        }
        
        swap(arr[left], arr[minIdx]);
        
        if (maxIdx == left)
            maxIdx = minIdx;
        
        swap(arr[right], arr[maxIdx]);
        
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11, 90, 34};
    
    cout << "Original: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    improvedSelectionSort(arr);
    
    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
