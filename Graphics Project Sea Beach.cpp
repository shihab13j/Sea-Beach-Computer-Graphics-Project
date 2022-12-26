#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
#include<iostream>>
#include<cstdio>
#include <windows.h>
#include<bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>
#include <mmsystem.h>
GLfloat position = 0.0f;
//int sk4=20;
float PI=3.1416;
int posx=0,posy=0;
int tnx=0,tny=0;
int day = 1; //1 for day ,0 for night
float speed = 1.0;


void tree()
{
///hill

  glColor3ub(114,136,82);


glBegin(GL_POLYGON);


    glVertex3i(10, 550, 0);
    glVertex3i(150, 550, 0);
    glVertex3i(60, 630, 0);
glEnd();
///hill2
glBegin(GL_POLYGON);


    glVertex3i(40, 550, 0);
    glVertex3i(300, 550, 0);
    glVertex3i(220, 700, 0);
glEnd();





}
void Ntree()
{
///hill

  glColor3ub(114,89,21);


glBegin(GL_POLYGON);


    glVertex3i(10, 550, 0);
    glVertex3i(150, 550, 0);
    glVertex3i(60, 630, 0);
glEnd();
///hill2
glBegin(GL_POLYGON);


    glVertex3i(40, 550, 0);
    glVertex3i(300, 550, 0);
    glVertex3i(220, 700, 0);
glEnd();





}



///land
void land()
{
    glColor3ub(198, 169, 144);
    //glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
void Nland()
{
    glColor3ub(194, 178, 128);
    //glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}

///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    //glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
void Nriver()
{
    glColor3ub(0,23,133);
    //glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
void drawFilledHalfCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 200; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI/2;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


///hill
void hill()
{
    glColor3ub(0,182,136);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3ub(0,182,136);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3ub(0,195,127);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}


///night hill
void Nhill()
{
    glColor3ub(65,89,11);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3ub(65,89,11);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3ub(65,89,11);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}

void umbrella()
{

//sea_beach_umbrella()
glPushMatrix();
    glColor3ub(238,39,64);
    drawFilledHalfCircle(800,200,90);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(800,200);
    glVertex2f(800,30);
    glEnd();
    glPopMatrix();




    glPushMatrix();
    //sea_beach_umbrella()
//glScaled(1,1,0);
    glColor3ub(238,39,64);
    drawFilledHalfCircle(500,200,90);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(500,200);
    glVertex2f(500,30);
    glEnd();
    glPopMatrix();

    //chair
    glPushMatrix();
    glColor3ub(255,100,100);
    glBegin(GL_QUADS);
    glVertex2f(510,60);
    glVertex2f(530,30);
    glVertex2f(580, 30);
    glVertex2f(560, 60);
    glEnd();
    glLineWidth(50);
    glBegin(GL_QUADS);
    glVertex2f(660,30);
    glVertex2f(570,30);
    glVertex2f(570,40);
    glVertex2f(660,40);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    //sea_beach_umbrella()

    glColor3ub(238, 39, 64);
    //glColor3ub(0, 0, 255);
    drawFilledHalfCircle(200,200,90);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(200,200);
    glVertex2f(200,30);
    glEnd();
    glPopMatrix();

    //chair
    glPushMatrix();
    glColor3ub(255,100,100);
    glBegin(GL_QUADS);
    glVertex2f(210,60);
    glVertex2f(230,30);
    glVertex2f(280, 30);
    glVertex2f(260, 60);
    glEnd();
    glLineWidth(50);
    glBegin(GL_QUADS);
    glVertex2f(360,30);
    glVertex2f(270,30);
    glVertex2f(270,40);
    glVertex2f(360,40);
    glEnd();
    glPopMatrix();


    //chair
    glPushMatrix();
    glColor3ub(255,100,100);
    glBegin(GL_QUADS);
    glVertex2f(810,60);
    glVertex2f(830,30);
    glVertex2f(880, 30);
    glVertex2f(860, 60);
    glEnd();
    glLineWidth(50);
    glBegin(GL_QUADS);
    glVertex2f(960,30);
    glVertex2f(870,30);
    glVertex2f(870,40);
    glVertex2f(960,40);
    glEnd();
    glPopMatrix();

}




void ballon()
{

    glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
    glTranslatef(0,0,0);
    glColor3ub(255,0,0);
    drawFilledHalfCircle(200,1000,80);
    glPopMatrix();

glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(160,850);
    glColor3ub(255,0,0);
    glVertex2f(120,1000);
    glColor3ub(255,0,0);
    glVertex2f(280,1000);
    glColor3ub(255,0,0);
    glVertex2f(235,850);

    glEnd();
glPopMatrix();

glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
    glLineWidth(100);
    glBegin(GL_LINES);
    glColor3ub(0, 100, 100);
    glVertex2f(170,770);
    glVertex2f(220,770);
    glEnd();
    glPopMatrix();
glPushMatrix();
glLineWidth(1);
//glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 100, 100);

    glVertex2f(173,790);
    glVertex2f(160,850);

    glVertex2f(220,790);
    glVertex2f(235,850);
    glEnd();
    glPopMatrix();

}


void ship(){
    glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);
	glScaled(8,8,0);
	glTranslated(50,72,0);
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,8.5);
		glVertex2f(19.5,8.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(1,5.5);
		glVertex2f(4,1);
		glVertex2f(19,1);
		glVertex2f(21.5,5.5);
	glEnd();
	glColor3f(0.7,0.4,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(4,5.5);
		glVertex2f(4,8);
		glVertex2f(5,8);
		glVertex2f(5,5.5);
	glEnd();
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
		glVertex2f(7,7.5);
		glVertex2f(7,8);
		glVertex2f(10,8);
		glVertex2f(10,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(11.5,7.5);
		glVertex2f(11.5,8);
		glVertex2f(15,8);
		glVertex2f(15,7.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(16,7.5);
		glVertex2f(16,8);
		glVertex2f(19,8);
		glVertex2f(19,7.5);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(4.5,8.5);
		glVertex2f(4.5,10);
		glVertex2f(18.5,10);
		glVertex2f(18.5,8.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,10);
		glVertex2f(5.5,12.9);
		glVertex2f(7,12.9);
		glVertex2f(7,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,12.9);
		glVertex2f(5.5,13.5);
		glVertex2f(7,13.5);
		glVertex2f(7,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,10);
		glVertex2f(8.5,12.9);
		glVertex2f(10,12.9);
		glVertex2f(10,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(8.5,12.9);
		glVertex2f(8.5,13.5);
		glVertex2f(10,13.5);
		glVertex2f(10,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,10);
		glVertex2f(11.5,12.9);
		glVertex2f(13,12.9);
		glVertex2f(13,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(11.5,12.9);
		glVertex2f(11.5,13.5);
		glVertex2f(13,13.5);
		glVertex2f(13,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,10);
		glVertex2f(14.5,12.9);
		glVertex2f(16,12.9);
		glVertex2f(16,10);
	glEnd();
	glColor3f(0.9,0.5,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(14.5,12.9);
		glVertex2f(14.5,13.5);
		glVertex2f(16,13.5);
		glVertex2f(16,12.9);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(1.5,5.5);
		glVertex2f(1.5,6.5);
		glVertex2f(2,6.2);
		glVertex2f(3,6.2);
		glVertex2f(3.5,6.5);
		glVertex2f(3.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(3.5,5.5);
		glVertex2f(3.5,6.5);
		glVertex2f(4,6.2);
		glVertex2f(5,6.2);
		glVertex2f(5.5,6.5);
		glVertex2f(5.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(5.5,5.5);
		glVertex2f(5.5,6.5);
		glVertex2f(6,6.2);
		glVertex2f(7,6.2);
		glVertex2f(7.5,6.5);
		glVertex2f(7.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7.5,5.5);
		glVertex2f(7.5,6.5);
		glVertex2f(8,6.2);
		glVertex2f(9,6.2);
		glVertex2f(9.5,6.5);
		glVertex2f(9.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,5.5);
		glVertex2f(9.5,6.5);
		glVertex2f(10,6.2);
		glVertex2f(11,6.2);
		glVertex2f(11.5,6.5);
		glVertex2f(11.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5,5.5);
		glVertex2f(11.5,6.5);
		glVertex2f(12,6.2);
		glVertex2f(13,6.2);
		glVertex2f(13.5,6.5);
		glVertex2f(13.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5,5.5);
		glVertex2f(13.5,6.5);
		glVertex2f(14,6.2);
		glVertex2f(15,6.2);
		glVertex2f(15.5,6.5);
		glVertex2f(15.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15.5,5.5);
		glVertex2f(15.5,6.5);
		glVertex2f(16,6.2);
		glVertex2f(17,6.2);
		glVertex2f(17.5,6.5);
		glVertex2f(17.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17.5,5.5);
		glVertex2f(17.5,6.5);
		glVertex2f(18,6.2);
		glVertex2f(19,6.2);
		glVertex2f(19.5,6.5);
		glVertex2f(19.5,5.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(19.5,5.5);
		glVertex2f(19.5,6.5);
		glVertex2f(20,6.2);
		glVertex2f(20.5,6.2);
		glVertex2f(21,6.5);
		glVertex2f(21,5.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(4.5,3.5);
		glVertex2f(4.5,4.5);
		glVertex2f(5.5,4.5);
		glVertex2f(5.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,3.5);
		glVertex2f(7,4.5);
		glVertex2f(8,4.5);
		glVertex2f(8,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9.5,3.5);
		glVertex2f(9.5,4.5);
		glVertex2f(10.5,4.5);
		glVertex2f(10.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(12,3.5);
		glVertex2f(12,4.5);
		glVertex2f(13,4.5);
		glVertex2f(13,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(14.5,3.5);
		glVertex2f(14.5,4.5);
		glVertex2f(15.5,4.5);
		glVertex2f(15.5,3.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(17,3.5);
		glVertex2f(17,4.5);
		glVertex2f(18,4.5);
		glVertex2f(18,3.5);
	glEnd();


	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(5,10);
		glVertex2f(5,11);
		glVertex2f(5.5,10.8);
		glVertex2f(6.5,10.8);
		glVertex2f(7,11);
		glVertex2f(7,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(7,10);
		glVertex2f(7,11);
		glVertex2f(7.5,10.8);
		glVertex2f(8.5,10.8);
		glVertex2f(9,11);
		glVertex2f(9,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(9,10);
		glVertex2f(9,11);
		glVertex2f(9.5,10.8);
		glVertex2f(10.5,10.8);
		glVertex2f(11,11);
		glVertex2f(11,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(11,10);
		glVertex2f(11,11);
		glVertex2f(11.5,10.8);
		glVertex2f(12.5,10.8);
		glVertex2f(13,11);
		glVertex2f(13,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(13,10);
		glVertex2f(13,11);
		glVertex2f(13.5,10.8);
		glVertex2f(14.5,10.8);
		glVertex2f(15,11);
		glVertex2f(15,10);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(15,10);
		glVertex2f(15,11);
		glVertex2f(15.5,10.8);
		glVertex2f(16.5,10.8);
		glVertex2f(17,11);
		glVertex2f(17,10);
	glEnd();

    glPopMatrix();


}

void bench()
{

}


int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,550-100,0);
    glVertex3i(150+50,550-100,0);
    glVertex3i(120+50,500-100,0);
    glVertex3i(30,500-100,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,550-100,0);
    glVertex3i(150,550-100,0);
    glVertex3i(150,600-100,0);
    glVertex3i(50,600-100,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,550-50,0);
    glVertex3i(150+50+200,550-50,0);
    glVertex3i(120+50+200,500-50,0);
    glVertex3i(30+200,500-50,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+200,550-50,0);
    glVertex3i(150+200,550-50,0);
    glVertex3i(150+200,600-50,0);
    glVertex3i(50+200,600-50,0);
    glEnd();



}
//night
void night_effect()
{
     glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}
//star
void star()
{
    //star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//moon
void moon()
{


glColor3f(1,1,1);


a=600;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;

glVertex3i(x+a,y+b,0);


glBegin(GL_POLYGON);

glVertex3i(x+a,y+b,0);

if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}





void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        umbrella();
        //ship();
         sun();
         bench();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();

        glPopMatrix();
        glPushMatrix();
        glTranslatef(tnx,0,0);
        ballon();
        ship();
        glPopMatrix();

    }
    else
    {

        night_effect();
        Nland();
        star();
        Nhill();
        Ntree();
        Nriver();
        umbrella();
        //ship();
        //house();
        //sun();
        moon();
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();

        glPopMatrix();
        glPushMatrix();
        glTranslatef(tnx,0,0);
        ship();
        //house();
        glPopMatrix();

    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;

    case 'a':case 'A':
    speed = 0.0f;
    break;
    case 'w':case 'W':
    speed += 2.0f;
    break;

	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
        posx += speed;
    }
    else{
        posx++;
        posx += speed;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}
void update2(int value) {


    if(tnx>=1200)
    {
        tnx=5;
    }
    else{
        tnx++;
    }
    glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}
void init(void)
{

glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
    printf("\n");
    printf(" |===========================================================|\n");
    printf(" |===>                   Welcome                         <===|\n");
    printf(" #----         Graphics Project:-'Sea Beach'           ------#\n");
    printf(" |-----------------------------------------------------------|\n");
    printf(" |                                                           |\n");
    printf(" #----Help Center (How to Operate ?) ------------------------#\n");
	printf(" |    |> Press 'd' or 'D' For Day Mode                       |\n");
	printf(" |    |> Press 'n' or 'N' For night Mode                     |\n");
	printf(" |    |> Press 'w' or 'W' For Boat Speed Up                  |\n");
	printf(" |    |> Press 'a' or 'A' For Boat Normal Speed Mode         |\n");
	printf(" |                                                           |\n");
	printf(" |-----------------------------------------------------------|\n");
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Sea Beach");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutTimerFunc(25, update2, 0);
glutMainLoop();
return 0;
}
