#include <iostream>
#include "codes.hpp"
#include "flourish.cpp"
#include "pull.cpp"

using namespace std;

int main(int argc, char *argv[]){
    project_manager project_manager(27, 80, 90);
    
    print("Supercomputacion en Windows\n");
    codes(27);
    flourish(200);
    pull(270);
}
