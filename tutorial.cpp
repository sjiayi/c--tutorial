#include <iostream>
#include "library/mylibrary.hpp"

using namespace std;

void addi(int& i){
    i++;
}

void function()
{
    cout << "Inside Function" << endl;
}

int main(){
    int i = 8;

    i++;
    addi(i);
    cout << "Hello world!" << i << addition(3,5) << endl;

    function();
    return 0;
}