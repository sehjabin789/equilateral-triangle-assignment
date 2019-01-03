#include<stdio.h>

#include<graphics.h>

#include<conio.h>

#include<math.h>

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)

{

   line(x1,y1,x2,y2);

   line(x2,y2,x3,y3);

   line(x3,y3,x1,y1);

}

void Rotate(int x1,int y1,int x2,int y2,int x3,int y3)

{

    int x,y,a1,b1,a2,b2,a3,b3,p=x2,q=y2;

    float theta;

    printf("Enter the angle for rotation:");

    scanf("%f",&theta);

    cleardevice();

    theta=(theta*3.14)/180;

    a1=p+(x1-p)*cos(theta)-(y1-q)*sin(theta);

    b1=q+(x1-p)*sin(theta)+(y1-q)*cos(theta);

    a2=p+(x2-p)*cos(theta)-(y2-q)*sin(theta);

    b2=q+(x2-p)*sin(theta)+(y2-q)*cos(theta);

    a3=p+(x3-p)*cos(theta)-(y3-q)*sin(theta);

    b3=q+(x3-p)*sin(theta)+(y3-q)*cos(theta);

    printf("Rotate");

    triangle(a1,b1,a2,b2,a3,b3);

}


void main()

{

    int gd=DETECT,gm;

    int x1,y1,x2,y2,x3,y3;

    initgraph(&gd,&gm," ");

    printf("Enter the 1st point for the triangle:");

    scanf("%d%d",&x1,&y1);

    printf("Enter the 2nd point for the triangle:");

    scanf("%d%d",&x2,&y2);

    printf("Enter the 3rd point for the triangle:");

    scanf("%d%d",&x3,&y3);

    triangle(x1,y1,x2,y2,x3,y3);

    getch();

    cleardevice();

    Rotate(x1,y1,x2,y2,x3,y3);

    setcolor(5);

    triangle(x1,y1,x2,y2,x3,y3);

    getch();

}

