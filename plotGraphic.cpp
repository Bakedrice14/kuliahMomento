#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    circle(320, 240, 200);
    getch();
    closegraph();
}