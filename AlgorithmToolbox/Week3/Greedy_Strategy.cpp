#include <iostream>
#include <vector>

using namespace std;


int main() {
    // variabele for max value at a index number
    int maxAtIndex=0;
    //  varibale for max value
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
/*
L= the distance capable of being traveled
x = the position(gas station or any position along path to B), each gas station
n= the number of 
current refill is the current postion x we are standing at.
numrefils= is the nubmer of refills which is the answer to the problem

1. while loop to check postions from left(current refefill position or index is not yet n which is B)
2. lastfefill(our last refill was made at the current positon)= currentRefill(is postions, current position)

3. The nestted while loop moves you across towrds the destination B or to the furthest reachable gas station.
this is done by grdual increasing the current position inside the array x untill it reaches the right most postion in the array avaible with the amount of gas
4. x[currentRefill +1] - x[lastRefill] <= L; , this checks if you are able to travel to the next refill station by subtracting from the current position and checking if it is the length that you are allowed to travel which is L 
5. then after this condtional statement  that checks if the next destination is reachable, then the cureent refill is increased by one
6. if currentRefill == Lastfefill this means that there wasnt enough fuel to go anywhere to even get to next gas station, coudlnt go to right. Therefore return impossible
7. the second if statementd checks if we are not at B yet and therefore if we are not it adds to the numreffiils

*/

//    for(int j= 0;j<numbers.size(); j++) {
//             if(numbers[j] > max) {
//                 maxAtIndex=j;
//                 max=numbers[j];     
//             }
//         } 