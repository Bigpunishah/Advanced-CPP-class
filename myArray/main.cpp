#include <iostream>
#include "myArray.h"


int main(){

    myArray array;
    myArray thisArray(2, 6);
    myArray yourArray(-4, 12);

    // Set values in thisArray
    thisArray.set(2, 1);
    thisArray.set(3, 3);
    thisArray.set(4, 4);
    thisArray.set(5, 5);
    thisArray.set(6, 7);

    // Print values in thisArray
    thisArray.print();

    return 0;
}