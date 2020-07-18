#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void selectionSort(vector<int> nums) {
    for(int i=0; i < nums.size(); i++) {
        int minIndex=i;
        for(int j= i+1; j < nums.size(); j++) {
            if(nums[j] <= nums[minIndex]) {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
    for(int x: nums) {
        cout << x << ", " << flush;
    }
    cout << endl;
    return;
}

int main() {
    vector<int> nums = {5, 6, 2, 9, 6, 4};
    // vector<int> sorted;
    // int input;
    // cin >> input;
    // for(int x: nums) {
    //     cin >>input;
    //     nums.push_back(input);
    // }
    selectionSort(nums);
}