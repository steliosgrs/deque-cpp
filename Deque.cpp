#include <iostream>
#include <stdio.h>
#include <new>

#include "Deque.h"

using namespace std;

// Deque<int, int ,int> fr1;

// Constructors
// Deque::Deque(){
//     cout << "Creating Deque..." << endl;
//     this->head = NULL;
//     this->tail = NULL;
// }

// Deque::Deque(const int item){
//     cout << "Creating Deque with first element..." << endl;
//     Node *node = new Node[sizeof(Node)];
//     node->item = item;
    
//     this->length++;

// }


Deque::~Deque(){
    cout << "Deque Deleted" << endl;
    
}

// // Methods
// void Deque::printdd(){

//     Node *temp = head;
//     // Print
//     while (temp != NULL){
//         cout << temp->item << " ";
//         temp = temp->next;
//     }
//     cout << endl;
//     return ;
//     // for (int i = 0; i < this->length; i++)
//     // {
//     //     cout << this->tail.item << ", ";
//     // }
//     cout << endl;
// }
// bool Deque::isEmpty(){
//     if (head == NULL)
//         return true;
//     return false;
// }
// ostream& operator<< (ostream& os, const Deque& dq){
//         for (int i = 0; i < len; i++) {
//                 os << array[i] << ", ";
//             }
//             os << endl;
//         return os;
//     }

