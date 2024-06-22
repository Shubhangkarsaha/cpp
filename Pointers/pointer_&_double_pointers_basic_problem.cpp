#include <iostream>

using namespace std;

void update_double_poinetr(int **p2) {
    // p2 = p2 + 1; //nothing changes

    // *p2 = *p2 + 1; //something changes
    
    // **p2 = **p2 + 1; //changes the value
}

int main () {

    // int i = 152;
    // int *p = &i;
    // int **p2 = &p;

    // cout << "printing each element to show what data is stored:" << endl;

    // cout << "i:" << i << endl;
    // cout << "&i:" << &i << endl;
    // cout << "*p:" << *p << endl;
    // cout << "&p:" << &p << endl;
    // cout << "**p2:" << **p2 << endl;

    // cout <<endl;
    // cout <<endl;
    // cout <<endl;

    // cout << "p2:" << p2 << endl;
    // cout << "*p2:" << *p2 << endl;
    // cout << "**p2:" << **p2 << endl;

    // update_double_poinetr(p2);

    // cout <<endl;

    // cout << "p2:" << p2 << endl;
    // cout << "*p2:" << *p2 << endl;
    // cout << "**p2:" << **p2 << endl;

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << "first :" << first << endl; //7

    // int first = 8;
    // int *p = &first;
    // cout << "first before increment:" << (*p)++ << endl;//8
    // cout << "first after increment:" << first << endl;//9

    // int *p = 0;
    // int first = 110;
    // int *p = first;
    // cout << *p << endl; //error

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third+2;
    // cout << first << " " << second << endl; //11 13

    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;// 21.5 21.5 21.5

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;
    // cout << *ptr << endl;//error because we cannot change in the symbol table

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;  //abcde

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;  //bcde

    // char str[] = "shubha";
    // char *p = str;
    // cout << str[0] << " " << p[0] <<endl; // s s


    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl; // 111 119

    // int f = 100;
    // int *p = &f;
    // int **q = &p;
    // int s = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << f << " " << s << endl; // 102 101

    

    return 0;
}
