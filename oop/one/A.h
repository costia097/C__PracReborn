#ifndef C__PRACREBORN_A_H
#define C__PRACREBORN_A_H

#include <string>

class A {

private:
    std::string name;

public:
    const std::string &getName() const;

    void setName(const std::string &input);

    bool operator==(const A &rhs) const;
};

#endif
