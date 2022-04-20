#include <iostream>
#include <string> 
using namespace std;

//draw the board to the screen for the console.
void drawBoard(int s1,int s2,int s3,int s4,int s5,int s6,int s7,int s8,int s9,int s10,int s11,int s12,int s13,int s14,int s15,int s16){
  //change all values into strings
  
  //clear console 
  system("clear");
  //print board to console
  cout<<"+---++---++---++---+\n";// \n is for new line
  // print the values of the squares
  cout<<"|"<<s1<<"|"<<"|"<<s2<<"|"<<"|"<<s3<<"|"<<"|"<<s4<<"|\n";
  cout<<"+---++---++---++---+\n";
  //print the rest of the rows
  cout<<"+---++---++---++---+\n";
  cout<<"|"<<s5<<"|"<<"|"<<s6<<"|"<<"|"<<s7<<"|"<<"|"<<s8<<"|\n";
  cout<<"+---++---++---++---+\n";
  cout<<"+---++---++---++---+\n";
  cout<<"|"<<s9<<"|"<<"|"<<s10<<"|"<<"|"<<s11<<"|"<<"|"<<s12<<"|\n";
  cout<<"+---++---++---++---+\n";
  cout<<"+---++---++---++---+\n";
  cout<<"|"<<s13<<"|"<<"|"<<s14<<"|"<<"|"<<s15<<"|"<<"|"<<s16<<"|\n";
  cout<<"+---++---++---++---+\n";
}

int main() {
  //draw the board with the specified values
  drawBoard(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16);
}
