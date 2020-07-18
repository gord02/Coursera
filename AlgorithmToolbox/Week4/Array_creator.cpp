#include <iostream>
#include <vector>
using namespace std;

// reference = &, used to denote that i wish ot change the actual arraylist not just a copy of it that is passed in
void arrayCreator(int input, vector<int>& arrayList) {
    if(input == 0) {
        arrayList.push_back(input);
        return;
    }
    arrayList.push_back(input);
    return arrayCreator(input-1, arrayList);
}

int main() {
    int input;
    vector<int> arrayList;
    cin >> input;
    arrayCreator(input, arrayList);
    // Reverse the vector 
    reverse(arrayList.begin(), arrayList.end()); 
    for(int x: arrayList) {
        cout << x << ", "<< flush;
    }
    return 0;
}