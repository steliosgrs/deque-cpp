#include <iostream>
#include <stdio.h>
#include <new>
#include <string>

#include "Deque.h"

using namespace std;

string item;
int main(int argc, char const *argv[])
{
    cout << "Enter a list of items (int, float, double, etc) :" << endl;
    cout << " ! MUST BE THE SAME TYPE ! " << endl;
    cout << "For exit insert \"_0\"" << endl;

    cin >> item;
    cout << endl;
    while (item != "_0"){
        cin >> item;
    }
        
    Deque d();
    
    return 0;
}
