#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/dragger.hpp>

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
    using namespace nana;
    form   fm;
    fm.caption(("Main Nana Window - target"));
    
    button btn(fm, nana::rectangle(10, 10, 100, 20));
    btn.caption(("Drag Me"));
    
    form & adherent = form_loader<form>()();
    adherent.caption(("target & trigger"));

    adherent.show();

    dragger dg;
    dg.target(fm);
    dg.target(adherent);
    dg.trigger(btn);
    dg.trigger(adherent);
    fm.show();

    exec();
}