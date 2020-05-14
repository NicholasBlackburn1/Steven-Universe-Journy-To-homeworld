
#include <citro2d.h>
#include <m3dia.hpp>
#include "m3d/graphics/boundingBox.hpp"
#include "m3d/graphics/color.hpp"
#include "m3d/graphics/drawable.hpp"
#include "m3d/graphics/texture.hpp"
#include "m3d/graphics/vertex.hpp"


int main() {
    // instance of the applet
    m3d::Applet app;
    m3d::Screen screen;
    m3d::Sprite title;
    
    consoleInit(GFX_TOP, NULL);

    // standard C printf()
    printf("Hello, Steven Unierse Journey to homeworld is loading \n");
        
    // app's main loop
    while(app.isRunning()) {
        
        //title.setXPosition(s)
        
        
        if (m3d::buttons::buttonPressed(m3d::buttons::B)) {
            app.exit();
        }
    }

    return(0);
}