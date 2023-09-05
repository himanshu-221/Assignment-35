/*Write a C++ Program of Templated class derived from Non-templated class*/
#include<iostream>
using namespace std;

// Non-templated base class
class Base {
public:
    int value;

    Base(int val) : value(val) {}

    void display() {
        cout << "Base value: " << value << endl;
    }
};

// Templated derived class
template <class T>
class Derived : public Base {
public:
    T data;

    Derived(int val, T d) : Base(val), data(d) {}

    void displayData() {
        cout << "Derived data: " << data << endl;
    }
};

int main() {
    Derived<double> obj(10, 3.14);
    obj.display();       
    obj.displayData(); 

    return 0;
}
