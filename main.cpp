#include <iostream>
#include <stdio.h>
#include <new>
// #include <string>

// #include "Deque.h"

using namespace std;

template<class T>
class Deque
{
private:
    T *deque;
    int head;
    // int tail;
    unsigned int size;

public:
    Deque(const int & = 0);
    Deque(const Deque &);
    ~Deque();

    int getsize();
    // ====== Methods ======

    bool isEmpty();
    void appendL(const T&);
    // void appendR(const T&);
    
    // T popL();
    // T popR();
    // void printdd();
};

template<class T>
Deque<T>::Deque(const int &size){
    this->size = size;
    if (this->size == 0){
        // this->head = this->tail = 0;
        this->head = 0;
    }
    this->deque = new T[size];
}
template<class T>
Deque<T>::Deque(const Deque<T> & d){
    this->size = d.size;
    this->deque = new T[size];
}

template<class T>
Deque<T>::~Deque(){
    delete [] this->deque;
}

template<class T>
int Deque<T>::getsize(){
    return this->size;
}

template<class T>
bool Deque<T>::isEmpty(){
    if (this->size == 0){
        std::cout << "Empty" << std::endl;  // DEBUG
        return true;
    }
    else {
        std::cout << "Not empty" << std::endl;  // DEBUG
        return false;
    }
}

template<class T>
void Deque<T>::appendL(const T& new_item){
    // size++;
    deque[++size] = new_item;
}

// template<class T>
// void Deque<T>::appendR(const T& new_item){
//     deque[++size] = new_item;
// }


// template<class T>
// void Deque<T>::popR(){
//     // Empty();
//     deque[++size] = new_item;
// }
// template<class T>
// void Deque<T>::popL(){
//     // Empty();
//     deque[++size] = new_item;
// }

template<class T>
std::ostream &operator<<(std::ostream &S, Deque<T> &d){
    for (size_t i = 0; i < d.getsize(); i++){
        S << d[i] <<", " << std::endl;
    }
    return S;
}


int main(int argc, char const *argv[])
{
    Deque<int> d;
    std::cout << d.isEmpty() << std::endl;
    d.appendL(2);
    std::cout << d.isEmpty() << std::endl;
    std::cout << d;
    // d[1]
    // d.appendR(3);
    // d.popL();
    // d.popR();
    return 0;
}
