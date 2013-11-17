#include <iostream>
#include <cstddef>
#include <cstring>

void toBinaryString(int input, char output[])
{
    char buffer[32];
    int i = 0;
    while(input > 0)
    {
        if(input % 2 > 0)
            buffer[i] = '1';
        else
            buffer[i] = '0';

        input /= 2;
        i++;
    }
    i--;

    int j = 0;
    while(i >= 0)
    {
        output[j] = buffer[i];
        i--;
        j++;
    }
    output[j] = '\0';
}

void showBinary()
{
    using namespace std;

    int inputInt;
    char output[33];
    while(true)
    {
        cout << "Enter a number, which will be converted into binary" << endl;
        cout << "A negative number will end the program" << endl;
        cin >> inputInt;

        if(inputInt < 0)
            break;

        toBinaryString(inputInt, output);
        cout << output << endl;
    }
}
