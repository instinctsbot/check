#include <iostream>
#include <vector>

typedef std::vector<void*> V_void;

int main() {
    V_void newptr;

    int x = 42;
    double y = 3.14;
    
    newptr.push_back(&x);
    newptr.push_back(&y);

    for (void* ptr : newptr) {
        std::cout << "Address: " << ptr << ", Value: " << *(static_cast<int*>(ptr)) << std::endl;
    }

    return 0;
}
