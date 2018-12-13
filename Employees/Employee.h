//
// Created by Raul Gomez on 12/13/18.
//

#include <iostream>

#ifndef FINAL_EMPLOYEE_H
#define FINAL_EMPLOYEE_H

using namespace std;

class Employee {
    public:
        Employee(short age, const string &name, float salary);

        short age;
        string name;
        short plus;
        float salary;

        short getAge() const;

        const string &getName() const;

        short getPlus() const;

        float getSalary() const;

        void setAge(short age);

        void setPlus(short plus);

        void setSalary(float salary);
};


#endif //FINAL_EMPLOYEE_H
