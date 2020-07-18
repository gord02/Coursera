#include <iostream>
#include <vector>
using namespace std;

// vector<int> pointsCoverSorted(int arr) {
// vector<int> R;
// int i=1;
// while (i<= n){
// int l= arr[i];
// int r= arr[i] + 1;
// R= union{[l,r]}

// }

// return R;
// }

// ===============================================
// SORTING FUNCTIONALITY
// ===============================================
int main() {
    // variable for max value at a index number
    int maxAtIndex=0;
    //  variable for max value
    int max=0;
    //   vector of numbers for input
    vector <int> numbers= {5,7,3,9,1,9};  
    //   vector for new values that are correctly organized
    vector <int> arranged;
    //   setting value of number size so it does not change
    //   this while loop finds new max values each time and perfroms logic see at the bottom
    while (0 < numbers.size()) {
    //   this while loop finds max value and the max value index at each iteration  
        for(int j= 0;j<numbers.size(); j++) {
            if(numbers[j] > max) {
                maxAtIndex=j;
                max=numbers[j];     
            }
        } 
        // used to remove currentmax value from array 
        numbers.erase(numbers.begin() + maxAtIndex);
        // puts currentmax into new array
        arranged.push_back(max);
        // resets max index and max so new number can be retrived on next interation of loop
        maxAtIndex=0;
        max=0;
    }
    // prints out values of the new array
    for (auto v : arranged) {
        cout << v << flush;
    }
    cout << endl;
}

