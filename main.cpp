#include <iostream>
using namespace std;

//draw the board to the screen for the console.
void drawBoard(int s1,int s2,int s3,int s4){ //void makes it return no value
  //clear console 
  system("clear");
  //print board to console
  cout<<"+---++---++---++---+\n";// \n is for new line
  // print the values of the squares
  cout<<"| "<<s1<<" |"<<"| "<<s2<<" |"<<"| "<<s3<<" |"<<"| "<<s4<<" |\n";
  cout<<"+---++---++---++---+\n";
}

int main() {
  //draw the board with the specified values
  drawBoard(1,2,3,4);
}
