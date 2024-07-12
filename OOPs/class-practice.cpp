#include <iostream>
using namespace std;

class shubha{

    private:
        int health;

    public:
        int level;

    //deault constructor
    shubha() {
        cout << "Constructor called." << endl;
    }

    //parameterized constructor
    shubha (int health) {

        //"this" is a pointer to the current object
        cout << "this ->" << this << endl;  
        this -> health = health;
        
    }

    void setHealth (int h) {
        health = h;
    }

    int getHealth () {
        return health;
    }

};

int main () {

    cout << endl;

    cout << "hi" << endl;

    //object created statically
    shubha sh(10);
    cout << "Address of sh -> " << &sh << endl;

    sh.setHealth(50);

    int health = sh.getHealth();

    cout << "health -> " << health << endl;


    cout << "End" << endl;

    return 0;
}
