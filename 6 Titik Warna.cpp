#include <gl/glut.h>


void Draw() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);
                                    // awal kode untuk menggambar
glVertex3f(0.2, 0.2, 0.0);       // posisi titik yang akan digambar

glEnd();

glColor3f(1.0,0.0,0.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);         // awal kode untuk menggambar

glVertex3f(0.8, 0.2, 0.0);

glEnd();

glColor3f(0.0,1.0,0.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);         // awal kode untuk menggambar

glVertex3f(0.2, 0.5, 0.0);

glEnd();

glColor3f(0.0,0.0,1.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);         // awal kode untuk menggambar

glVertex3f(0.8, 0.5, 0.0);

glEnd();

glColor3f(1.0,0.0,1.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);         // awal kode untuk menggambar

glVertex3f(0.2, 0.8, 0.0);

glEnd();

glColor3f(0.0,1.0,1.0);        // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);         // awal kode untuk menggambar

glVertex3f(0.8, 0.8, 0.0);

glEnd();
                             // akhir kode untuk menggambar
glFlush();                             // memastikan bahwa kode dieksekusi
}



void Initialize() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}



int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(250, 250);
glutInitWindowPosition(200, 200);
glutCreateWindow("6 Titik Warna");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
