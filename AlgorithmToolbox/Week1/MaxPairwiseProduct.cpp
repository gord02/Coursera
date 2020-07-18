#include <iostream>
#include <vector>
using namespace std;

int MaxPairwiseProduct(const vector<int>& numbers) {
    int result= 0;
    int n = numbers.size();
    for (int i= 0; i<n; ++i) {
        for (int j = i + 1; j<n; ++j) {
            if (numbers[i] * numbers[j] > result) {
                result = numbers[i] * numbers[j];
            }
        }
    }
    return result;
}

long long MaxPairwiseProductFast(const vector<int> & numbers) {
    int n = numbers.size();

    int max_index1 = -1;
    // for (int i=0; i<n; ++i){
    //     if((max_index1 == -1) || (numbers[i] > numbers[max_index1])) {
    //         max_index1= i;
    //     }
    // }

    for (int i : n) {
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1])) {
            max_index1= i;
        }
    }

    int max_index2 = -1;
    for(int j=0; j<n; ++j) {
        if((numbers[j] != numbers[max_index1] && ((max_index2 == -1 || (numbers[j] > numbers[max_index2]))) {
            max_index2= j;
        }
        return ((long long)(numbers[max_index1])) * numbers[max_index2];
    }
}


int main() {
int n;
cin >> n;
vector<int> numbers(n);
for (int i=0; i< n; ++i) {
    cin >> numbers[i];
}

int result = MaxPairwiseProduct(numbers);
cout << result << "\n";
return 0;


// STRESS TEST
// this creates the stress test for the functions I have, test functions utlitze to functions that have the same purpose but are singnifcantly different so that there methods differ but can for the most part arrive at the same conclusions. By doing so we create possible situations where they output different answers and therefore one of these porgrams were wrong or potentially both were wrong. Using thsi knowlegde we can duebug our porgrams(main program) to fuction better and account for all scenarios.


// ====================================================
//   1. this generates random test values for vectors
// ====================================================
    //  creates loop ( an infite loop thta test numebrs)
    while(true) {
        // this genreates number of number n, by using rand operator and then divdes then possible very large numbers by 10 and finds the remainder given by it. the value will be at elast two
        int n= rand() % 10 +2; // therefore random number between 2-11 is calculated, range of index values
        // "\n" : Only inserts a new line
        // couting n allows use to see which values did not work for the functions
        cout << n << "\n";
        vector<int> a;
        for (int i=0; i<n; ++i) {
            // this setts limit for the range of the vector a. This is done by using the rand and taking the remainder of 100000, which results the range ebing from 1-100000 or 99999
            a.push_back(rand() % 100000); // range of values at each index
        }
        for (int i=0; i < n; ++i) {
            // this prints all the values of the vector
            cout << a[i] << " ";
        }

// ====================================================
//   2. lanuches functions of the test vectors
// ====================================================
        cout << "\n";
        // this calls funcitons and passes in the vector parameter
        long long res1= MaxPairwiseProduct(a);
        long long res2= MaxPairwiseProductFast(a);

// ====================================================
//   3. this compares results of the function
// ====================================================
        if(res1 != res2) {
            cout << "Wrong answer:" << res1 << " " << res2 << "\n";
            // this break statement is used end the porcess of the while loop(which is currently infinte) once an incosistenecy in the answers is found between product of each code
            break;
        } else {
            cout << "OK\n";
        }

    }
}
