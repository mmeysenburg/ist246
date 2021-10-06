#include "Laundry.h"

#include <cstdio>

bool Laundry::operator<(const Laundry &other) {
    return mass < other.mass;
}

bool Laundry::operator<=(const Laundry &other) {
    return mass <= other.mass;
}

bool Laundry::operator==(const Laundry &other) {
    return mass == other.mass;
}

bool Laundry::operator>=(const Laundry &other) {
    return mass >= other.mass;
}

bool Laundry::operator>(const Laundry &other) {
    return mass > other.mass;
}

std::ostream &operator<<(std::ostream &out, const Laundry &laundry) {
    char str[17];
    sprintf(str, "(%.2f/%.2f/%.2f)", laundry.getMass(), 
        laundry.getWashTime(), laundry.getDryTime());
    out << str;

    return out;
}