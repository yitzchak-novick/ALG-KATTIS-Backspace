#include<iostream>
#include<cstdlib>
#include<string.h>



using namespace std;

int main() {
    char input[1000001];
    char output[1000001];
    int z = scanf("%s", input);
    int iIndx = 0;
    int oIndx = 0;
    while(input[iIndx] != '\0') {
        if (input[iIndx] == '<')
            oIndx--;
        else
            output[oIndx++] = input[iIndx];
        iIndx++;
    }
    output[oIndx] = '\0';
    printf("%s", output);
    return 0;
}
