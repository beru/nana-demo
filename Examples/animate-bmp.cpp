#include <nana/gui/wvl.hpp>
#include <nana/gui/animation.hpp>

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
    using namespace nana;
   
    //Build frames
    frameset fset;
    fset.push_back(nana::paint::image("../Examples/a_pic0.bmp"));
    fset.push_back(nana::paint::image("../Examples/a_pic1.bmp"));
    fset.push_back(nana::paint::image("../Examples/a_pic2.bmp"));

    //A widget to display animation.
    form fm;
    fm.show();

    animation ani;
    ani.push_back(fset);
    ani.output(fm, nana::point());
    ani.looped(true);
    ani.play();

    exec();
}
