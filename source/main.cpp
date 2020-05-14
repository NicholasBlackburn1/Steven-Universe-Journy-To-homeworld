#include <m3dia.hpp>

int main() {
    // instance of the applet
    m3d::Applet app;
    m3d::Screen screen;
    
    consoleInit(GFX_TOP, NULL);

    // standard C printf()
    printf("Hello, Steven Unierse Journey to homeworld is loading \n");

    // app's main loop
    while(app.isRunning()) {
        if (m3d::buttons::buttonPressed(m3d::buttons::B)) {
            app.exit();
        }
    }

    return(0);
}