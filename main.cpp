#include <iostream>
#include "Employees/Delivery.h"
#include "Employees/Seller.h"

using namespace std;

int main() {
    Delivery Luis = Delivery(22, "Luis Perez", 300, 3);
    Delivery Carlos = Delivery(21, "Carlos Perez", 400, 2);
    Seller Juan = Seller(40, "Juan Perez", 900, 0.3);

    cout << Luis.getSalary() << endl;
    cout << Carlos.getSalary() << endl;
    cout << Juan.getSalary() << endl;
    return 0;
}
