#include "header.h"

int main() {
    try {
        static Queue q;
        std::cout << "Write an option. (e for enqueue, d for dequeue, f for first, s for size: ";
        std::string input;
        std::cin >> input;
        if(input == "e") q.enqueue();
        if(input == "d") q.dequeue();
        if(input == "f") q.first();
        if(input == "s") std::cout << q.size() << '\n';
        
    }
    catch (int x) {
        switch (x) {
            case -1:
                std::cerr << "Max size reached!\n";
                break;
            case -2:
                std::cerr << "The queue is empty\n";
                break;
            case -3:
                break;
        }   
    }
    catch(...) {
        std::cerr << "Something is wrong\n";
    }
   main(); 
}

