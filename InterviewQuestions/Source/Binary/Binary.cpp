
char* toBinaryString(int input)
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
    char output[33];
    int j = 0;
    while(i >= 0)
    {
        output[j] = buffer[i];
        i--;
        j++;
    }
    output[j] = '\0';
    return output;
}
