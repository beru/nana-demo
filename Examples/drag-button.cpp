#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/dragger.hpp>

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
    using namespace nana;

    form fm;
    button btn(fm, nana::rectangle(10, 10, 100, 20));
    btn.caption("Drag Me");
    
    dragger dg;
    dg.trigger(btn);  //When you drag the btn, then
    dg.target(btn);   //move the btn

    fm.show();
    exec();
}