#include <iostream>
using namespace std;
#include <vector>

int countTxt(Directory dir) {
    if (dir == null) return 0;
    int count =0;
    for (File file: dir ) {
        if(file.endsWith(".txt")) {
            count+=1;
        }
    }
    for(Directory subdir: dir) {
        count+= countTxt(subdir);
    }
    return count;
}

int fibonacciRecursion(int n){
    if(n<=1) {
        return n;
    } else { // Nth 2!
   return fibonacciRecursion(n-1)+ fibonacciRecursion(n-2);
}

int fibList(n) {
    vector <int> F;
    F[0] =0;
    F[1] =1;
    for(i=2;i<=n;i++) {
        F[i] =F[i- 1] + F[i - 2];
    }
    reutrn F[n];
}

int main(){

    int n = 5;
    auto fib_n = fibonacciRecursion(n);

    cout << "The Nth Fibonacci number is:" << fib_n << endl;

}
