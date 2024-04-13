#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <process.h>
void RectAngle(int x, int y, int h, int w);
void Translate(int x, int y, int h, int w);

void main()
{

    int gd, gm;
    int x, y, h, w;
    detectgraph(&gd, &gm, "C://TURBOC#/BGI");

    printf("Enter The First Point For The Rectangle: ");
    scanf("%d%d", &x, &y);
    printf("Enter The Height and Width for the Rectangle: ")
        scanf("%d%d", &h, &w);

    RectAngle(x, y, h, w);
    getch();
    cleardevice();
    Translate(x, y, h, w);
    RectAngle(x, y, h, w);
    getch();
}

void RectAngle(int x, int y, int h, int w)
{
    line(x, y, x + w, y);
    line(x, y, x, y + h);
    line(x + w, y, x + w, y + h);
    line(x, y + h, x + w, y + h);
}

void Translate(int x, int y, int h, int w);
{
    int Tx, Ty, a, b;
    printf("Enter The Translation Coordinates : ");
    scanf("%d%d", &Tx, &Ty);
    cleardevice();

    a = x + Tx;
    b = y + Ty
}

// WAP to Translate RectAngle/Triangle using C
