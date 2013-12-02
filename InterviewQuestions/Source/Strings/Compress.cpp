#include <iostream>

char* compress(char input[])
{
    int length = 0;
    while(input[length] != '\0')
        length++;

    if(length == 0)
        return input;


    char* output = new char[50];

    int i = 0, j = 0, t = 0;

    do
    {
        output[j] = input[i];
        t = i +1;
        j++;
        output[j] = '1';

        while(input[t] == input[i])
        {
            output[j]++;
            t++;
        }
        i = t;
        j++;
    }while(input[i] != '\0');
    output[j] = '\0';


    if(j >= i)
        return input;

    return output;
}

void showCompress()
{
    using namespace std;

    char input[33];
    while(true)
    {
        cout << "Enter a string to be compressed" << endl;

        cin >> input;

        if(input[0] == '\n')
            break;

        cout << compress(input) << endl;
    }
}
