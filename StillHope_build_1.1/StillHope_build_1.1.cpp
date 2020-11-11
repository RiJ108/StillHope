#include <iostream>
#include "window/window.hpp"

using namespace std;

int main(void){
    cout << "STILLHOPE::main()" << endl;
    Window window;
    window.init();
    window.loop();
    return 1;
}