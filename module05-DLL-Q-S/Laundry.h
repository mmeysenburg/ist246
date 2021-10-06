#pragma once

#include <iostream>

class Laundry {
public:
    Laundry() : mass(0), washTime(0), dryTime(0) { }
    Laundry(float m, float w, float d) : mass(m), washTime(w), dryTime(d) { }
    float getMass() const { return mass; }
    float getWashTime() const { return washTime; }
    float getDryTime() const { return dryTime; }
    bool operator<(const Laundry& other);
    bool operator<=(const Laundry& other);
    bool operator==(const Laundry& other);
    bool operator>=(const Laundry& other);
    bool operator>(const Laundry& other);
private:
    float mass;
    float washTime;
    float dryTime;
};

std::ostream &operator<<(std::ostream &out, const Laundry& laundry);