#include<iostream>

using namespace std;

class abc {
    int a;
    friend int geta(abc);
    public: 
        abc() {
            a = 5;
        }
};

int geta(abc ob) {
    return ob.a;
}

int main() {
    abc a;
    cout << "A: " << geta(a);
}