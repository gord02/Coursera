#include <iostream>
using namespace std;

// class 

// set name method 

// print name method

// allocate array of twenty six(twenty six objects)

// for every object set the name equal to a letter in the alphabet

// output string

class Animal {
  private:
    string name;
  public:
    Animal() {
      // cout << "animal created" << endl;
    }
    ~Animal() {
      // cout << "animal destroyed" << endl;
    }


    void setName(string name) {
      this->name= name;
    }
    void speak(string name) {
      // name= "George";
      cout << name << endl;
    }
};

int main() {
  Animal *animal1= new Animal[3];
  int count=0;
  char c = 'a'; 
  while(count < 26) {
    string name(1, c);
    (*animal1).speak(name);
    c++;
    count++;
  }
  delete [] animal1;
}