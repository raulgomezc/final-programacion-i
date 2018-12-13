//
// Created by Raul Gomez on 12/13/18.
//

#include "Employee.h"

Employee::Employee(short age, const string &name, float salary) : age(age), name(name), plus(300), salary(salary) {}

short Employee::getAge() const {
    return age;
}

const string &Employee::getName() const {
    return name;
}

short Employee::getPlus() const {
    return plus;
}

float Employee::getSalary() const {
    return salary;
}

void Employee::setAge(short age) {
    Employee::age = age;
}

void Employee::setPlus(short plus) {
    Employee::plus = plus;
}

void Employee::setSalary(float salary) {
    Employee::salary = salary;
}
