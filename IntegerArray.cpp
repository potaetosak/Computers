#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    IntegerArray a(2);


    a.push_back(4);
    a.push_back(2);
	a.print();
    a.remove();

    a.print();


    return 0;
}
