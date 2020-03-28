#include<iostream>

using namespace std;

class complex {
    int r, i;
    public: 
        complex() {
            r = i = 0;
        }
        void input() {
            cout << "Enter real part: ", cin >> r;
            cout << "Enter imag part: ", cin >> i;
        }
        complex operator+(complex ob) {
            complex nbb;
            nbb.r = r + ob.r;
            nbb.i = i + ob.i;
            return nbb;
        }
        void print() {
            cout << r << (i < 0 ? " " : " + ") << i << "i";
        }
};

int main() {
    complex a, b, c;
    a.input();
    b.input();
    c = a+b;
    c.print();
}