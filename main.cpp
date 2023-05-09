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
    cout << "For exit insert \"00\"" << endl;

    // cin >> item;
    // int count = 0;

    // int len;
    // cout << "Enter the lenght of the Deque: " << endl;
    // cin >> len;
    // int *deque;

    // deque = new int[len];

    // // Initialize
    // for (int i = 0; i < len; i++)
    // {
    //     cout << "Enter the "<< i+1 << " element: " << endl;
    //     cin >> deque[i];

    // }

    // // Print
    // for (int i = 0; i < len; i++)
    // {
    //     cout << deque[i] << ", ";
    // }
    // cout << endl;

    
    // while (item != "_0"){
    //     cin >> item;
    //     count+=1;
    // }

    // if (count != 0){
    //     Deque d(count);
    // }

    Deque d();
    // delete[] deque;

    return 0;
}
