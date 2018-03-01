#include "fonts.h"
#include <GL/glx.h>

#pragma once
void showName() {

    Rect b;
    glClear(GL_COLOR_BUFFER_BIT);
    b.bot = 600;
    b.left = 10;
    b.center = 0;
    ggprint8b(&b, 16, 0x00ff0000, " Erik Soto" );
}

