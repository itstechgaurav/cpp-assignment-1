#include<iostream>

using namespace std;
int a = 5;
void print() {
    cout << "in print function: " << a << endl;
}
int main() {
    int a = 6;
    {
        int a = 7;
        cout << "Local in block: " << a << endl;
    }
    cout << "In main function: " << a << endl;
    print();
}

