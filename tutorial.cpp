#include <iostream>

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
    cout << "Hello world!" << i << endl;

    function();
    return 0;
}