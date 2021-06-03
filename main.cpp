#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int width, length;
	int per, area;
	
	cout <<"Area and Perimeter of a Rectangle\n";
	cout <<"Enter the length: ";
	cin >> length;
	cout <<"Enter the width: ";
	cin >> width;
	
	area = length * width;
	cout <<"\nThe area of a rectangle is: " <<area;
	
	per = 2 * (length + width);
	cout <<"\nThe perimeter of a rectangle is: " <<per;
	
	return 0;
}
