#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>

int windowWidth=600, windowHeight=600;

void triangle()
{
    glBegin(GL_TRIANGLES);
		
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(0.0,3.0);
		
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(-2.0,7.0);
		
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(-3.0,4.0);
		
		
	glEnd();

}

void quads1()
{
    glBegin(GL_QUADS);
		glColor3f(1.0, 10.0, 1.0);
		glVertex2f(0.0, 3.0);
		
		glColor3f(1.0, 10.0, 1.0);
		glVertex2f(-3.0, 4.0);
		
		glColor3f(1.0, 10.0, 1.0);
		glVertex2f(-3.0, 1.0);
		
		glColor3f(0.0, 10.0, 1.0);
		glVertex2f(0.0, 0.0);
	glEnd();
}

void quads2()
{
    glBegin(GL_QUADS);
		glColor3f(1.0, 0.0, 1.0);
		glVertex2f(0.0, 3.0);
		
		glColor3f(1.0, 0.0, 1.0);
		glVertex2f(4.0, 3.0);
		
		glColor3f(1.0, 0.0, 1.0);
		glVertex2f(4.0, 0.0);
		
        glColor3f(1.0, 0.0, 1.0);
		glVertex2f(0.0, 0.0);
	glEnd();
}

void quads3()
{
    glBegin(GL_QUADS);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(-2.0, 7.0);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(3.0, 7.0);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(4.0, 3.0);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0.0, 3.0);
	glEnd();
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

    triangle();
    quads1();
    quads2();
    quads3();

    glFlush();
    glutSwapBuffers();
}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Triangle-Demo");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}


/**

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
*/
