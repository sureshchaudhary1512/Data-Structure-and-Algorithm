#include <map>
#include <iostream>

int main() {
    std::map<int, std::string> m;
    m[0] = "zero";
    m[1] = "one";
    m[2] = "two";

    for (const auto& p : m) {
        std::cout << p.first << ' ' << p.second << std::endl;
    }

    return 0;
}
