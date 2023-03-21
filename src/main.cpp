#include "client/get_answer_from_terminal.hpp"


int main() {
    std::cout << client::get_answer_from_terminal("fastboot devices") << std::endl;

    return 0;
}
