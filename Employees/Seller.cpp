//
// Created by Raul Gomez on 12/13/18.
//

#include "Seller.h"

Seller::Seller(short age, const string &name, float salary, float comision) : Employee(age, name, salary),
                                                                                          commission(commission) {
    Seller::getPlus();
}

float Seller::getCommision() const {
    return commission;
}

void Seller::setCommision(float commission){
    Seller::commission = commission;
}

bool Seller::getsPlus() {
    return false;
}
