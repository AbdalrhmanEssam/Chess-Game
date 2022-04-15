#include <GL/freeglut.h>
#include <iostream>
void init(void) {
    glClearColor(0.9, 0.7, 0.3, 0.0); //set display-window color to white
    glMatrixMode(GL_PROJECTION); // set projection parameters
    gluOrtho2D(0.0, 950.0, 0.0, 950.0);
    glMatrixMode(GL_MODELVIEW);// Select The Modelview Matrix for Geometric transformations
        glLoadIdentity();
}
void Squares(void) {
    float i = 0, j = 0, x = 0, y = 0, a = 952 / 8, b = 0.25;
    for (i = 0; i <= 6; i = i + 2) {
        for (j = 0; j <= 6; j = j + 2) {
            glClear(GL_COLOR_BUFFER_BIT);
            glColor3f(0.2, 0.0, 0.0);
            glBegin(GL_QUADS);
            glVertex2f(a * j, a * i);
            glVertex2f(a * (j + 1), a * i);
            glVertex2f(a * (j + 1), a * (i + 1));
            glVertex2f(a * j, a * (i + 1));
        }
    }
    for (i = 1; i <= 7; i = i + 2) {
        for (j = 1; j <= 7; j = j + 2) {
            glClear(GL_COLOR_BUFFER_BIT);
            glColor3f(0.2, 0.0, 0.0);
            glBegin(GL_QUADS);
            glVertex2f(a * j, a * i);
            glVertex2f(a * (j + 1), a * i);
            glVertex2f(a * (j + 1), a * (i + 1));
            glVertex2f(a * j, a * (i + 1));
        }
    }
}
void Pawn(void) {
    int i;
    for (i = 0; i < 8; i++) {
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_QUADS);
        glVertex2f((33.6 + (952 / 8 * i)), (125));
        glVertex2f((89.4 + (952 / 8 * i)), (125));
        glVertex2f((89.4 + (952 / 8 * i)), (138.8));
        glVertex2f((33.6 + (952 / 8 * i)), (138.8));
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_QUADS);
        glVertex2f((53.6 + (952 / 8 * i)), (138.8));
        glVertex2f((69.4 + (952 / 8 * i)), (138.8));
        glVertex2f((69.4 + (952 / 8 * i)), (218.8));
        glVertex2f(53.6 + (952 / 8 * i), (218.8));
    }
}
void Rock(void) {
    int x, y;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6), (125 - 119));
    glVertex2f((89.4), (125 - 119));
    glVertex2f((89.4), (148.8 - 119));
    glVertex2f((33.6), (148.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6), (133.8 - 119));
    glVertex2f((69.4), (133.8 - 119));
    glVertex2f((69.4), (203.8 - 119));
    glVertex2f(53.6, (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6), (203.8 - 119));
    glVertex2f((89.4), (203.8 - 119));
    glVertex2f((89.4), (213.8 - 119));
    glVertex2f((33.6), (213.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((86.4), (213.8 - 119));
    glVertex2f((89.4), (213.8 - 119));
    glVertex2f((89.4), (223.8 - 119));
    glVertex2f((86.4), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6), (213.8 - 119));
    glVertex2f((36.6), (213.8 - 119));
    glVertex2f((36.6), (223.8 - 119));
    glVertex2f((33.6), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 14), (213.8 - 119));
    glVertex2f((36.6 + 14), (213.8 - 119));
    glVertex2f((36.6 + 14), (223.8 - 119));
    glVertex2f((33.6 + 14), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 33), (213.8 - 119));
    glVertex2f((36.6 + 33), (213.8 - 119));
    glVertex2f((36.6 + 33), (223.8 - 119));
    glVertex2f((33.6 + 33), (223.8 - 119));
    x = 830;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + x), (125 - 119));
    glVertex2f((89.4 + x), (125 - 119));
    glVertex2f((89.4 + x), (148.8 - 119));
    glVertex2f((33.6 + x), (148.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6 + x), (133.8 - 119));
    glVertex2f((69.4 + x), (133.8 - 119));
    glVertex2f((69.4) + x, (203.8 - 119));
    glVertex2f(53.6 + x, (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + x), (203.8 - 119));
    glVertex2f((89.4 + x), (203.8 - 119));
    glVertex2f((89.4 + x), (213.8 - 119));
    glVertex2f((33.6 + x), (213.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((86.4 + x), (213.8 - 119));
    glVertex2f((89.4 + x), (213.8 - 119));
    glVertex2f((89.4 + x), (223.8 - 119));
    glVertex2f((86.4 + x), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + x), (213.8 - 119));
    glVertex2f((36.6 + x), (213.8 - 119));
    glVertex2f((36.6 + x), (223.8 - 119));
    glVertex2f((33.6 + x), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 14 + x), (213.8 - 119));
    glVertex2f((36.6 + 14 + x), (213.8 - 119));
    glVertex2f((36.6 + 14 + x), (223.8 - 119));
    glVertex2f((33.6 + 14 + x), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 33 + x), (213.8 - 119));
    glVertex2f((36.6 + 33 + x), (213.8 - 119));
    glVertex2f((36.6 + 33 + x), (223.8 - 119));
    glVertex2f((33.6 + 33 + x), (223.8 - 119));
}
void Knight(void) {
    int x, y;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 119), (125 - 119));
    glVertex2f((89.4 + 119), (125 - 119));
    glVertex2f((89.4 + 119), (148.8 - 119));
    glVertex2f((33.6 + 119), (148.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((89.4 + 119), (149.8 - 119));
    glVertex2f((33.6 + 119), (149.8 - 119));
    glVertex2f((89.4 + 119), (193.8 - 119));
    glVertex2f((89.4 + 119), (193.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((89.4 + 119), (193.8 - 119));
    glVertex2f((89.4 + 119), (208.8 - 119));
    glVertex2f((33.6 + 119), (201 - 119));
    glVertex2f((33.6 + 119), (201 - 119));
    y = 595;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + 119 + y), (125 - 119));
    glVertex2f((89.4 + 119 + y), (125 - 119));
    glVertex2f((89.4 + 119 + y), (148.8 - 119));
    glVertex2f((33.6 + 119 + y), (148.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((89.4 + 119 + y), (149.8 - 119));
    glVertex2f((33.6 + 119 + y), (149.8 - 119));
    glVertex2f((89.4 + 119 + y), (193.8 - 119));
    glVertex2f((89.4 + 119 + y), (193.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((89.4 + 119 + y), (193.8 - 119));
    glVertex2f((89.4 + 119 + y), (208.8 - 119));
    glVertex2f((33.6 + 119 + y), (201 - 119));
    glVertex2f((33.6 + 119 + y), (201 - 119));
}
void Bishop(void) {
    int i;
    i = 2;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((33.6 + (952 / 8 * i)), (138.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f(53.6 + (952 / 8 * i), (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(43.6 + (952 / 8 * i), (203.8 - 119));
    glVertex2f((79.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f((61.4 + (952 / 8 * i)), (223.8 - 119));
    glVertex2f(61.6 + (952 / 8 * i), (223.8 - 119));
    i = 5;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((33.6 + (952 / 8 * i)), (138.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f(53.6 + (952 / 8 * i), (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(43.6 + (952 / 8 * i), (203.8 - 119));
    glVertex2f((79.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f((61.4 + (952 / 8 * i)), (223.8 - 119));
    glVertex2f(61.6 + (952 / 8 * i), (223.8 - 119));
}
void QK(void) {
    int i;
    i = 4;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((33.6 + (952 / 8 * i)), (138.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (183.8 - 119));
    glVertex2f(53.6 + (952 / 8 * i), (183.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(43.6 + (952 / 8 * i), (183.8 - 119));
    glVertex2f((79.4 + (952 / 8 * i)), (183.8 - 119));
    glVertex2f((79.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f(43.6 + (952 / 8 * i), (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f((79.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f(43.6 + (952 / 8 * i), (203.8 - 119));
    glVertex2f((61.4 + (952 / 8 * i)), (213.8 - 119));
    glVertex2f((79.4 + (952 / 8 * i)), (203.8 - 119));
    i = 3;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((33.6 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (125 - 119));
    glVertex2f((89.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((33.6 + (952 / 8 * i)), (138.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f((53.6 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (138.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f(53.6 + (952 / 8 * i), (203.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(59.6 + (952 / 8 * i), (203.8 - 119));
    glVertex2f((63.4 + (952 / 8 * i)), (203.8 - 119));
    glVertex2f((63.4 + (952 / 8 * i)), (223.8 - 119));
    glVertex2f(59.6 + (952 / 8 * i), (223.8 - 119));
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(53.6 + (952 / 8 * i), (213.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (213.8 - 119));
    glVertex2f((69.4 + (952 / 8 * i)), (212.8 - 119));
    glVertex2f(53.6 + (952 / 8 * i), (212.8 - 119));
}
void W() {
    int i;
    for (i = 0; i < 8; i++) {
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        glLoadIdentity(); // Reset The Current Modelview Matrix
        glTranslatef(0.0, 600.0, 0.0);
        glBegin(GL_QUADS);
        glVertex2f((33.6 + (952 / 8 * i)), (125));
        glVertex2f((89.4 + (952 / 8 * i)), (125));
        glVertex2f((89.4 + (952 / 8 * i)), (138.8));
        glVertex2f((33.6 + (952 / 8 * i)), (138.8));
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0, 0.0, 0.0);
        glLoadIdentity(); // Reset The Current Modelview Matrix
        glTranslatef(0.0, 600.0, 0.0);
        glBegin(GL_QUADS);
        glVertex2f((53.6 + (952 / 8 * i)), (138.8));
        glVertex2f((69.4 + (952 / 8 * i)), (138.8));
        glVertex2f((69.4 + (952 / 8 * i)), (218.8));
        glVertex2f(53.6 + (952 / 8 * i), (218.8));
        glEnd();
        glFlush();
    }

}
void shapes(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 950.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(950.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(950.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(950.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 0.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(0.0, 850.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);
    glVertex2f(950.0, 0.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(0.0, 850.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.0, 0.0);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(0.0, 0.0);
    glVertex2f(550.0, 0.0);
    glVertex2f(550.0, 550.0);
    glVertex2f(0.0, 850.0);
    glVertex2f(950.0, 950.0);
    glVertex2f(0.0, 850.0);
}
void Display(void) {
    Squares();
    Pawn();
    Rock();
    Knight();
    Bishop();
    QK();
    glEnd();
    glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
    if (key == 'w')
    {
        glTranslatef(0.0, 50.0, 0.0);
        Display();
    }
    else if (key == 's')
    {
        glTranslatef(0.0, -50.0, 0.0);
        Display();
    }
    else if (key == 'd')
    {
        glTranslatef(50.0, 0.0, 0.0);
        Display();
    }
    else if (key == 'a')
    {
        glTranslatef(-50.0, 0.0, 0.0);
        Display();
    }
    else if (key == 'H')
    {
        Display();
        glutHideWindow();
    }
    else if (key == 'F')
    {
        Display();
        glutFullScreen();
    }
}
int main(int argc, char** argv) {
    glutInit(&argc, argv); //initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //set display mode
    glutInitWindowPosition(110, 0); //Set top left display-window position
    glutInitWindowSize(950, 950); // set display-window width and height
    glutCreateWindow("Chess"); // create display window
    int winID = glutCreateWindow("Chess");
    glutCreateSubWindow(winID, 0.0, 850.0, 100.0, 100.0);
    glutSetWindow(winID); // specify sub window
    glutShowWindow(); // show subwindow
    init();// execute initialization procedure
//glutSetCursor( GLUT_CURSOR_UP_DOWN || GLUT_CURSOR_CYCLE || GLUT_CURSOR_WAIT || GLUT_CURSOR_DESTROY);
    glViewport(0, 0, 100, 250);
    glutShowWindow();
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(Display); //send graphics to display window
    glutMainLoop(); //display everything and wait
    glutDestroyWindow(winID);
    return 0;
}