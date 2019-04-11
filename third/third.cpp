#include <iostream>
#include <vector>
#include <string>

using namespace std;

void methodOne(int *a){
    *a = 5;
}

void methodTwo(int a){
    a = 3;
}

int * determinateIntRef(int &a , int &b){
    return a > b ? &a : &b;
}

int & determinateInt(int *a, int *b) {
    return *a > *b ? *a : *b;
}

vector<string> &changeVector(vector<string> *incoming) {
    for (auto &str: *incoming) {
        str = "A";
    }

    return *incoming;
}

int mainThird(){
    cout << "====" << endl;
    int a = 3;

    methodOne(&a);

    cout <<  a << endl;

    methodTwo(a);

    cout <<  a << endl;

    cout << "====" << endl;

    int aa = 1;
    int bb = 2;

    cout << *determinateIntRef(aa, bb) << endl;

    cout << "====" << endl;

    cout << determinateInt(&aa, &bb) << endl;

    cout << "====" << endl;

    vector<string> vector_str{"a", "b", "c"};

    changeVector(&vector_str);

    for (auto &str: vector_str) {
        cout << str << endl;
    }

    cout << "====" << endl;

    int &aa_ref = aa;

    cout << aa_ref << endl;

    cout << "====" << endl;
    return 1;
}