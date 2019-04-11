#include "A.h"

const std::string &A::getName() const {
    return name;
}

void A::setName(const std::string &input) {
    A::name = input;
}

bool A::operator==(const A &rhs) const {
    return name == rhs.name;
}

