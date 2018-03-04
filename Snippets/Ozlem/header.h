#include <iostream>
#include <string>

class Queue {
public:
    void enqueue();
    void dequeue();
    void first();
    int size();
    bool is_full();
    bool is_empty(); 
    
private:
    static const int max_size = 5;
    int q[max_size];
    
    int q_size = 0;
    int front = 0;
    int back = 0;
};
