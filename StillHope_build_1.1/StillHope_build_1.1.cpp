#include <iostream>
#include "window/window.hpp"
#include "world/world.hpp"

using namespace std;

int main(void){
    cout << "STILLHOPE::main()" << endl;
    Window window;
    window.init();
    window.loop();
    return 1;
}