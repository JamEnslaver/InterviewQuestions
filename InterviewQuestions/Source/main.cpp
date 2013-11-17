#include <iostream>
#include <cstddef>
#include <cstring>
#include "Binary/Binary.h"
using namespace std;

int main()
{
	char input;
    int inputInt = 5;
	//cout << "Enter a number, which will be converted into binary" << endl;
	//cin >> input;

    char* output;

	output = toBinaryString(inputInt);
	char* o = strncpy(o, output, 33);

    cout << o;

	char nullInput[1];
	cin.getline(nullInput, 1);
	return 0;
}
