#include <cstdio>
#include <cstring>


struct Animal {
  const char* name;
  virtual const char* whatDoesItSay();

  // TODO
  protected:
  char* buffer[48];
};



struct Dog : Animal { // implements/extends
  // TODO
   Dog (const char* name, virtual const char* whatDoesItSay()) {
     this->name = name;
     //this->whatDoesItSay = whatDoesItSay;
  }
};

virtual const char* whatDoesItSay() {
  sprintf(buffer, "%s says %s", name, whatDoesItSay);
  return buffer;
}

struct Fox : Animal { // implements/extends
  // TODO
  Fox (const char* name, virtual const char* whatDoesItSay) {
     this->name = name;
     this->whatDoesItSay = whatDoesItSay;
  }
};

const char* whatDoesItSay() {
  Animal::whatDoesItSay();
  if(const char* name == dog) {
    strcat(buffer, "dog"); //dog by byl na konci retezce...
    return buffer;
  }
  else {
    strcat(buffer, "fox");
    return buffer; //fox by byla na konci retezce...
  }
}

int main() {
  Animal* animals[] = {
    new Dog("dog", "woof"),
    new Fox("fox", "ringidingidingidingiding")
  }

  for(Animal* animal : animals) {
    animal->whatDoesItSay();
  }

  // dog says woof
  // fox says ringidingidingidingiding

}
