#include <graphics.h>
#include <math.h>

#include <iostream>
using namespace std;

const int WIDTH = 800, HEIGHT = 600;
void drawLine(int toX, int toY, int drawX, int drawY, int color, int textX, int textY, char* name) {
    moveto(toX, toY);
    setcolor(color);
    lineto(drawX, drawY);
    outtextxy(textX, textY, name);
}
int main(int argc, char const* argv[]) {
    double x, y;
    initwindow(WIDTH, HEIGHT);

    return 0;
}
