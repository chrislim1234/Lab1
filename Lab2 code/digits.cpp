/* Author: Chris Lim
 * Program: Think_Code_Test
 * Description: Reads an integer betwewen 0 and 999.
 *    Find the 1's digit, 10's digit and the 100's digit
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //declare variable
	int number;
	int ones;
	int tens;
	int hundreds;
    
    //get user int and calc variables
	cout << "Enter an integer between 0 and 999: ";
	cin >> number;
	hundreds = number / 100;
	tens = (number % 100) / 10;
	ones = number % 10;

    //print variables
	cout << "1's digit is " << ones << "\n";
	cout << "10's digit is " << tens << "\n";
	cout << "100's digit is " << hundreds << "\n";
	return 0;
}