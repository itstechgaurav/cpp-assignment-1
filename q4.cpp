#include<iostream>

using namespace std;

int a = 6;
int main() {
    int a = 7;
    cout << "Global a: " << ::a << endl;
}