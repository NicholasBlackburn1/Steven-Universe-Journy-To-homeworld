
#include <m3dia.hpp>



int main() {
    // instance of the applet
    m3d::Applet app;
    m3d::Screen scr;
    m3d::Sprite title("romfs:/gfx/title.t3x",0);
    
    // standard C printf()
    printf("Hello, Steven Unierse Journey to homeworld is loading\n");
        
    // app's main loop
    while(app.isRunning()) {
        

        if (m3d::buttons::buttonPressed(m3d::buttons::Start)) {
            
            scr.drawTop(title);
            scr.render();
        }
    
        
        if (m3d::buttons::buttonPressed(m3d::buttons::B)) {
            app.exit();
        }
    }

    return(0);
}