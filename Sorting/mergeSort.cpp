#include <iostream>
#include <vector>
using namespace std;

// original vector is passed into function that will be split it
void splitSort(vector<int> A) {
    if (A.size() == 0) {
        cout << A[0] << endl;
    }
    int m = A.size()/2;
    // B.push_back()
    vector<int> B(m);
    vector<int> C(A.size()-m);
}




void mergeSort(vector<int> B, vector<int> C) {
    vector<int> D(B.size() + C.size());
    while (B.size() >> 0 || C.size() >> 0 ) {
        int b= B[0];
        int c= C[0];
        if (b<= c) {
            D.push_back(b);
            B.erase(B.begin()+b);
        } else {
            D.push_back(c);
            C.erase(C.begin()+c);
        }
    }
    if (B.size()==0) {
    for(int x: C) {
            D.push_back(x);
    }
    }else if (C.size()==0) {
        for(int x: B) {
            D.push_back(x);
    }
    }
    for(int x: D) {
        cout << x << endl;
    }
    return;
}


int main() {
    int p;
    int q;
    vector<int> B(p);
    vector<int> C(q);
    mergeSort(B, C);
}