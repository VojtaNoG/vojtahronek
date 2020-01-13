#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std; //jmenny prostor umoznuje v zapisu vynechat vyraz z knihovny - v tomto pripade std

struct Animal {
  const char* name;
  const char* sound;
  //virtual const char* whatDoesItSay();

   Animal(const char* name) {
      this->name = name;
      this->sound = "";
   }

//   virtual const char* whatDoesItSay() {
//     sprintf(buffer, "%s says %s", name, sound);
//     return buffer;
//   }

   virtual const char* whatDoesItSay() {
   //Animal::whatDoesItSay(); //volani metody what DoesItSay() mimo tridu class
     strncat(buffer, name, 3); //http://www.cplusplus.com/reference/cstring/strncat/
     strncat(buffer, " says ", 6);
     strncat(buffer, sound, 24);
     return buffer;
  }

  // TODO
  protected:
    char buffer[48];
};

struct Dog : Animal { // implements/extends
  // TODO
   Dog (const char* name, const char* sound) : Animal(name) { // volani konstruktoru otcovske tridy konstruktorem zdedene
     this->sound = sound;
  }

//   Dog(string name, string sound)
//   {
//     //cout << name << " says " << sound << endl;
//     string text = name + " says " + sound;
//     getSentence(text);
//   }
//
//    string getSentence(string text) // pristupova metoda ke konstruktoru
//    {
//       cout << text << endl;
//       return text;
//    }
};


struct Fox : Animal { // implements/extends
  // TODO
  Fox (const char* name, const char* sound) : Animal(name) { // volani konstruktoru otcovske tridy konstruktorem zdedene
     this->sound = sound;
  }
};

// const char* whatDoesItSay() { //melo by byt ve tride
//   Animal::whatDoesItSay();
//     strncat(buffer, name); //http://www.cplusplus.com/reference/cstring/strncat/
//     return buffer;
// }

int main() {
  Animal* animals[] = {
    new Dog("dog", "woof"),
    new Fox("fox", "ringidingidingidingiding")
  };

  for(Animal* animal : animals) {
    cout << animal->whatDoesItSay() << endl;
  }
  return 0;
  // dog says woof
  // fox says ringidingidingidingiding
}