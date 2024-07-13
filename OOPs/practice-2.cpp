#include <iostream>

using namespace std;

class Shape {

    private:
        int breadth;

    public:
        int length;
        int shape;
        static int area;
    
    //default constructor
    Shape () {
        cout << "Default constructor called." << endl;
    }

    //parameterized constructor
    Shape (int b, int l, int s) {

        cout << "Parameterized constructor called." << endl;
        this -> breadth = b;
        this -> length = l;
        this -> shape = s;

    }

    //static function can only access the static data members
    static int randomfunc() {
        cout << "Static function call" << endl;
        cout << area << endl;
    }

    
    void print () {
        cout << "[ breadth: " << this-> breadth << ", ";
        cout << "lenght: " << this -> length << ", ";
        cout << "Shape: " << this -> shape << " ]";
        cout << endl << endl;
    }

    //destructor 
    ~Shape() {
        cout << "Destructor Called." << endl;
    }


};

int Shape :: area = 10;

int main () {

    //static data member access
    cout << "Printing the static member without creating object" << endl;
    cout << Shape :: area << endl;

    Shape a;
    cout << a.area << endl;

    // Shape e;

    // e.area = 20;

    // cout << a.area << endl;
    // cout << e.area << endl;

    
    a.randomfunc();


    // Shape p(12, 23, 34);

    // p.print();

    // Shape q;
    // //copy assignment
    // q = p;

    // q.print();


    // Shape *s = new Shape();
    
    // //for dynamic memory allocation manually have to called the destructor
    // delete s;



    return 0;
}
