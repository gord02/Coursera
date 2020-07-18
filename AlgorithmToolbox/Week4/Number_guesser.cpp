#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int numberGuesser() {
    // Seed the random generator 
    
    srand ( time(NULL) );
    int maxInRange= 15;
    int correctAnswer= rand() % maxInRange;
    int tries = 4;
    int guess;

    cout << "The values can range from 0 to " << flush; 
    cout << maxInRange << endl;; 

    while (tries > 0) {
        cout << "Make your prediction: " << endl;
        cin >> guess;
        tries--;
        if(guess <0 || guess > maxInRange) {
            cout << "invalid input, please try again" << endl; 
            tries++;
        }
        else if (guess > correctAnswer){
            cout << "Too large" << endl;
        }
        else if(guess < correctAnswer) {
            cout << "Too small" << endl;
        } 
        else {
            cout << "Correct answer!" << endl;
            cout << "'" << flush;
            cout <<  guess << flush;
            cout << "'" << flush;
            cout << " was the correct value! Game over" << endl;
            break;
        }
        cout << "Tries left: " << flush;
        cout << tries << endl;
        if(tries == 0 ){
            cout << "GAME OVER" << endl;
            cout << correctAnswer << endl;
            break;
        }
     
    }  
    return (guess); 
    }

int main() {
   numberGuesser();

}