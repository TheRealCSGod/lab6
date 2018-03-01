// Erik Soto


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
void drawBox(int x, int y) {

    static float angle = 0.0;	

    glPushMatrix();
 
    glTranslatef(x,y,0.0);
    glRotatef(angle , 0.0f, 0.0f, 1.0f);
    glTranslatef(-50.0,-50.0, 0.0);
    angle = angle + 2.5;

    glBegin(GL_QUADS);
    glColor3f(.7281938,.43829,.2738);
    glVertex2i(0,	0);
    glVertex2i(0,	100);
    glVertex2i(100,	100);
    glVertex2i(100,	0);

    glEnd();


    Rect b;
    b.bot = 50;
    b.left = 0;
    b.center = 0;
    ggprint8b(&b, 16, 0x00ff0000, " Erik Soto" );
 
    glPopMatrix();

}


