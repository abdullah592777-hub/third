#include<iostream>
using namespace std;
class Computer {
    string brand;
    public:
    Computer(string b) {
        brand = b;
    }
    void displayBrand() {
        cout << "Computer brand: " << brand << endl;
    }
};
int main() {
    Computer comp("Dell");
    comp.displayBrand();
    return 0;
}