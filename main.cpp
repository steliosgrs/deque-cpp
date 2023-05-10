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
    T array[length];
public:
    // Deque();
    // ~Deque();
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
    Deque<int,3> d1;
    d1.init();
    // Deque d(5);
    // d.printdd();
    // cout << c.isEmpty();
    // delete[] deque;

    return 0;
}
