#include <iostream>
#include "Model/Roulette.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    for(int i = 0; i < argc; ++i)
    {
        cout << argv[i]<< endl;
    }

    if(argc >= 2)
    {
        char* test(argv[1]);
        cout << test << endl << endl;
    }

    Roulette test;

    test.AddName("test",6);
    test.AddName("test2",6);
    test.AddName("test3",6);
    test.AddName("test4",6);

    string res(test.Spin());

    cout << test.Spin() << endl;
    cout << test.Spin() << endl;
    cout << test.Spin() << endl;
    cout << test.Spin() << endl;
    cout << test.Spin() << endl;
    cout << test.Spin() << endl;
    cout << test.Spin() << endl;

    return 0;
}
