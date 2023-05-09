#ifndef DEQUE_H
#define DEQUE_H

using namespace std;
#include <new>

class Deque{

private:
    int len;
    char *que;

public:
    // Constructors
    Deque(const char *);
    // Deque(int);
    // Deque(float);
    // Deque(double);
    // Deque(char);

    // Destructor
    ~Deque();

    friend ostream& operator<<(ostream& os, const Deque& dq);

 

    // ====== Methods ======
    void appendLeft();
    void appendRight();
    
    void removeLeft();
    void removeRight();

    void len();

};



#endif