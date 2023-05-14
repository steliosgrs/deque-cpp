#include <iostream>
#include <stdio.h>
#include <new>
#include <string>

// #include "Deque.h"

using namespace std;

template<class T>
class Deque
{
private:
    T *items;
    unsigned int size;

public:
    Deque(const int& = 0);
    ~Deque();

    // ====== Methods ======

    bool isEmpty();
    void appendL(const T&);
    void appendR(const T&);
    
    void popL();
    void popR();
    void printdd();
};

template<class T>
Deque<T>::Deque(const int& s){
    items = new T[s];
    size = s;
}

template<class T>
Deque<T>::~Deque(){
    delete [] items;
}

template<class T>
void Deque<T>::appendR(const T& new_item){
    items[++size] = new_item;
}

// template<class T>
// void Deque<T>::appendL(const T& new_item){
//     size
//     items[++size] = new_item;
// }

// template<class T>
// void Deque<T>::popR(){
//     // Empty();
//     items[++size] = new_item;
// }
// template<class T>
// void Deque<T>::popL(){
//     // Empty();
//     items[++size] = new_item;
// }

int main(int argc, char const *argv[])
{
    Deque<int> deque;
    deque.appendL(2);
    deque.appendR(3);
    deque.popL();
    deque.popR();
    return 0;
}
