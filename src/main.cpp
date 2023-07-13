#include "Engine.h"
#include <unistd.h>


int main ( int argc, char** argv )
{
    Engine engine;

    engine.Init();
    engine.Start();

#ifdef TARGET_GP2X
    chdir("/usr/gp2x");
    execl("/usr/gp2x/gp2xmenu", "/usr/gp2x/gp2xmenu", NULL);
#endif

    return 0;
}
