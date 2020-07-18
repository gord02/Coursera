#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm> 
#include <bits/stdc++.h> 

using namespace std;

int main() {
    vector<int> A= {1,99};
    int M= max_element(A.begin(), A.end());
    int M = max(A);
    vector<int> Count(M+1);
    for(int i =0;i<A.size();i++) {
        Count[A[i]]= Count[A[i]] + 1;
    }
    for(int x: Count) {
        cout << x << endl;
    }

}