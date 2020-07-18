#include <iostream>
#include <vector>
using namespace std;

int boxFiller(int num) {
    vector<int> total(10);
    total.push_back(0);
for (int i=0; i<= total.size(); i++) {
// if(total[i] == total[i])
    total[i] += 1;
}
for(int x: total) {
    cout << x << endl;
}

}




int main() {
    boxFiller();
 }