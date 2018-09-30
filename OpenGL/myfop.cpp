#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>

void renderscene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
		glVertex3f(-1,-1,0.0);
		glVertex3f(1,1,0.0);
		glVertex3f(0.0,0.5,0.0);
	glEnd();

	glutSwapBuffers();



}
int main (int argc , char **argv ) {

	glutInit( &argc ,  argv);
	glutInitDisplayMode( GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH );
	glutInitWindowPosition(-1,-1);
        glutInitWindowSize(1024,768);
	glutCreateWindow("MYFOP");
 
	glutDisplayFunc(renderscene);

	glutMainLoop();

return -1;



}
