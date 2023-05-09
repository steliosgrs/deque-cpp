#include <iostream>
#include <stdio.h>
#include <new>

#include "Deque.h"

using namespace std;

// Constructors
Deque::Deque(){
    int len;
    cout << "Enter the lenght of the Deque: " << endl;
    cin >> len;
    deque = new int[len];

    // Initialize
    for (int i = 0; i < len; i++)
    {
        cout << "Enter the "<< i+1 << " element: " << endl;
        cin >> deque[i];

    }
    cout << "Creating Deque..." << endl;
}

Deque::~Deque(){
    cout << "Deque Deleted" << endl;
    if (deque != NULL){
        delete [] deque;

    }
}

// Methods
// void Deque::printdd(){
//     // Print
//     for (int i = 0; i < len; i++)
//     {
//         cout << deque[i] << ", ";
//     }
//     cout << endl;
// }

// ostream& operator<< (ostream& os, const Deque& dq){
//         for (int i = 0; i < len; i++) {
//                 os << array[i] << ", ";
//             }
//             os << endl;
//         return os;
//     }

