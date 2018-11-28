#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

void showName();

int main () {
    
    printf("******************* this is C version **************** \n");
    printf("hello world \n");
    showName();
    printf("\n");

    cout << "********************* this is C++ version ******************" << endl;
    cout << "hello world" << endl;
    cout << endl;
    
    system("pause");
    return 0;
}

void showName () {
    printf("gess who I am ? \n");
    // input("")
}