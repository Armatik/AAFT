#include <iostream>
#include <string>
#include <memory>


#ifndef AAFT_GETANSWERTERMINAL_HPP
#define AAFT_GETANSWERTERMINAL_HPP

namespace Client {
    std::string get_answer_from_terminal(const std::string &command) {
        char buffer[4096];
        std::string result;
        std::unique_ptr<FILE, decltype(&pclose)> pipe(::popen(command.c_str(), "r"), pclose);

        if (!pipe)
            throw std::runtime_error("popen() failed!");

        while (::fgets(buffer, 4096, pipe.get()) != nullptr)
            result += buffer;

        return result;
    }
}

#endif //AAFT_GETANSWERTERMINAL_HPP
