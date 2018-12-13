//
// Created by Raul Gomez on 12/13/18.
//
#include "Employee.h"

#ifndef FINAL_DELIVERY_H
#define FINAL_DELIVERY_H

class Delivery : public Employee {
    private:
        short zone;

    public:
        Delivery(short age, const string &name, float salary, short zone);

        short getZone() const;

        void setZone(short zone);

        bool getsPlus();
};


#endif //FINAL_DELIVERY_H
