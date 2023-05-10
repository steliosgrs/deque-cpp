#ifndef DEQUE_H
#define DEQUE_H

using namespace std;
// #include <new>

struct Node{
    int item;
    Node *prev; 
    Node *next; 
};
template <typename T > //class Deque;
class Deque{

private:
    int length = 0 ;
    Node *tail;
    Node *head;

public:
    // Constructors
    Deque();
    // Deque(int);
    // Deque(float);
    // Deque(double);
    // Deque(char);

    // Destructor
    ~Deque();

    // friend ostream& operator<<(ostream& os, const Deque& dq);

 

    // ====== Methods ======
    bool isEmpty();
    void appendLeft();
    void appendRight();
    
    void removeLeft();
    void removeRight();
    void printdd();
    // void len();

};



#endif