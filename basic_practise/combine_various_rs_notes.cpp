#include<iostream>
using namespace std;

int main () {


    int amt;
    cout << "Enter the amount:" << endl;
    cin >> amt;

    int Rs100, Rs50, Rs20, Rs1;

    switch (1) {

        case 1: Rs100 = amt/100;
                cout << "100 rs. notes needed: " <<Rs100 << endl;
                amt = amt%100;
        
        case 2 : Rs50 = amt/50;
                 cout << "50 rs. notes needed: " << Rs50 << endl;
                 amt = amt%50;
                
        case 3 : Rs20 = amt/20;
                 cout << "20 rs. notes needed: " << Rs20 << endl;
                 amt = amt%20;
            
        case 4 : Rs1 = amt/1;
                 cout << "1 rs. coin needed: " << Rs1 << endl;
                 amt = amt % 1;
    }

    return 0;
}