#include <iostream>
#include <stdio.h>
#include <new>
#include <string>

// #include "Deque.h"

using namespace std;

template<typename T, int length>
class Deque
{
private:
    // T array[length];
public:
    Deque();
    Deque(T que);
    Deque(T que, int length);
    ~Deque();
    // ====== Methods ======
    void init(){
        cout << "Initilazing" << endl;
    }
    bool isEmpty();
    void appendLeft();
    void appendRight();
    
    void removeLeft();
    void removeRight();
    void printdd();
};



int main(int argc, char const *argv[])
{
    Deque<T>::Deque();
    Deque<int,3> d1;git
    d1.init();
    // Deque d(5);
    // d.printdd();
    // cout << c.isEmpty();
    // delete[] deque;

    return 0;
}
