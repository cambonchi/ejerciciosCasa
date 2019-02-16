//Semestre 2017 - 2
//*******************************************************************//
//*******************************************************************//
//*************  Alumno (s): Cambonchi Hernandez Felix Ricardo ******//
//*************  Grupo:2 									   ******//
//*************	 Version de visual: 2017					   ******//
//*******************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar

	//*******************************************************************************************
	//Mario bros pixel

	// Cara 
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f(-3.0f, 7.0f, 1.0f);
	glVertex3f(3.0f,  7.0f, 1.0f);
	glVertex3f(3.0f,  2.0f, 1.0f);
	glVertex3f(-3.0f, 2.0f, 1.0f);
	glEnd();
	//oreja
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f(-4.0f, 7.0f, 1.0f);
	glVertex3f(-2.0f, 7.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glEnd();
	//nariz
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f( 3.0f, 6.0f, 1.0f);
	glVertex3f( 5.0f, 6.0f, 1.0f);
	glVertex3f( 5.0f, 4.0f, 1.0f);
	glVertex3f( 3.0f, 4.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f(5.0f, 5.0f, 1.0f);
	glVertex3f(6.0f, 5.0f, 1.0f);
	glVertex3f(6.0f, 4.0f, 1.0f);
	glVertex3f(5.0f, 4.0f, 1.0f);
	glEnd();

	// manos
	glBegin(GL_POLYGON);
	glVertex3f(-6.0f, -1.0f, 1.0f);
	glVertex3f( 6.0f, -1.0f, 1.0f);
	glVertex3f( 6.0f, -4.0f, 1.0f);
	glVertex3f(-6.0f, -4.0f, 1.0f);
	glEnd();
	

	//Gorra Mario pixel
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(-3.0f, 9.0f, 1.0f);
	glVertex3f(2.0f, 9.0f, 1.0f);
	glVertex3f(2.0f, 7.0f, 1.0f);
	glVertex3f(-3.0f, 7.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 8.0f, 1.0f);
	glVertex3f(5.0f, 8.0f, 1.0f);
	glVertex3f(5.0f, 7.0f, 1.0f);
	glVertex3f(-4.0f, 7.0f, 1.0f);
	glEnd();
	// cuerpo rojo
	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 2.0f, 1.0f);
	glVertex3f(4.0f, 2.0f, 1.0f);
	glVertex3f(4.0f, -2.0f, 1.0f);
	glVertex3f(-4.0f, -2.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, 1.0f, 1.0f);
	glVertex3f(5.0f, 1.0f, 1.0f);
	glVertex3f(5.0f, 0.0f, 1.0f);
	glVertex3f(-5.0f, 0.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-6.0f, 0.0f, 1.0f);
	glVertex3f(6.0f, 0.0f, 1.0f);
	glVertex3f(6.0f, -1.0f, 1.0f);
	glVertex3f(-6.0f, -1.0f, 1.0f);
	glEnd();
	//cuerpo azul 
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3.0f, -1.0f, 1.0f);
	glVertex3f(3.0f, -1.0f, 1.0f);
	glVertex3f(3.0f, -4.0f, 1.0f);
	glVertex3f(-3.0f, -4.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, -3.0f, 1.0f);
	glVertex3f(-2.0f, -3.0f, 1.0f);
	glVertex3f(-2.0f, -5.0f, 1.0f);
	glVertex3f(-4.0f, -5.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1.0f, -3.0f, 1.0f);
	glVertex3f(4.0f, -3.0f, 1.0f);
	glVertex3f(4.0f, -5.0f, 1.0f);
	glVertex3f(1.0f, -5.0f, 1.0f);
	glEnd();
	//tirantes
	glBegin(GL_POLYGON);
	glVertex3f(-2.0f, 2.0f, 1.0f);
	glVertex3f(-1.0f, 2.0f, 1.0f);
	glVertex3f(-1.0f, -5.0f, 1.0f);
	glVertex3f(-2.0f, -5.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1.0f, 2.0f, 1.0f);
	glVertex3f(2.0f, 2.0f, 1.0f);
	glVertex3f(2.0f, -5.0f, 1.0f);
	glVertex3f(1.0f, -5.0f, 1.0f);
	glEnd();

	//Detalle tirante
	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f(-2.0f, -1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(-1.0f, -2.0f, 1.0f);
	glVertex3f(-2.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0.9, 0.3);
	glVertex3f( 1.0f, -1.0f, 1.0f);
	glVertex3f( 2.0f, -1.0f, 1.0f);
	glVertex3f( 2.0f, -2.0f, 1.0f);
	glVertex3f( 1.0f, -2.0f, 1.0f);
	glEnd();



	//cabello
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.1, 0);
	glVertex3f(-4.0f, 7.0f, 1.0f);
	glVertex3f(-1.0f, 7.0f, 1.0f);
	glVertex3f(-1.0f, 6.0f, 1.0f);
	glVertex3f(-4.0f, 6.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-3.0f, 7.0f, 1.0f);
	glVertex3f(-2.0f, 7.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-2.0f, 5.0f, 1.0f);
	glVertex3f(-1.0f, 5.0f, 1.0f);
	glVertex3f(-1.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, 6.0f, 1.0f);
	glVertex3f(-4.0f, 6.0f, 1.0f);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glVertex3f(-5.0f, 4.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 3.0f, 1.0f);
	glVertex3f(-4.0f, 3.0f, 1.0f);
	glEnd();

	//Zapatos
	glBegin(GL_POLYGON);
	glVertex3f(2.0f, -5.0f, 1.0f);
	glVertex3f(5.0f, -5.0f, 1.0f);
	glVertex3f(5.0f, -7.0f, 1.0f);
	glVertex3f(2.0f, -7.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(5.0f, -6.0f, 1.0f);
	glVertex3f(6.0f, -6.0f, 1.0f);
	glVertex3f(6.0f, -7.0f, 1.0f);
	glVertex3f(5.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, -5.0f, 1.0f);
	glVertex3f(-2.0f, -5.0f, 1.0f);
	glVertex3f(-2.0f, -7.0f, 1.0f);
	glVertex3f(-5.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, -6.0f, 1.0f);
	glVertex3f(-6.0f, -6.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-5.0f, -7.0f, 1.0f);
	glEnd();

	// ojosY bigote

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f( 1.0f, 7.0f, 1.0f);
	glVertex3f( 2.0f, 7.0f, 1.0f);
	glVertex3f( 2.0f, 5.0f, 1.0f);
	glVertex3f( 1.0f, 5.0f, 1.0f);
	glEnd();
	//Bigote
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glVertex3f(3.0f, 5.0f, 1.0f);
	glVertex3f(3.0f, 4.0f, 1.0f);
	glVertex3f(2.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(1.0f, 4.0f, 1.0f);
	glVertex3f(5.0f, 4.0f, 1.0f);
	glVertex3f(5.0f, 3.0f, 1.0f);
	glVertex3f(1.0f, 3.0f, 1.0f);
	glEnd();

	//*******************************************************************************************

	//*******************************************************************************************
    // Fantasma pixel 
	//  Contorno
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-10.0f, 7.0f, 1.0f);
	glVertex3f(-9.8f, 7.0f, 1.0f);
	glVertex3f(-9.8f, 5.8f, 1.0f);
	glVertex3f(-10.0f, 5.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.8f, 7.4f, 1.0f);
	glVertex3f(-9.6f, 7.4f, 1.0f);
	glVertex3f(-9.6f, 7.0f, 1.0f);
	glVertex3f(-9.8f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.6f, 7.6f, 1.0f);
	glVertex3f(-9.4f, 7.6f, 1.0f);
	glVertex3f(-9.4f, 7.4f, 1.0f);
	glVertex3f(-9.6f, 7.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.4f, 7.8f, 1.0f);
	glVertex3f(-9.0f, 7.8f, 1.0f);
	glVertex3f(-9.0f, 7.6f, 1.0f);
	glVertex3f(-9.4f, 7.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.0f, 8.0f, 1.0f);
	glVertex3f(-8.0f, 8.0f, 1.0f);
	glVertex3f(-8.0f, 7.8f, 1.0f);
	glVertex3f(-9.0f, 7.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8.0f, 7.8f, 1.0f);
	glVertex3f(-7.6f, 7.8f, 1.0f);
	glVertex3f(-7.6f, 7.6f, 1.0f);
	glVertex3f(-8.0f, 7.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.6f, 7.6f, 1.0f);
	glVertex3f(-7.4f, 7.6f, 1.0f);
	glVertex3f(-7.4f, 7.4f, 1.0f);
	glVertex3f(-7.6f, 7.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.4f, 7.4f, 1.0f);
	glVertex3f(-7.2f, 7.4f, 1.0f);
	glVertex3f(-7.2f, 7.2f, 1.0f);
	glVertex3f(-7.4f, 7.2f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.2f, 7.2f, 1.0f);
	glVertex3f(-7.0f, 7.2f, 1.0f);
	glVertex3f(-7.0f, 7.0f, 1.0f);
	glVertex3f(-7.2f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.0f, 7.0f, 1.0f);
	glVertex3f(-6.8f, 7.0f, 1.0f);
	glVertex3f(-6.8f, 6.6f, 1.0f);
	glVertex3f(-7.0f, 6.6f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.2f, 6.6f, 1.0f);
	glVertex3f(-7.0f, 6.6f, 1.0f);
	glVertex3f(-7.0f, 6.4f, 1.0f);
	glVertex3f(-7.2f, 6.4f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.0f, 6.4f, 1.0f);
	glVertex3f(-6.8f, 6.4f, 1.0f);
	glVertex3f(-6.8f, 5.6f, 1.0f);
	glVertex3f(-7.0f, 5.6f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.2f, 5.6f, 1.0f);
	glVertex3f(-7.0f, 5.6f, 1.0f);
	glVertex3f(-7.0f, 5.4f, 1.0f);
	glVertex3f(-7.2f, 5.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.4f, 5.4f, 1.0f);
	glVertex3f(-7.2f, 5.4f, 1.0f);
	glVertex3f(-7.2f, 5.2f, 1.0f);
	glVertex3f(-7.4f, 5.2f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.8f, 5.2f, 1.0f);
	glVertex3f(-7.2f, 5.2f, 1.0f);
	glVertex3f(-7.2f, 5.0f, 1.0f);
	glVertex3f(-7.8f, 5.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glVertex3f(-7.8f, 5.0f, 1.0f);
	glVertex3f(-7.8f, 4.8f, 1.0f);
	glVertex3f(-9.0f, 4.8f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.4f, 5.2f, 1.0f);
	glVertex3f(-9.0f, 5.2f, 1.0f);
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glVertex3f(-9.4f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.6f, 5.4f, 1.0f);
	glVertex3f(-9.4f, 5.4f, 1.0f);
	glVertex3f(-9.4f, 5.2f, 1.0f);
	glVertex3f(-9.6f, 5.2f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.8f, 5.8f, 1.0f);
	glVertex3f(-9.6f, 5.8f, 1.0f);
	glVertex3f(-9.6f, 5.4f, 1.0f);
	glVertex3f(-9.8f, 5.4f, 1.0f);
	glEnd();

	//ojos
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.4f, 7.2f, 1.0f);
	glVertex3f(-9.2f, 7.2f, 1.0f);
	glVertex3f(-9.2f, 6.6f, 1.0f);
	glVertex3f(-9.4f, 6.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.0f, 7.2f, 1.0f);
	glVertex3f(-8.8f, 7.2f, 1.0f);
	glVertex3f(-8.8f, 6.6f, 1.0f);
	glVertex3f(-9.0f, 6.6f, 1.0f);
	glEnd();
	//mano
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8.0f, 7.0f, 1.0f);
	glVertex3f(-7.4f, 7.0f, 1.0f);
	glVertex3f(-7.4f, 6.8f, 1.0f);
	glVertex3f(-8.0f, 6.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.6f, 7.0f, 1.0f);
	glVertex3f(-7.4f, 7.0f, 1.0f);
	glVertex3f(-7.4f, 6.4f, 1.0f);
	glVertex3f(-7.6f, 6.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.8f, 6.4f, 1.0f);
	glVertex3f(-7.6f, 6.4f, 1.0f);
	glVertex3f(-7.6f, 6.2f, 1.0f);
	glVertex3f(-7.8f, 6.2f, 1.0f);
	glEnd();
	// boca

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(-9.6f, 6.4f, 1.0f);
	glVertex3f(-9.4f, 6.4f, 1.0f);
	glVertex3f(-9.4f, 5.8f, 1.0f);
	glVertex3f(-9.6f, 5.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(-9.4f, 6.2f, 1.0f);
	glVertex3f(-9.2f, 6.2f, 1.0f);
	glVertex3f(-9.2f, 5.4f, 1.0f);
	glVertex3f(-9.4f, 5.4f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(-9.2f, 6.4f, 1.0f);
	glVertex3f(-9.0f, 6.4f, 1.0f);
	glVertex3f(-9.0f, 5.6f, 1.0f);
	glVertex3f(-9.2f, 5.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	
	glVertex3f(-9.0f, 6.2f, 1.0f);
	glVertex3f(-8.8f, 6.2f, 1.0f);
	glVertex3f(-8.8f, 5.4f, 1.0f);
	glVertex3f(-9.0f, 5.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-8.8f, 6.4f, 1.0f);
	glVertex3f(-8.6f, 6.4f, 1.0f);
	glVertex3f(-8.6f, 5.6f, 1.0f);
	glVertex3f(-8.8f, 5.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-8.6f, 5.8f, 1.0f);
	glVertex3f(-8.4f, 5.8f, 1.0f);
	glVertex3f(-8.4f, 5.4f, 1.0f);
	glVertex3f(-8.6f, 5.4f, 1.0f);
	glEnd();
	//*******************************************************************************************
	//*******************************************************************************************
	// goomba 
	//cuerpo
	
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-8.8f, -3.0f, 1.0f);
	glVertex3f(-8.0f, -3.0f, 1.0f);
	glVertex3f(-8.0f, -3.2f, 1.0f);
	glVertex3f(-8.8f, -3.2f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-9.0f, -3.2f, 1.0f);
	glVertex3f(-7.8f, -3.2f, 1.0f);
	glVertex3f(-7.8f, -3.4f, 1.0f);
	glVertex3f(-9.0f, -3.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-9.2f, -3.4f, 1.0f);
	glVertex3f(-7.6f, -3.4f, 1.0f);
	glVertex3f(-7.6f, -3.6f, 1.0f);
	glVertex3f(-9.2f, -3.6f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-9.4f, -3.6f, 1.0f);
	glVertex3f(-7.4f, -3.6f, 1.0f);
	glVertex3f(-7.4f, -3.8f, 1.0f);
	glVertex3f(-9.4f, -3.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-9.6f, -3.8f, 1.0f);
	glVertex3f(-7.2f, -3.8f, 1.0f);
	glVertex3f(-7.2f, -4.0f, 1.0f);
	glVertex3f(-9.6f, -4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-9.8f, -4.0f, 1.0f);
	glVertex3f(-7.0f, -4.0f, 1.0f);
	glVertex3f(-7.0f, -4.4f, 1.0f);
	glVertex3f(-9.8f, -4.4f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0, 0);
	glVertex3f(-10.0f, -5.0f, 1.0f);
	glVertex3f(-6.8f,  -5.0f, 1.0f);
	glVertex3f(-6.8f,  -4.4f, 1.0f);
	glVertex3f(-10.0f, -4.4f, 1.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	
	glVertex3f(-9.8f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -5.2f, 1.0f);
	glVertex3f(-9.8f, -5.2f, 1.0f);
	glEnd();

	// pies
	glBegin(GL_POLYGON);
	glColor3f(0.5 , 1, 0.3);
	glVertex3f(-9.0f, -5.0f, 1.0f);
	glVertex3f(-7.8f, -5.0f, 1.0f);
	glVertex3f(-7.8f, -5.2f, 1.0f);
	glVertex3f(-9.0f, -5.2f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(-9.2f, -5.2f, 1.0f);
	glVertex3f(-7.6f, -5.2f, 1.0f);
	glVertex3f(-7.6f, -6.0f, 1.0f);
	glVertex3f(-9.2f, -6.0f, 1.0f);
	glEnd();

	//ojos
	glBegin(GL_POLYGON);
	
	glVertex3f(-9.2f, -4.0f, 1.0f);
	glVertex3f(-9.0f, -4.0f, 1.0f);
	glVertex3f(-9.0f, -4.2f, 1.0f);
	glVertex3f(-9.2f, -4.2f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	
	glVertex3f(-9.2f, -4.2f, 1.0f);
	glVertex3f(-8.6f, -4.2f, 1.0f);
	glVertex3f(-8.6f, -4.8f, 1.0f);
	glVertex3f(-9.2f, -4.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	
	glVertex3f(-7.8f, -4.0f, 1.0f);
	glVertex3f(-7.6f, -4.0f, 1.0f);
	glVertex3f(-7.6f, -4.2f, 1.0f);
	glVertex3f(-7.8f, -4.2f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	
	glVertex3f(-8.2f, -4.2f, 1.0f);
	glVertex3f(-7.6f, -4.2f, 1.0f);
	glVertex3f(-7.6f, -4.8f, 1.0f);
	glVertex3f(-8.2f, -4.8f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.0f, -4.0f, 1.0f);
	glVertex3f(-8.8f, -4.0f, 1.0f);
	glVertex3f(-8.8f, -4.6f, 1.0f);
	glVertex3f(-9.0f, -4.6f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.0f, -4.2f, 1.0f);
	glVertex3f(-7.8f, -4.2f, 1.0f);
	glVertex3f(-7.8f, -4.4f, 1.0f);
	glVertex3f(-9.0f, -4.4f, 1.0f);
	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8.0f, -4.0f, 1.0f);
	glVertex3f(-7.8f, -4.0f, 1.0f);
	glVertex3f(-7.8f, -4.6f, 1.0f);
	glVertex3f(-8.0f, -4.6f, 1.0f);
	glEnd();




	//zapatos

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.6f, -5.4f, 1.0f);
	glVertex3f(-9.2f, -5.4f, 1.0f);
	glVertex3f(-9.2f, -5.6f, 1.0f);
	glVertex3f(-9.6f, -5.6f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.8f, -5.6f, 1.0f);
	glVertex3f(-8.8f, -5.6f, 1.0f);
	glVertex3f(-8.8f, -6.0f, 1.0f);
	glVertex3f(-9.8f, -6.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9.6f, -5.8f, 1.0f);
	glVertex3f(-8.6f, -5.8f, 1.0f);
	glVertex3f(-8.6f, -6.2f, 1.0f);
	glVertex3f(-9.6f, -6.2f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7.6f, -5.4f, 1.0f);
	glVertex3f(-7.2f, -5.4f, 1.0f);
	glVertex3f(-7.2f, -5.6f, 1.0f);
	glVertex3f(-7.6f, -5.6f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8.0f, -5.6f, 1.0f);
	glVertex3f(-7.0f, -5.6f, 1.0f);
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glVertex3f(-8.0f, -6.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8.2f, -5.8f, 1.0f);
	glVertex3f(-7.2f, -5.8f, 1.0f);
	glVertex3f(-7.2f, -6.2f, 1.0f);
	glVertex3f(-8.2f, -6.2f, 1.0f);
	glEnd();
	

	//*******************************************************************************************






	
											
	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,10,-10,10,0.-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

