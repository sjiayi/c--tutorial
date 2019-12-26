#include <iostream>

using namespace std;

void function()
{
    cout << "Inside Function" << endl;
}

int main(){
    int i = 8;

    i++;
    cout << "Hello world!" << i << endl;

    function();
    return 0;
}