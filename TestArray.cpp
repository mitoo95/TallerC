#include <iostream>
#include "Array.h"


int main(){

    Array arr(16);


    for(int i = 0; i < arr.getSize(); i++){

        arr.setElement(i, i * 2);

    }

    for (int i = 0; i < arr.getSize(); i++){

        std::cout << "Element " << i << " = " << arr.getElement(i) << "\n";

    }

}