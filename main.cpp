#include <iostream>
#include <string> 
using namespace std;
//globals
int sq1 = 0;
int sq2 = 0;
int sq3 = 0;
int sq4 = 0;
int sq5 = 0;
int sq6 = 0;
int sq7 = 0;
int sq8 = 0;
int sq9 = 0;
int sq10 = 0;
int sq11 = 0;
int sq12 = 0;
int sq13 = 0;
int sq14 = 0;
int sq15 = 0;
int sq16 = 0;
//draw the board to the screen for the console.
void drawBoard(int sq1, int sq2, int sq3, int sq4, int sq5, int sq6, int sq7, int sq8, int sq9, int sq10, int sq11, int sq12, int sq13, int sq14, int sq15, int sq16) {
    //change all values into strings
    string s1 = to_string(sq1);
    string s2 = to_string(sq2);
    string s3 = to_string(sq3);
    string s4 = to_string(sq4);
    string s5 = to_string(sq5);
    string s6 = to_string(sq6);
    string s7 = to_string(sq7);
    string s8 = to_string(sq8);
    string s9 = to_string(sq9);
    string s10 = to_string(sq10);
    string s11 = to_string(sq11);
    string s12 = to_string(sq12);
    string s13 = to_string(sq13);
    string s14 = to_string(sq14);
    string s15 = to_string(sq15);
    string s16 = to_string(sq16);
    //make it so the numers take the same amount of space

    int ns = sq1;
    if (ns <= 9) {
        s1 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s1 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s1 = to_string(ns);
    }

    ns = sq2;
    if (ns <= 9) {
        s2 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s2 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s2 = to_string(ns);
    }

    ns = sq3;
    if (ns <= 9) {
        s3 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s3 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s3 = to_string(ns);
    }

    ns = sq4;
    if (ns <= 9) {
        s4 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s4 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s4 = to_string(ns);
    }

    ns = sq5;
    if (ns <= 9) {
        s5 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s5 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s5 = to_string(ns);
    }

    ns = sq6;
    if (ns <= 9) {
        s6 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s6 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s6 = to_string(ns);
    }

    ns = sq7;
    if (ns <= 9) {
        s7 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s7 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s7 = to_string(ns);
    }

    ns = sq8;
    if (ns <= 9) {
        s8 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s8 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s8 = to_string(ns);
    }

    ns = sq9;
    if (ns <= 9) {
        s9 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s9 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s9 = to_string(ns);
    }

    ns = sq10;
    if (ns <= 9) {
        s10 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s10 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s10 = to_string(ns);
    }

    ns = sq11;
    if (ns <= 9) {
        s11 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s11 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s11 = to_string(ns);
    }

    ns = sq12;
    if (ns <= 9) {
        s12 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s12 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s12 = to_string(ns);
    }

    ns = sq13;
    if (ns <= 9) {
        s13 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s13 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s13 = to_string(ns);
    }

    ns = sq14;
    if (ns <= 9) {
        s14 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s14 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s14 = to_string(ns);
    }

    ns = sq15;
    if (ns <= 9) {
        s15 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s15 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s15 = to_string(ns);
    }

    ns = sq16;
    if (ns <= 9) {
        s16 = " " + to_string(ns) + " ";
    }
    else if (ns >= 10 && ns <= 99) {
        s16 = " " + to_string(ns);
    }
    else if (ns >= 100) {
        s16 = to_string(ns);
    }

    //clear console 
    system("clear");
    //print board to console
    cout << "+---++---++---++---+\n";// \n is for new line
    // print the values of the squares
    cout << "|" << s1 << "|" << "|" << s2 << "|" << "|" << s3 << "|" << "|" << s4 << "|\n";
    cout << "+---++---++---++---+\n";
    //print the rest of the rows
    cout << "+---++---++---++---+\n";
    cout << "|" << s5 << "|" << "|" << s6 << "|" << "|" << s7 << "|" << "|" << s8 << "|\n";
    cout << "+---++---++---++---+\n";
    cout << "+---++---++---++---+\n";
    cout << "|" << s9 << "|" << "|" << s10 << "|" << "|" << s11 << "|" << "|" << s12 << "|\n";
    cout << "+---++---++---++---+\n";
    cout << "+---++---++---++---+\n";
    cout << "|" << s13 << "|" << "|" << s14 << "|" << "|" << s15 << "|" << "|" << s16 << "|\n";
    cout << "+---++---++---++---+\n";
}

void inputW(int sq1, int sq2, int sq3, int sq4, int sq5, int sq6, int sq7, int sq8, int sq9, int sq10, int sq11, int sq12, int sq13, int sq14, int sq15, int sq16){
  sq1=2;
  
}

int main() {
  //draw the board with the specified values
  bool running = true;
  char inp;
  //game loop
  while (running == true){
    //run the draw board function
    drawBoard(sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9, sq10, sq11, sq12, sq13, sq14, sq15, sq16);
    //take input and compile it
    cin >> inp;
    if (inp == 'w'){
      inputW(sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9, sq10, sq11, sq12, sq13, sq14, sq15, sq16);
    }
  }
}
