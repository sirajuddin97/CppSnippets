#include "header.h"

void Queue::enqueue() {
    if(!is_full()){
        int x = 0;
        std::cout << "Write an int: ";
        std::cin >> x;
        q[front] = x;
        if(front == max_size - 1){ 
            front = 0; 
        } 
        else{ 
            front++;
        }
    std::cout << "Enqueued: " << x << "\n"; 
    q_size++;    
    }  
}

bool Queue::is_full() {
    if(q_size == max_size) {
        throw -1;
    } 
    else {
        return false;
    }      
}

void Queue::dequeue() {
    if(!is_empty()) {
    if(back == max_size) {
        back = 0; 
    }
    std::cout << "The first number: " << q[back] << " in the queue is deleted\n";
    back++;
    q_size--;
    }
}
   
void Queue::first() {
    if(!is_empty()) {
        std::cout << "The first element in the queue is: " << q[back] << '\n';
    }  
}
   
int Queue::size() {
    return q_size;
}
    
bool Queue::is_empty() {
    if(size() == 0) {
        throw -2;
    }
    else return false;
}

