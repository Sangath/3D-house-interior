#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
//#include <stdlib.h>
int turn;
void doort(int v);
GLfloat xx = 0.0, zz = 0.0,xx1=1;
float lx = 0.0f, lz = -1.0f , angle=0.0;
static GLdouble viewer[] = { 0.0, 0.2, 4.2 };
static GLdouble lat[] = { 0.0, 0.2, 0.0 };
GLfloat oo = 0, cr = 0,cb=0,cg=0;
void *font = GLUT_BITMAP_HELVETICA_18;
void output(float x, float y, char *s)
{
	glRasterPos2f(x, y);
	for (unsigned int i = 0; i<strlen(s); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
	}
}
/*void tf(int v)
{
	
	while (oo <= 45)
	{
		oo++;
	}
	glutTimerFunc(100, tf, 0);
	glutPostRedisplay();
}*/

void tfs(int v)
{
	cr += 0.01;
	cb += 0.001;
	cg += 0.0001;
	if (cr > 1.0)
	{
		cr = 0;
		
	}
	 if (cb > 1.0)
	{
		cb = 0;

	}
	if (cg > 1.0)
	{
		cg = 0;

	}

	glutPostRedisplay();
	glutTimerFunc(100, tfs, 0);
	
}
void doort(int v)
{
	if (xx < 0.2 &&zz < 0.2){
		xx += 0.01;
		zz += 0.01;
	}


		xx1 = 0;
		
	

	glutPostRedisplay();
	glutTimerFunc(100, doort, 0);

}
void lines()
{
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(0.2);
	glBegin(GL_LINES);
	glVertex3f(-0.8, 0.00, 1);
	glVertex3f(-0.8, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.6, 0.00, 1);
	glVertex3f(-0.6, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.4, 0.00, 1);
	glVertex3f(-0.4, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.2, 0.00, 1);
	glVertex3f(-0.2, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.0, 0.00, 1);
	glVertex3f(0.0, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.2, 0.00, 1);
	glVertex3f(0.2, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.4, 0.00, 1);
	glVertex3f(0.4, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.6, 0.00, 1);
	glVertex3f(0.6, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.8, 0.00, 1);
	glVertex3f(0.8, 0.00, -1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.0, 0.00, 1);
	glVertex3f(1.0, 0.00, -1);
	glEnd();
	//vertical

	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.8);
	glVertex3f(1, 0.00, -0.8);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.6);
	glVertex3f(1, 0.00, -0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.4);
	glVertex3f(1, 0.00, -0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, -0.2);
	glVertex3f(1, 0.00, -0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.0);
	glVertex3f(1, 0.00, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.2);
	glVertex3f(1, 0.00, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.4);
	glVertex3f(1, 0.00, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.6);
	glVertex3f(1, 0.00, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 0.8);
	glVertex3f(1, 0.00, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, 0.00, 1.0);
	glVertex3f(1, 0.00, 1.0);
	glEnd();
}
void redwall()
{

	//--------------dark red top---------------------
	glColor3f(0.53, 0.12, 0.12);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 1);
	glVertex3f(-0.98, 0.5, 1);
	glVertex3f(-0.98, 0.5, 0.9);
	glVertex3f(-0.98, 0.0, 0.9);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.5, 0.9);
	glVertex3f(-0.98, 0.5, -0.2);
	glVertex3f(-0.98, 0.4, -0.2);
	glVertex3f(-0.98, 0.4, 0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.5, -0.3);
	glVertex3f(-0.98, 0.0, -0.3);
	glVertex3f(-0.98, 0.0, -0.2);
	glVertex3f(-0.98, 0.5, -0.2);
	glEnd();
//--------------grey mid--------------

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 0.9);
	glVertex3f(-0.98, 0.4, 0.9);
	glVertex3f(-0.98, 0.4, 0.7);
	glVertex3f(-0.98, 0.0, 0.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.4, 0.7);
	glVertex3f(-0.98, 0.4, 0.0);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.25, 0.7);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.4, -0.2);
	glVertex3f(-0.98, 0.0, -0.2);
	glVertex3f(-0.98, 0.0, 0.0);
	glVertex3f(-0.98, 0.4, 0.0);
	glEnd();
	
	//--------------black----------------
	glColor3f(0.15, 0.11, 0.11);
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.0, 0.7);
	glVertex3f(-0.98, 0.25, 0.7);
	glVertex3f(-0.98, 0.25, 0.65);
	glVertex3f(-0.98, 0.0, 0.65);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.25, 0.65);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.2, 0.0);
	glVertex3f(-0.98, 0.2, 0.65);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.98, 0.25, 0.0);
	glVertex3f(-0.98, 0.0, 0.0);
	glVertex3f(-0.98, 0.0, 0.05);
	glVertex3f(-0.98, 0.25, 0.05);
	glEnd();


	//-------------black drawer---------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.95, 0.06, 0.8);
	glScalef(1.1, 0.4, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.92, 0.06, 0.8);
	glScalef(0.56, 0.15, 1.45);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------bed(1st layer)------------
	glColor3f(0.15, 0.11, 0.11);
	glPushMatrix();
	glTranslatef(-0.7, 0.01, 0.36);
	glScalef(6, 0.25, 5);
	glutSolidCube(0.1);
	glPopMatrix();
	//----------2nd layer)---------------
	glColor3f(0.17, 0.13, 0.12);
	glPushMatrix();
	glTranslatef(-0.7, 0.04, 0.36);
	glScalef(6, 0.3, 5.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//----------bed-----------

	glColor3f(0.84, 0.72, 0.69);
	glPushMatrix();
	glTranslatef(-0.7, 0.065, 0.36);
	glScalef(5.9, 0.3, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();
	//--------------bedsheet----------------
	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.5, 0.069, 0.36);
	glScalef(2.5, 0.3, 5.2);
	glutSolidCube(0.1);
	glPopMatrix();


	//--------------pillow---------------

	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.9, 0.1, 0.5);
	glScalef(1, 0.2, 1.5);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.86, 0.52, 0.55);
	glPushMatrix();
	glTranslatef(-0.9, 0.1, 0.25);
	glScalef(1, 0.2, 1.5);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();
	//-------light-------

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.98, 0.3, -0.1);
	//glScalef(2.5, 0.3, 5.2);
	glRotatef(90, 1, 0, 0);
	glutSolidCone(0.03, 0.07, 100, 100);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.98, 0.3, 0.8);
	//glScalef(2.5, 0.3, 5.2);
	glRotatef(90, 1, 0, 0);
	glutSolidCone(0.03, 0.07, 100, 100);
	glPopMatrix();
}
void greywall()
{
	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.55, 0.32, 0.-0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.42, 0.28, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.31, 0.32, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.2, 0.28, 0. - 0.9);
	glutSolidCube(0.08);
	glPopMatrix();
}
void box()
{


//----------TV -------------
	glColor3f(0.18, 0.12, 0.13);
	glPushMatrix();
	glTranslatef(0.46, 0.25, 0.5);
	glScalef(0.1, 1.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.25, 0.5);
	glScalef(0.1, 1.55, 3.3);
	glutSolidCube(0.1);
	glPopMatrix();


	//--------------table-----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.46, 0.1, 0.5);
	glScalef(0.4, 0.4, 3);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.455, 0.1, 0.5);
	glScalef(0.41, 0.2, 2.9);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------speaker-----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.08, 0.2);
	glScalef(0.1, 1.55, 0.7);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.47, 0.08, 0.8);
	glScalef(0.1, 1.55, 0.7);
	glutSolidCube(0.1);
	glPopMatrix();

	//--------cube-------------


	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(0.47, 0.4, 0.1);
	glutSolidCube(0.08);
	glPopMatrix();

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(0.47, 0.35, 0.2);
	glutSolidCube(0.08);
	glPopMatrix();
}
void sofa()
{


	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.32, 0.065, -0.3);
	glScalef(4, 0.65, 1.7);
	glutSolidCube(0.1);
	glPopMatrix();

	//------base-black-----------
	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(-0.32, 0.015, -0.3);
	glScalef(4.1, 0.15, 1.71);
	glutSolidCube(0.1);
	glPopMatrix();

	//-------back
	glColor3f(0.19, 0.19, 0.19);
	glPushMatrix();
	glTranslatef(-0.32, 0.1, -0.36);
	glScalef(4.1, 1.3, 0.61);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------seat----------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.41, 0.092, -0.25);
	glScalef(1.7, 0.15, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-0.21, 0.092, -0.25);
	glScalef(1.7, 0.15, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

	//------side rest--------

	glColor3f(0.91, 0.91, 0.89);
	glPushMatrix();
	glTranslatef(-0.55, 0.065, -0.3);
	glScalef(1, 1.4, 1.1);
	glutSolidCube(0.1);
	glPopMatrix();

}

void wardrobe()
{
	//--------------wall--------
	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(-0.99, 0.25, -0.8);
	glScalef(0.5, 5, 4);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.99, 0.25, -0.8);
	glScalef(0.5, 5, 4);
	glutSolidCube(0.1);
	glPopMatrix();
    
	//-----------top-------------

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.0, 0.5, -0.8);
	glScalef(20, 0.5, 4);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------wardrobe-------------
	glColor3f(0.38, 0.27, 0.19);
	glPushMatrix();
	glTranslatef(0.4, 0.2, -0.9);
	glScalef(8, 4, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	//----------design--------------

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.1, 0.2, -0.89);
	glScalef(1.5, 3.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.4, 0.2, -0.89);
	glScalef(1.5, 3.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.6, 0.3, -0.89);
	glScalef(0.7, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.7, 0.3, -0.89);
	glScalef(0.7, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.65, 0.1, -0.89);
	glScalef(1.8, 1.5, 2);
	glutSolidCube(0.1);
	glPopMatrix();
}
void room1()
{
	
	 /*glColor3f(1.0, 0.0, 1.0);
	glPushMatrix();
	glutSolidCube(2);
	glPopMatrix();*/
	//--------------floor-----------------
	glColor3f(0.85, 0.85, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, -1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-1, 0.0, -1);
	glEnd();
	 
	lines();


	//--------wall(back)grey1----------------
	//glColor3f(0.54, 0.54, 0.52);
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, -1);
	glVertex3f(1, 0.0, -1);
	glVertex3f(-1, 0.0, -1);
	glVertex3f(-1, 0.5, -1);
	glEnd();


	//----------wall(right)------
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, -1);
	glVertex3f(1, 0.0, -1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.5, 1);
	glEnd();



	//----------wall(left)red------
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, -1);
	glVertex3f(-1, 0.0, -1);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-1, 0.5, 1);
	glEnd();



	//----------roof------
	glColor3f(0.80, 0.60, 0.58);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, -1);
	glVertex3f(-1, 0.5, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, -1);
	glEnd();

	//--------wall(back)grey1----------------
	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.27, 1);
	glVertex3f(-1, 0.27, 1);
	glVertex3f(-1, 0.5, 1);
	glEnd();

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1);
	glVertex3f(0.2, 0.27, 1);
	glVertex3f(-1, 0.27, 1);
	glVertex3f(-1, 0.0, 1);
	glEnd();

	glColor3f(0.69, 0.58, 0.56);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.0, 1);
	glVertex3f(0.4, 0.27, 1);
	glVertex3f(1, 0.27, 1);
	glVertex3f(1, 0.0, 1);
	glEnd();
//----------------door main-------------
	glColor3f(0.01, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(0.15, 0.135, 1.055);
	glRotatef(45+oo, 0, 1, 0);
	glScalef(1.5, 2.7, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.901, 0.9012, 0.9012);
	glPushMatrix();
	glTranslatef(0.15, 0.135, 1.055);
	glRotatef(45 + oo, 0, 1, 0);
	glScalef(1.2, 2.2, 0.11);
	glutSolidCube(0.1);
	glPopMatrix();

	//--border------

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.285, 1.0101);
	glVertex3f(0.4, 0.27, 1.0101);
	glVertex3f(0.2, 0.27, 1.0101);
	glVertex3f(0.2, 0.285, 1.0101);
	glEnd();

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.395, 0.0, 1.0101);
	glVertex3f(0.395, 0.285, 1.0101);
	glVertex3f(0.41, 0.285, 1.0101);
	glVertex3f(0.41, 0.0, 1.0101);
	glEnd();



	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1.0101);
	glVertex3f(0.2, 0.285, 1.0101);
	glVertex3f(0.185, 0.285, 1.0101);
	glVertex3f(0.185, 0.0, 1.0101);
	glEnd();

	// back border-----

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.285, 0.999);
	glVertex3f(0.4, 0.27, 0.999);
	glVertex3f(0.2, 0.27, 0.999);
	glVertex3f(0.2, 0.285, 0.999);
	glEnd();

	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.395, 0.0, 0.999);
	glVertex3f(0.395, 0.285, 0.999);
	glVertex3f(0.41, 0.285, 0.999);
	glVertex3f(0.41, 0.0, 0.999);
	glEnd();



	glColor3f(0.38, 0.27, 0.19);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 0.999);
	glVertex3f(0.2, 0.285, 0.999);
	glVertex3f(0.185, 0.285, 0.999);
	glVertex3f(0.185, 0.0, 0.999);
	glEnd();





//-------------tv walll------
	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(0.74, 0.25,0.5 );
	glScalef(5.1, 5, 9.99);
	glutSolidCube(0.1);
	glPopMatrix();

//---------door------------

	glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.74, 0.18, -0.005);
	glScalef(2, 3.5, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.47, 0.35, 0.26);
	glPushMatrix();
	glTranslatef(0.74, 0.18, 0.0);
	glScalef(2.1, 3.6, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//---------roof lamp--------------------------------

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-0.2, 0.5, 0.0);
	glRotatef(90, 1, 0, 0);
	glutSolidTorus(0.03, 0.41,100, 100);
	glPopMatrix();





	redwall();

	greywall();

	box();

	wardrobe();

	sofa();

	glFlush();

}

//-----------------------------------------room2----------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void text()
{



	if (xx1)
	{



		output(-0.450, 0.400, "DEPARTMENT OF COMPUTER SCIENCE & ENGINEERING");
		output(-0.360, 0.325, "SRINIVAS SCHOOL OF ENGINEERING,MUKKA");
		output(-0.100, 0.250, "MINI PROJECT ON");
		//output(0.0, 0.175, "ON");
		output(-0.075, 0.100, "3D House Interior");
		output(0.00, 0.025, "BY");
		output(-0.480, -0.050, "SANGAT D");
		output(-0.480, -0.125, "4ES12CS060");
		output(0.350, -0.050, "NIYAD REHEMAN");
		output(0.350, -0.125, "4ES13CS402");
		output(-0.060, -0.250, "GUIDED BY");
		output(-0.480, -0.350, "NIKITHA SAURABH");
		output(0.350, -0.350, "SWARNA.H.R");
		output(-0.999, -0.500, "Press 'O' to open the door");
		glFlush();


	}






}
void r2floor()
{

	//---------------stair-----------
	glColor3f(0.891, 0.891, 0.85);

	glPushMatrix();
	glTranslatef(2.74, 0.082, 2);
	glScalef(5.5, 1.75, 20);
	glutSolidCube(0.1);
	glPopMatrix();

	//glColor3f(0.91, 0.91, 0.89);

	glPushMatrix();
	glTranslatef(2.35, 0.082, 1.75);
	glScalef(2.5, 1.75, 15);
	glutSolidCube(0.1);
	glPopMatrix();

//------------------step-----------------------------

	glColor3f(0.98, 0.98, 0.98);
	glPushMatrix();
	glTranslatef(2.42, 0.062, 2.743);
	glScalef(1.0, 1.35, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.98, 0.98, 0.98);
	glPushMatrix();
	glTranslatef(2.32, 0.032, 2.743);
	glScalef(1.0, 0.8, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();


	//----------------black cover

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.42, 0.127, 2.743);
	glScalef(0.98, 0.2, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.32, 0.069, 2.743);
	glScalef(0.98, 0.2, 5.1);
	glutSolidCube(0.1);
	glPopMatrix();

//------------------------marbel-----------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.9);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

		//--
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.6971);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//--
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.4912);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.286);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 2.082);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.876);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.67);
	glScalef(13, 0.05, 0.8);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.465);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.26);
	glScalef(13, 0.05, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.65, 0.001, 1.089);
	glScalef(13, 0.05, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();
	//--------------------up-------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.92, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.74, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.56, 0.177, 2.04);
	glScalef(1.2, 0.05, 19.3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.38, 0.177, 1.78);
	glScalef(1.2, 0.05, 13.6);
	glutSolidCube(0.1);
	glPopMatrix();


}
void r2wardrobe()
{
	//------------black border---------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.5, 0.15, 1.10);
	glScalef(7, 4, 2);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------------------inner-----------
	//white
	glColor3f(0.990, 0.9901, 0.9909);
	glPushMatrix();
	glTranslatef(1.31, 0.1, 1.126);
	glScalef(3, 1.5, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.9901, 0.9909);
	glPushMatrix();
	glTranslatef(1.65, 0.1, 1.126);
	glScalef(3, 1.5, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//-------blue
	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.65, 0.2, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.31, 0.2, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//purple
	glColor3f(0.29, 0.20, 0.36);
	glPushMatrix();
	glTranslatef(1.31, 0.24, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.29, 0.20, 0.36);
	glPushMatrix();
	glTranslatef(1.65, 0.24, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//blue
	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.31, 0.28, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.520, 0.7601, 0.8009);
	glPushMatrix();
	glTranslatef(1.65, 0.28, 1.126);
	glScalef(3, 0.3, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

}
void r2tv()
{
//---------------tv----------------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(2.65, 0.35, 1.00);
	glScalef(2.7, 1.6, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.18, 0.12, 0.13);
	glPushMatrix();
	glTranslatef(2.65, 0.35, 1.01);
	glScalef(2.4, 1.4, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

}

void r2topdesign()
{

	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();

	glColor3f(0.0+cr, 0.0+cg, 0.0+cb);
	glPushMatrix();
	glTranslatef(1.60, 0.39, 1.95);
	glutSolidSphere(0.04, 100, 100);
	glPopMatrix();

	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(1.60, 0.47, 1.95);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.02, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.47, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.002, 0.002, 0.07, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.39, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0415, 0.0415, 0.002, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.37, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0355, 0.0345, 0.003, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.60, 0.41, 1.95);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.0355, 0.0345, 0.003, 100, 100);
	glPopMatrix();
	
}
void r2bed()
{
	
      GLUquadricObj *quadratic;
	  quadratic = gluNewQuadric(); 
	 // gluQuadricDrawStyle(quadratic, GLU_FILL);

	  glPushMatrix();
	  glColor3f(0.9, 0.91, 0.99);
	  glTranslatef(1.65, 0.05, 1.95);
	  glRotatef(90, 1, 0, 0);
	 gluCylinder(quadratic, 0.41, 0.41, 0.1, 100, 100);
	 glPopMatrix();

	 //-------------torus--------

	glColor3f(0.9, 0.91, 0.99);
	glPushMatrix();
	glTranslatef(1.65, 0.05, 1.95);
	glScalef(1, 0.001, 1);
	glRotatef(90, 1, 0, 0);
	glutSolidSphere(0.41, 100, 100);
	glPopMatrix();


	//-----------bed---------
	glColor3f(0.0, 0.01, 0.09);
	glPushMatrix();
	glTranslatef(1.60, 0.08, 1.95);
	glScalef(5, 0.4, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//--------pillow----------

	glColor3f(0.99, 0.99, 0.99);
	glPushMatrix();
	glTranslatef(1.73, 0.1, 1.83);
	glScalef(0.85, 0.3, 1.3);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.99, 0.99, 0.99);
	glPushMatrix();
	glTranslatef(1.73, 0.1, 2.05);
	glScalef(0.85, 0.3, 1.3);
	glRotatef(45, 0, 0, 1);
	glutSolidCube(0.1);
	glPopMatrix();

	//----roof design--------

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(1.60, 0.49, 1.95);
	glScalef(5.5, 0.15, 5);
	glutSolidCube(0.1);
	glPopMatrix();

	

	r2topdesign();




}
void r2sofa()
{
	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(2.6, 0.21, 1.95);
	glScalef(1.2, 0.6, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(2.735, 0.21, 1.95);
	glScalef(1.2, 0.6, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.07, 0.05, 0.09);
	glPushMatrix();
	glTranslatef(2.735, 0.22, 2.1);
	glScalef(1.2, 1.0, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.07, 0.05, 0.09);
	glPushMatrix();
	glTranslatef(2.6, 0.22, 2.1);
	glScalef(1.2, 1.0, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();
}
void r2glass()
{

	glColor4f(1.0, 1.0, 1.0, 0.4);
	glPushMatrix();
	glTranslatef(2.25, 0.315, 1.73);
	glRotatef(90, 0, 1, 0);
	glScalef(14.5, 3, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 2.45);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 1.73);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.315, 1.03);
	glScalef(0.05, 3, 0.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.4, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.43, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.01, 0.01, 0.01);
	glPushMatrix();
	glTranslatef(2.245, 0.37, 1.745);
	glScalef(0.05, 0.08, 14);
	glutSolidCube(0.1);
	glPopMatrix();




}

void room2()
{
	//----------------floor-----------------------
	glColor3f(0.85, 0.85, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 1);
	glVertex3f(3, 0.0, 1);
	glVertex3f(3, 0.0, 3);
	glVertex3f(1, 0.0, 3);
	glEnd();

	//--------------------wall back----------------------
	//glColor3f(0.86, 0.955, 0.95);
	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(3, 0.0, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.5, 3);
	glVertex3f(3, 0.0, 3);
	glEnd();

	//---------wall frist----------------
	glColor3f(0.91, 0.955, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.0, 1);
	glEnd();

//--------------------wall second--------------
	glColor3f(0.91, 0.955, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.5, 3);
	glVertex3f(3, 0.5, 3);
	glVertex3f(3, 0.0, 3);
	glEnd();

//----------------roof------------
	//glColor3f(0.8, 0.955, 0.95);
	glColor3f(0.26, 0.26, 0.26);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(3, 0.5, 1);
	glVertex3f(3, 0.5, 3);
	glVertex3f(1, 0.5, 3);
	glEnd();

	//-----------------entrane--------------

	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(0.99, 0.5, 1);
	glVertex3f(0.99, 0.5, 3);
	glVertex3f(0.99, 0.27, 3);
	glVertex3f(0.99, 0.27, 1);
	glEnd();



	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(0.99, 0.27, 2.8);
	glVertex3f(0.99, 0.27, 3);
	glVertex3f(0.99, 0.0, 3);
	glVertex3f(0.99, 0.0, 2.8);
	glEnd();
	//inner purple
	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, 3);
	glVertex3f(1, 0.27, 3);
	glVertex3f(1, 0.27, 1);
	glEnd();

	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.27, 1);
	glVertex3f(1, 0.27, 2.6);
	glVertex3f(1, 0.0, 2.6);
	glVertex3f(1, 0.0, 1);
	glEnd();

	glColor3f(0.29, 0.20, 0.36);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.27, 2.8);
	glVertex3f(1, 0.27, 3);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.0, 2.8);
	glEnd();


	//-------door main------------

	glColor3f(0.01, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(0.94, 0.135, 2.56);
	glRotatef(135, 0, 1, 0);
	glScalef(1.5, 2.7, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();
	r2glass();

	glColor3f(0.901, 0.9012, 0.9012);
	glPushMatrix();
	glTranslatef(0.94, 0.135, 2.56);
	glRotatef(135, 0, 1, 0);
	glScalef(1.2, 2.4, 0.11);
	glutSolidCube(0.1);
	glPopMatrix();
	r2glass();

	r2floor();

	r2bed();
	r2wardrobe();
	r2sofa();
	r2tv();

}
void mtv()
{
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.96, 0.2, 1.73);
	glScalef(0.1, 4, 7);
	glutSolidCube(0.1);
	glPopMatrix();

	//shadow

	glColor3f(0.0, 0.01, 0.0);
	glPushMatrix();
	glTranslatef(0.97, 0.2, 1.73);
	glScalef(0.001, 4, 7);
	glutSolidCube(0.1);
	glPopMatrix();

	//line

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.425, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.325, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.225, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.990, 0.99901, 0.9909);
	glPushMatrix();
	glTranslatef(0.97, 0.125, 1.8);
	glScalef(0.001, 0.05, 15);
	glutSolidCube(0.1);
	glPopMatrix();


	//tv

	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.2, 1.73);
	glScalef(0.1, 1.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	// speaker

	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.075, 2.0);
	glScalef(0.6, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.64, 0.64, 0.64);
	glPushMatrix();
	glTranslatef(0.9599, 0.075, 2.0);
	glScalef(0.6, 1.52, 0.52);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.0990, 0.099901, 0.09909);
	glPushMatrix();
	glTranslatef(0.9596, 0.075, 1.47);
	glScalef(0.6, 1.5, 0.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.64, 0.64, 0.64);
	glPushMatrix();
	glTranslatef(0.9599, 0.075, 1.47);
	glScalef(0.6, 1.52, 0.52);
	glutSolidCube(0.1);
	glPopMatrix();
}
void msofa()
{
	//base
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.0, 0.002, 1.7);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.0, 0.002, 2.1);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.065, 0.002, 2.2);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(0.065, 0.002, 1.6);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//layer 2

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.0, 0.05, 1.7);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.0, 0.05, 2.1);
	glScalef(1.2, 0.5, 3);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.065, 0.05, 2.2);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.065, 0.05, 1.6);
	glScalef(2.5, 0.5, 1.2);
	glutSolidCube(0.1);
	glPopMatrix();

	//rest

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.06, 0.05, 1.7);
	glScalef(0.4, 1.5, 3.1);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.06, 0.05, 2.115);
	glScalef(0.4, 1.5, 3.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//pillow

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.7);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.8);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 1.6);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.0);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.1);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.5, 0.8, 0.85);
	glPushMatrix();
	glTranslatef(-0.03, 0.115, 2.2);
	glScalef(0.2, 0.5, 0.5);
	glRotatef(45, 1, 0, 0);
	glutSolidCube(0.1);
	glPopMatrix();

	//table

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(0.3, 0.045, 1.9);
	glScalef(1.5, 0.8, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.85, 0.85, 0.85);
	glPushMatrix();
	glTranslatef(0.3, 0.005, 1.9);
	glScalef(1.55, 0.2, 1.55);
	glutSolidCube(0.1);
	glPopMatrix();

	//floor

	glColor3f(0.05, 0.08, 0.085);
	glPushMatrix();
	glTranslatef(0.15, 0.0005, 1.9);
	glScalef(7, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

}
void mdesign()
{
	//1st row
	//red
	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.4, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.47, 0.4, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.4, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.3, 0.4, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//2nd row

	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.25, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.47, 0.25, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//red

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.25, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.3, 0.25, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	//3rd row

	//red
	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.47, 0.1, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.47, 0.1, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//black

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.3, 0.1, 1.04);
	glScalef(1, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.053, 0.012, 0.012);
	glPushMatrix();
	glTranslatef(-0.3, 0.1, 1.041);
	glScalef(0.8, 0.8, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	//big

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.04);
	glScalef(2, 2, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.095, 0.095, 0.095);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.041);
	glScalef(1.7, 1.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.53, 0.12, 0.12);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.042);
	glScalef(1.4, 1.4, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.7, 0.25, 1.043);
	glScalef(1.1, 1.1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//line

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.32, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.28, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.45, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.95, 0.95, 0.95);
	glPushMatrix();
	glTranslatef(-0.49, 0.25, 1.04);
	glScalef(0.03, 5, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

}
void mtop()
{
	glColor3f(0.34, 0.25, 0.13);
	glPushMatrix();
	glTranslatef(0.0, 0.49, 1.9);
	glScalef(3, 0.3, 5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9985, 0.9985, 0.9985);
	glPushMatrix();
	glTranslatef(0.0, 0.488, 1.9);
	glScalef(2.7, 0.3, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.34, 0.25, 0.13);
	glPushMatrix();
	glTranslatef(0.35, 0.49, 1.9);
	glScalef(3, 0.3, 5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9985, 0.9985, 0.9985);
	glPushMatrix();
	glTranslatef(0.35, 0.488, 1.9);
	glScalef(2.7, 0.3, 4.5);
	glutSolidCube(0.1);
	glPopMatrix();
}
void mid()
{
	//cyan
	
	glColor3f(0.5, 0.8, 0.85);
	//glColor3f(0.44, 0.65, 0.62);
	glBegin(GL_POLYGON);
	glVertex3f(0.985, 0.5, 1);
	glVertex3f(0.985, 0.5, 2.6);
	glVertex3f(0.985, 0.0, 2.6);
	glVertex3f(0.985, 0.0, 1);
	glEnd();


	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(1, 0.0, 1);
	glVertex3f(1, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, 1);
	glVertex3f(1, 0.5, 1);
	glVertex3f(1, 0.5, 3);
	glVertex3f(-1, 0.5, 3);
	glEnd();

	//white wall

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(1, 0.5, 1.01);
	glVertex3f(1, 0.27, 1.01);
	glVertex3f(-1, 0.27, 1.01);
	glVertex3f(-1, 0.5, 1.01);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 0.0, 1.01);
	glVertex3f(0.2, 0.27, 1.01);
	glVertex3f(-1, 0.27, 1.01);
	glVertex3f(-1, 0.0, 1.01);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(0.4, 0.0, 1.01);
	glVertex3f(0.4, 0.27, 1.01);
	glVertex3f(1, 0.27, 1.01);
	glVertex3f(1, 0.0, 1.01);
	glEnd();

	//black background

	glColor3f(0.09, 0.09, 0.09);
	glBegin(GL_POLYGON);
	glVertex3f(-0.2, 0.0, 1.011);
	glVertex3f(-0.2, 0.5, 1.011);
	glVertex3f(-0.9, 0.5, 1.011);
	glVertex3f(-0.9, 0.0, 1.011);
	glEnd();

	//------entrance--------


	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-0.7, 0.5, 3);
	glEnd();

	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0.0, 3);
	glVertex3f(1, 0.0, 3);
	glVertex3f(1, 0.5, 3);
	glVertex3f(-0.4, 0.5, 3);
	glEnd();

	glColor3f(0.95, 0.95, 0.95);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.3, 3);
	glVertex3f(-0.4, 0.3, 3);
	glVertex3f(-0.4, 0.5, 3);
	glVertex3f(-0.7, 0.5, 3);
	glEnd();

	mtop();
	mtv();
	mdesign();
	msofa();

}
void kbox()
{
	//--front-----
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.7, 0.17, 1.585);
	glScalef(5, 3.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.7, 0.17, 1.585);
	glScalef(5, 3.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.85,0.69, 0.35);
	glPushMatrix();
	glTranslatef(-2.2, 0.11, 1.585);
	glScalef(5, 2.5, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	//oven

	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.07, 1.68);
	glScalef(1.93, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.058, 0.058, 0.058);
	glPushMatrix();
	glTranslatef(-2.2, 0.07, 1.681);
	glScalef(1.92, 0.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.68);
	glScalef(1.93, 1, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.058, 0.058, 0.058);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.681);
	glScalef(1.92, 0.7, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.58, 0.58, 0.58);
	glPushMatrix();
	glTranslatef(-2.2, 0.18, 1.682);
	glScalef(1.5, 0.4, 0.01);
	glutSolidCube(0.1);
	glPopMatrix();
	//----back-----------------

	glColor3f(0.85, 0.81, 0.72);
	glPushMatrix();
	glTranslatef(-2.9, 0.06, 2.25);
	glScalef(2, 2, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.9, 0.166, 2.25);
	glScalef(2, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.88, 0.00, 2.25);
	glScalef(2, 0.1, 10);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.9, 0.06, 2.755);
	glScalef(2, 2.1, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//-----------side

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.8, 0.06, 2.93);
	glScalef(7, 2, 1.6);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-1.4, 0.06, 2.7);
	glScalef(1.6, 2, 6);
	glutSolidCube(0.1);
	glPopMatrix();

	//white
	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.32, 0.07, 2.71);
	glScalef(0.1, 0.8, 5.5);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.485, 0.07, 2.71);
	glScalef(0.1, 0.8, 5.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.9, 0.9, 0.9);
	glPushMatrix();
	glTranslatef(-1.83, 0.07, 2.85);
	glScalef(5.6, 0.8, 0.1);
	glutSolidCube(0.1);
	glPopMatrix();

	//black

	glColor3f(0.05, 0.05, 0.05);
	glPushMatrix();
	glTranslatef(-1.8, 0.165, 2.93);
	glScalef(7, 0.1, 1.75);
	glutSolidCube(0.1);
	glPopMatrix();
	
	glColor3f(0.05, 0.05, 0.05);
	glPushMatrix();
	glTranslatef(-1.4, 0.165, 2.7);
	glScalef(1.75, 0.1, 6);
	glutSolidCube(0.1);
	glPopMatrix();



   //------design---------

	//wardrobe lines
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-1.59, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-1.8, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.6, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.8, 0.17, 1.672);
	glScalef(0.01, 3.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	//black lines
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.1, 0.11, 1.672);
	glScalef(0.01, 2.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-2.3, 0.11, 1.672);
	glScalef(0.01, 2.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	//handel

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.36, 0.21, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.0, 0.21, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.85, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.535, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.65, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.55, 0.3, 1.671);
	glScalef(0.5, 0.15, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-1.63, 0.19, 1.671);
	glScalef(0.15, 0.5, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();


	//black wall design
	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-3.0, 0.44, 2.25);
	glScalef(0.1, 1.2, 15);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.22, 0.22, 0.22);
	glPushMatrix();
	glTranslatef(-3.0, 0.2, 2.88);
	glScalef(0.1, 4, 2.5);
	glutSolidCube(0.1);
	glPopMatrix();

	//----white tabel boxes

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.79, 0.08, 2.25);
	glScalef(0.05, 0.05, 10);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.5);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.25);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.1);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.1, 0.1, 0.1);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 1.95);
	glScalef(0.05, 2.1, 0.05);
	glutSolidCube(0.1);
	glPopMatrix();
	//handel

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.45);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.45);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.55);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.55);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.05);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.05);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 2.15);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 2.15);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.13, 1.9);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	glColor3f(0.56, 0.56, 0.52);
	glPushMatrix();
	glTranslatef(-2.8, 0.06, 1.9);
	glScalef(0.05, 0.15, 0.55);
	glutSolidCube(0.1);
	glPopMatrix();

	/*glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-2.8, 0.4, 2.0);
	glScalef(0.2, 1.4, 2);
	glutSolidCube(0.1);
	glPopMatrix();*/
}
void kchair()
{
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();

	glColor3f(0.58, 0.56, 0.56);
	glPushMatrix();
	glTranslatef(-1.8, 0.13, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.01, 0.005, 0.125, 100, 100);
	glPopMatrix();


	glColor3f(0.09, 0.09, 0.09);
	glPushMatrix();
	glTranslatef(-1.8, 0.01, 2.63);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.04, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.15, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.05, 0.05, 0.02, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.15, 2.63);
	glScalef(1, 0.15, 1);
	glutSolidSphere(0.05, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.69, 0.35);
	glPushMatrix();
	glTranslatef(-1.8, 0.13, 2.63);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, 0.01, 0.009, 0.035, 100, 100);
	glPopMatrix();
}

void kitchen()
{
	//glColor3f(0.85, 0.8, 0.85);
	glColor3f(0.68, 0.54, 0.32);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-3, 0.0, 3);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-1, 0.0, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-1, 0.0, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-3, 0.5, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 3);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-3, 0.5, 3);
	glEnd();


	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-3, 0.5, 3);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1.5);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-3, 0.5, 3);
	glVertex3f(-3, 0.0, 3);
	glEnd();

	//---entrance

	glColor3f(0.75, 0.80, 0.46);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-1, 0.5, 1.85);
	glVertex3f(-1, 0.0, 1.85);
	glEnd();

	glColor3f(0.75, 0.80, 0.46);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.35, 1.5);
	glVertex3f(-1, 0.5, 1.5);
	glVertex3f(-1, 0.5, 3);
	glVertex3f(-1, 0.35, 3);
	glEnd();

	//design

	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.14, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.275, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();


	glColor3f(0.95, 0.98, 0.985);
	glPushMatrix();
	glTranslatef(-0.99, 0.4, 1.66);
	glScalef(0.1, 1, 1.5);
	glutSolidCube(0.1);
	glPopMatrix();

	kbox();

	glPushMatrix();
	kchair();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.2, 0.0, 0.0);
	kchair();
	glPopMatrix();
}
void swimming()
{
	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.5, 1);
	glVertex3f(-3, 0.5, 1.5);
	glVertex3f(-3, 0.0, 1.5);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.5, 1);
	glVertex3f(-3, 0.5, -0.5);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

	glColor3f(0.5, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, -0.5);
	glVertex3f(-1, 0.5, -0.5);
	glVertex3f(-3, 0.5, -0.5);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

	glColor3f(0.85, 0.8, 0.85);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, -0.5);
	glVertex3f(-1, 0.0, 1);
	glVertex3f(-3, 0.0, 1);
	glVertex3f(-3, 0.0, -0.5);
	glEnd();

}
void maindoor()
{
	//door
	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-0.7, 0.3, 3);
	glVertex3f(-0.55-xx, 0.3, 3+zz);
	glVertex3f(-0.55-xx, 0.0, 3+zz);
	glVertex3f(-0.7, 0.0, 3);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0.3, 3);
	glVertex3f(-0.55+xx, 0.3, 3+zz);
	glVertex3f(-0.55+xx, 0.0, 3+zz);
	glVertex3f(-0.4, 0.0, 3);
	glEnd();

	//border

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.401, 0.3, 3.01);
	glVertex3f(-0.38, 0.3, 3.01);
	glVertex3f(-0.38, 0.0, 3.01);
	glVertex3f(-0.401, 0.0, 3.01);
	glEnd();

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.699, 0.3, 3.01);
	glVertex3f(-0.72, 0.3, 3.01);
	glVertex3f(-0.72, 0.0, 3.01);
	glVertex3f(-0.699, 0.0, 3.01);
	glEnd();

	glColor3f(0.23, 0.20, 0.23);
	glBegin(GL_POLYGON);
	glVertex3f(-0.38, 0.299, 3.01);
	glVertex3f(-0.72, 0.299, 3.01);
	glVertex3f(-0.72, 0.32, 3.01);
	glVertex3f(-0.38, 0.32, 3.01);
	glEnd();

	if (xx1)
	{


		//door design

		glColor3f(0.35, 0.34, 0.35);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65  , 0.2, 3.01 );
		glVertex3f(-0.6 , 0.2, 3.01 );
		glVertex3f(-0.6 , 0.1, 3.01);
		glVertex3f(-0.65  , 0.1, 3.01 );
		glEnd();

		glColor3f(0.35, 0.34, 0.35);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.2, 3.01);
		glVertex3f(-0.5, 0.2, 3.01);
		glVertex3f(-0.5, 0.1, 3.01);
		glVertex3f(-0.45, 0.1, 3.01);
		glEnd();


		//line

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.099, 3.01);
		glVertex3f(-0.55, 0.099, 3.01);
		glVertex3f(-0.55, 0.1, 3.01);
		glVertex3f(-0.45, 0.1, 3.01);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.45, 0.3, 3.02);
		glVertex3f(-0.449, 0.3, 3.02);
		glVertex3f(-0.449, 0.05, 3.02);
		glVertex3f(-0.45, 0.05, 3.02);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65, 0.2, 3.02);
		glVertex3f(-0.55, 0.2, 3.02);
		glVertex3f(-0.55, 0.201, 3.02);
		glVertex3f(-0.65, 0.201, 3.02);
		glEnd();

		glColor3f(0.9095, 0.9095, 0.9095);
		glBegin(GL_POLYGON);
		glVertex3f(-0.65, 0.0, 3.02);
		glVertex3f(-0.651, 0.0, 3.02);
		glVertex3f(-0.651, 0.25, 3.02);
		glVertex3f(-0.65, 0.25, 3.02);
		glEnd();


	}

}
void outercover()
{

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-1, 0.0, 3);
	glVertex3f(-1 , 0.5, 3 );
	glVertex3f(-1 , 0.5, 4);
	glVertex3f(-1, 0.0, 4);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-3, 0.52, 3);
	glVertex3f(-3, 0.52, -1);
	glVertex3f(3, 0.52, -1);
	glVertex3f(3, 0.52, 3);
	glEnd();

	glColor3f(0.095, 0.095, 0.095);
	glBegin(GL_POLYGON);
	glVertex3f(-3, -0.02, 2.5);
	glVertex3f(-3, -0.02, -1);
	glVertex3f(3, -0.02, -1);
	glVertex3f(3, -0.02, 2.5);
	glEnd();


}
void house()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//gluLookAt(viewer[0], viewer[1], viewer[2], lat[0], lat[1], lat[2], 0.0, 1.0, 0.0);
	gluLookAt(viewer[0], viewer[1], viewer[2], viewer[0] + lx, lat[1], viewer[2]+lz, 0.0, 1.0, 0.0);
	//gluLookAt(0, 1, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f);

	glPushMatrix();
	glTranslatef(0.0, 0.2, 3.2);
	glScalef(0.5, 0.5, 0.0);
	text();
	glPopMatrix();

	outercover();
	maindoor();
	room1();
	room2();
	kitchen();
	swimming();
	mid();
	glutSwapBuffers();
}
void keys(unsigned char key, int x, int y)
{
	if (key == 'x')viewer[0] -= 0.1;
	if (key == 'X')viewer[0] += 0.1;
	if (key == 'y')viewer[1] -= 0.1;
	if (key == 'Y')viewer[1] += 0.1;
	if (key == 'z')viewer[2] -= 0.1;
	if (key == 'Z')viewer[2] += 0.1;
	if (key == 'o') doort(0);
/*	if (key == 'p')
	{
		tf(0);
	}*/
	glutPostRedisplay();
}

void specialKey(int key, int x, int y) {

	int q = viewer[0];
	int w = viewer[1];
	int e = viewer[2];
	float fraction = 0.1f;

	switch (key) {
	case GLUT_KEY_LEFT:
		angle -= 0.02f;
		lx = sin(angle);
		lz = -cos(angle);
		break;
	case GLUT_KEY_RIGHT:
		angle += 0.02f;
		lx = sin(angle);
		lz = -cos(angle);
		break;
	case GLUT_KEY_UP:
	/*	if ((q<1 && q>-1))
		{
		//if(w<0.5 && w >0.0)
		{
			if (e<=1 && e>-1)
			
		{*/
			viewer[0] += lx * fraction;
			viewer[2] += lz * fraction;
	/*	}
		}
		}
		else
		{
			viewer[0] = 0.0;
			viewer[1] = 0.3;
			viewer[2] = 1.0;

			lat[0] = 0.0 ;
			lat[1] = 0.0;
			lat[2] = 0.0;
		}*/
		break;
	case GLUT_KEY_DOWN:
		viewer[0] -= lx * fraction;
		viewer[2] -= lz * fraction;
		break;
		
	case GLUT_KEY_PAGE_UP:
		viewer[1] += 0.1;
		lat[1] += 0.1;
		break;
	case GLUT_KEY_PAGE_DOWN:
		viewer[1] -= 0.1;
		lat[1] -= 0.1;
		break;
	}
	glutPostRedisplay();
}
void changeSize(int w, int h)
{


	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;


	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);


	glLoadIdentity();


	gluPerspective(40.0f, ratio, 0.1f, 10.0f);

	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH|GLUT_ALPHA);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("3D house architecture");

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutDisplayFunc(house);
	glutReshapeFunc(changeSize);
	glDepthFunc(GL_LEQUAL);
	glutSpecialFunc(specialKey);
	glutKeyboardFunc(keys);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	tfs(0);
	glAlphaFunc(GL_GREATER, 0.1);
		glEnable(GL_ALPHA_TEST);
		
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;
}