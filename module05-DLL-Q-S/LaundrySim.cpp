#include <cstdlib>
#include <fstream>
#include <iostream>
#include "DLL.hpp"
#include "Laundry.h"

int main() {
    using namespace std;

    Laundry la(1, 2, 3.3);

    cout << la << endl;

    return EXIT_SUCCESS;
}