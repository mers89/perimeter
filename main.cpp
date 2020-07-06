
//Including library for cin and cout
//Function purpose: header file, tells processor to include the iostream standard input/output stream library
#include <iostream>
//using namespace for the program
//Function purpose: tells program to use cin and cout as define on the default library of iostream
using namespace std;
//parameters: not used
int main() {
	//function purpose:Return a double value from a function
	//identifier: side
    double side;
    //output: displayed on screen to ask user to input numeric value info for measurements of one side of triangle/square
    //function purpose: function depends on user input to do calculation
    cout << "Enter the length of a side (in inches): ";
    //input: program waits for user to input numeric value. 
    //function purpose: Will use user input and assigns it to "side"
    cin >> side;
    //output: program takes "side" value and is able to multiply it by 4 to return perimeter of square
    /*fuction purpose: program is able to take a stored number and process multiplication. Is able to display the 
      information to output as a sententence*/
    cout << "The perimeter of a square w/ 1 side of length " << side << " = " << 4*side << " inches" << endl;
    //output: program takes "side" value and is able to multiply it by 3 to return perimeter of triangle
    /*fuction purpose: program is able to take a stored number and process multiplication. Is able to display the 
      information to output as a sententence on a separate line from square perimeter*/
    cout << "The perimeter of an equilateral triangle w/ 1 side of length " << side << " = " << 3*side << " inches" << endl;
    return 0;
}



