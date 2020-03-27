#include<iostream>

using namespace std;

class complex {
    int r, i;
    public: 
        complex() {
            r = i = 0;
        }
        complex(int a, int b) {
            r = a;
            i = b;
        }
        complex operator+(complex ob) {
            r += ob.r;
            i += ob.i;
            return *this;
        }
        void print() {
            cout << r << " + " << i << "i";
        }
};

int main() {
    complex a(4, 5), b(4, 3), c;
    c = a+b;
    c.print();
}