#ifndef C__PRACREBORN_B_H
#define C__PRACREBORN_B_H

#include "A.h"

class B : public A {

private:
    int age;

public:
    int getAge() const;

    void setAge(int age);

};


#endif
