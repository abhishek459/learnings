#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int &r = a;

    int b = 20;
    r = b; // This will override both a and r's value to 20

    cout<<a<<endl<<r<<endl;
    return 0;
}