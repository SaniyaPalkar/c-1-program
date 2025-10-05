#include <iostream>
using namespace std;

class Dog {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.bark();
    return 0;
}
