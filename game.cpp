#include <stdio.h>
#include <conio.h> //pro skryty vstup getch();

struct Game {
  virtual bool checkWin() = 0;
  virtual void makeMove() = 0;
  virtual void printResult() = 0;
  
  bool turn = true;
  
  void startGame() {
    while(checkWin() == false) {
      turn = !turn;
      makeMove();
    }
    printResult();
  }
};

struct MyGame : Game {
  int moves;
  char p1, p2;
  MyGame() {
    moves = 0;
  }
  virtual void makeMove() {
    if(turn) {
        p1 = getch();
        p2 = getch();
    }
    moves++;
  }
  virtual bool checkWin() {
    if(moves<2) return false;
    else return true;
  }
    virtual void printResult() {
        if(p1+7 <= p2 || p1-7 >= p2) { // predchozi zadani : p1 <= p2 : pismeno drive v abecede vyhrava
            printf("Player 1 won. Letter: %c", p1);
        }
        else {
            printf("Player 2 won. Letter: %c", p2);
        }
    }
};

int main() {
    MyGame MyGame;
    MyGame.startGame();
}
