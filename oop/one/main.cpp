#include "main.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <string>
#include <iostream>
#include <memory>

using namespace std;

void method(A *a){
    std::cout << a->getName() << endl;
    std::cout << "================" << endl;
}

int main(){
    std::cout << "================" << endl;

    A *a = new A;

    (*a).setName("A"); //note
    a->setName("A");

    std::cout << a->getName() << endl;

    A *aa = new A;

    aa->setName("B");

    cout << aa->operator==(*a) << endl;

    B *b = new B;
    b->setAge(2);

    A *tempA = static_cast<A *> (b);

//    C *tempA = dynamic_cast<C *>(b); //error
//    B *tempB = dynamic_cast<B *>(aa);//error

    tempA->setName("B");

    method(tempA);

    delete (a);
    delete (b);

    try {

    } catch (int a) {
        std::cout << a << endl;
    }


    std::cout << "================" << endl;




    std::cout << "================" << endl;
}