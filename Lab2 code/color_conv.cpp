/* Author: Chris Lim
 * Program: color_conv
 * Description: Converts RGB -> CMYK color representation
 */
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	// Enter your code here
	// Declare any variables you need here
	double red;
	double green;
	double blue;
	double white;
	double cyan;
	double magenta;
	double yellow;
	double black;
	double maxNum;
	// Get user input for the red, green and blue wavelengths
	cout << "Please enter Red Wavelength";
	cin >> red;
	red = red / 255;
	cout << "Please enter Green Wavelength";
	cin >> green;
	green = green / 255;
	cout << "Please enter Blue Wavelength";
	cin >> blue;
	blue = blue / 255;

	// Allow for white to be the greatest wavelength out of RGB
	maxNum = max(red, green);
	maxNum = max(maxNum, blue);
	white = maxNum;
	black = 1 - white;

	//Finding cyan, magenta and yellow
	cyan = (white - red) / white;
	magenta = (white - green) / white;
	yellow = (white - blue) / white;

	//return values
	cout << "Cyan: " <<cyan<<"\n";
	cout << "Magenta: " << magenta << "\n";
	cout << "Yellow: " << yellow << "\n";
	cout << "Black: " << black << "\n";



	return 0;
}
