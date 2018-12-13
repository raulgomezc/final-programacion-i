//
// Created by Raul Gomez on 12/13/18.
//
#include "Delivery.h"

Delivery::Delivery(short age, const string &name, float salary, short zone) : Employee(age, name, salary), zone(zone) {
    Delivery::getsPlus();
}

short Delivery::getZone() const {
    return zone;
}

void Delivery::setZone(short zone) {
    Delivery::zone = zone;
}

bool Delivery::getsPlus() {
    if (Delivery::getZone() == 3) {
        Delivery::setSalary(Delivery::getSalary() + Delivery::getPlus());

        return true;
    }

    return false;
}
