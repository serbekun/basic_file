#include "basic_file.hpp"

int main() {
    stdx::basic_file file("example.txt");
    file.rewrite("Hello from basic_file!\n");
    file.write("Another line.\n");
    file.read();

    return 0;
}
