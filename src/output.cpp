#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include <ncurses.h>

#include "output.hpp"

using namespace std::chrono_literals;

// slowly prints text in <content>
//  e.g T_Output::cps_print("Hello, World!");
void T_Output::cps_print(const std::string &content, std::chrono::milliseconds duration) {
    for (const auto &data : content) {          // for character in string
        std::cout << data;                      // prints character
        std::this_thread::sleep_for(duration);  // pauses thread
        std::cout << std::flush;                // flushes the stdout
    }
    std::cout << std::endl;
}

void T_Output::wait(std::chrono::milliseconds duration) { std::this_thread::sleep_for(duration); }
void T_Output::wait(std::chrono::seconds duration) { std::this_thread::sleep_for(duration); }

// it doesn't work for me
// just prints 0
// im a bad programmer >_<
int* T_Output::get_term_size() {
    int size[2] = {getmaxx(stdscr), getmaxy(stdscr)};
    return size;
}