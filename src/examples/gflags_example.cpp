#include <iostream>
#include <gflags/gflags.h>

DEFINE_string(name, "inari", "test name");

int main(int argc, char** argv) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    std::cout << "Hello, " << FLAGS_name << "!" << std::endl;
}