#include <iostream>
#include "output.hpp"

int main(int argc, char** argv) {
    setlocale(LC_ALL, "");

    T_Output::cps_print("Hello, World! This is a sample message.");
    T_Output::cps_print("It does nothing, just prints some text.");
    T_Output::wait(2s);
    T_Output::cps_print("\e[1;32mJust have a nice day! :3\e[m", 20ms);

    return 0;
}