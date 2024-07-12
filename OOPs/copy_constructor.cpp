#include <iostream>

using namespace std;

class copyConstructor {
    private:
        int length;
        int breadth;

    public:
        int area;

    //parameterized constructor
    copyConstructor (int length) {
        cout << "Parameterized constructor called." << endl;
        this -> length = length;
    }

    //user defined copy constructor
    copyConstructor (copyConstructor& temp) {
        cout << "Copy constructor called." << endl;
        this -> breadth = temp.breadth;
        this -> length = temp.length;
    }

    void setLength (int l) {
        length = l;
    }
    int getLength() {
        return length;
    }

    void setBreadth (int b) {
        breadth = b;
    }
    int getBreadth () {
        return breadth;
    }
};

int main() {

    //main constructor called here
    copyConstructor c(5);
    

    // c.setLength(5);
    c.setBreadth(10);

    cout << "from main constructor -> " << c.getLength() << endl;

    //copy constructor called here
    copyConstructor s(c);
    cout << "from copy constructor -> " << s.getLength() << endl;

    c.area = c.getLength() * c.getBreadth();

    cout << "Area of triangle: " << c.area << endl;

    return 0;
}