#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int val) : value(val) {}

    // Unary Operator Overloading: -
    Number operator-() {
        return Number(-value);
    }

    // Binary Operator Overloading: +
    Number operator+(const Number& other) {
        return Number(value + other.value);
    }

    // Binary Operator Overloading: -
    Number operator-(const Number& other) {
        return Number(value - other.value);
    }

    // Relational Operator Overloading: ==
    bool operator==(const Number& other) {
        return value == other.value;
    }

    // Relational Operator Overloading: !=
    bool operator!=(const Number& other) {
        return value != other.value;
    }

    // Relational Operator Overloading: >
    bool operator>(const Number& other) {
        return value > other.value;
    }

    // Relational Operator Overloading: <
    bool operator<(const Number& other) {
        return value < other.value;
    }

    // Relational Operator Overloading: >=
    bool operator>=(const Number& other) {
        return value >= other.value;
    }

    // Relational Operator Overloading: <=
    bool operator<=(const Number& other) {
        return value <= other.value;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(5);

    
    Number n3 = -n1;
    cout << "Unary - operator: ";
    n3.display();

    
    Number n4 = n1 + n2;
    cout << "Binary + operator: ";
    n4.display();

    Number n5 = n1 - n2;
    cout << "Binary - operator: ";
    n5.display();

    
    cout << "Relational == operator: " << (n1 == n2) << endl;
    cout << "Relational != operator: " << (n1 != n2) << endl;
    cout << "Relational > operator: " << (n1 > n2) << endl;
    cout << "Relational < operator: " << (n1 < n2) << endl;
    cout << "Relational >= operator: " << (n1 >= n2) << endl;
    cout << "Relational <= operator: " << (n1 <= n2) << endl;

    return 0;
}
