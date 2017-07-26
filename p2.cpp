#include <iostream>
#include <cmath>

using namespace std;

// TB's second C++ program
int main(int argc, char *argv[]) {

    string message =
        "\nWelcome To The Torbjørn Tennebø Tiny Times Tables Thingy!"
        " TTTTTTT For Short."
        "\nType in the the first number as 13 then the second for the times table number."
        "\nEnjoy!!";

    cout << message << endl;

    for (int i=0; i<argc; i++){
        //cout << "arg " << i << ": " << argv[i] << endl;
    }

    long a = argc <= 1? 13 : atoi(argv[1]);
    int r  = argc <= 2? 10 : atoi(argv[2]);

    cout << "a=" << a << "; r=" << r << endl;

    for (int i=1; i<a; i++){
        cout << (i)*r << endl;
    }
    cout << flush;

    return 0;
}
