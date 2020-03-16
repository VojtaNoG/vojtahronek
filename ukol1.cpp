#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct VektorTest {
  int i = -1;
  vector<int> souradnice;
  string pridejSouradnici;
  int pocet() { //https://twitter.com/towernter/status/1237383946280652806?s=20
    i=i+1;
    return i;
  }

  void vstup() {
  	while(true) {
      cout << "Zadej "<< pocet() << ". souradnici vektoru: " << endl;
      cin >> pridejSouradnici;
    if (pridejSouradnici == "q") {
  			break;
  		}
  		else {
        int data = stoi(pridejSouradnici); //string to int
        souradnice.push_back(data);
  		}
  	}
  }

  void vypis() {
    cout << "\nZadal si souradnice:\n";
  	for (int i : souradnice) {
  		cout << i << endl;
  	}
  }

  VektorTest() {
    vstup();
    vypis();
  }
  ~VektorTest() {}
};

int main(){
  VektorTest test;
	return 0;
}