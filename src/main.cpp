#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main(int argc, char** argv) {
    cpr::Response r = cpr::Get(cpr::Url{"https://lichess.org/api/games/user/brouxtforce"},
                               cpr::Parameters{{"max", "1"}});
    std::cout << "Status code: " << r.status_code << '\n';
    std::cout << "Header:\n";
    for (const std::pair<const std::basic_string<char>, std::basic_string<char>>& kv : r.header) {
        std::cout << '\t' << kv.first << ':' << kv.second << '\n';
    }
    std::cout << "Text: " << r.text << '\n';

    return 0;
}
