#include <iostream>
using namespace std;

struct Button {
  virtual void waitForButton() {
    hello();
  }

  virtual const char* hello() {
    return "hello";
  }
};

struct ButtonPC : Button {
  virtual void waitForButton() { // Z mého hledání jsem usoudil, že nelze HW nezávisle získat stav tlačítka na klávesnici (HIGH, LOW), tudíž je nutné kód pro danou platformu silně optimalizovat.
    Button status;
    cout << "Press the ENTER key to output 'hello'.\n";
    while(true) {
    if (cin.get() == '\n') {
      cout << status.hello();
    }
    else cout << "I meant ONLY the ENTER key... Oh well.\n";
    }
  }
};

struct ButtonArduino : Button {
  virtual void waitForButton() {
//     buttonState = digitalRead(buttonPin); // do setup() funkce pinMode(buttonPin, INPUT); Serial.begin(9600);
//     if (buttonState != lastButtonState) {
//       if (buttonState == HIGH) {
//         Button press;
//         Serial.println(press.hello());
//       }
//       delay(50);
//     }
//     lastButtonState = buttonState;
  }
};

int main() {
  ButtonPC enter;
  enter.waitForButton();
  return 0;
}