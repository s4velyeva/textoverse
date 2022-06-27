#include <string>
#include <chrono>


using namespace std::chrono_literals;

class T_Output {
    public:
        static void cps_print(const std::string &content, std::chrono::milliseconds duration = 50ms);

        static void wait(std::chrono::milliseconds duration);
        static void wait(std::chrono::seconds duration);

        static int* get_term_size();
};