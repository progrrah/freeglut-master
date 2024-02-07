#include <GL/glut.h> /* glut graphics library */

// #include <iostream>

void myDisp() { glutSwapBuffers(); }

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutCreateWindow("Hello world!");

    glutDisplayFunc(myDisp);

    glutMainLoop();

    // std::cout << "Hello world!" << std::endl;
    return 0;
}