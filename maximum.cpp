#include <iostream>
using namespace std;

class MaxNumber {
    private:
        int num1, num2;
    public:
        void getNumbers() {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        int getMax() {
            if (num1 > num2) {
                return num1;
            }
            else {
                return num2;
            }
        }
};

int main() {
    MaxNumber obj;
    obj.getNumbers();
    cout << "Maximum number is: " << obj.getMax() << endl;
    return 0;
}