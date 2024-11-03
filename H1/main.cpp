#include "myfunctions.h"
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Anna ensimmainen luku: " << endl;
    cin >> a;
    cout << "Anna toinen luku: " << endl;
    cin >> b;

    calcSum(a,b);

    try {
        calcDiv(a,b);
    }
    catch(runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    retSum(a,b);

    try {
        retDiv(a,b);
    }
    catch(runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

