//
// Created by Raul Gomez on 12/13/18.
//
#include "Employee.h"

#ifndef FINAL_SELLER_H
#define FINAL_SELLER_H

class Seller : public Employee {
    private:
        float commission;

    public:
        Seller(short age, const string &name, float salary, float commission);

        float getCommision() const;

        void setCommision(float commission);

        bool getsPlus();
};


#endif //FINAL_SELLER_H
