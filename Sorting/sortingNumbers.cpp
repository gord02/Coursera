#include <iostream>
#include <vector>
using namespace std;

void sortingNumbers(vector<int> nums, vector<int>& sorted) {
    for(int i=0; i <= nums.size(); i++) {
        int max= 0;
        if(max <= nums[i]) {
            max= nums[i];
        }
        sorted.push_back(nums[i]);
        // erase the ith element
        nums.erase(nums.begin()+i);
    }
    for(int x: sorted) {
        cout<< x << endl;
    }
return;
}


int main() {
    vector<int> nums(6, 0);
    int input;
    for (int x :nums) {
        cin >> input;
        nums.push_back(input);
    }
    vector<int> sorted(6);

    sortingNumbers(nums, sorted);
}