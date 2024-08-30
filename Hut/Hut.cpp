#include <freeglut.h>

#include <iostream>
#include<math.h>

float M_PI = 3.1416;

bool isClickedSky = false;

bool isClickedRoad = false;

bool isClickedCloud = false;

bool isClickedSun = false;

bool isClickedGround = false;

bool isClickedNight = false;

bool isClickedDay = false;

bool isClickedGrass = false;
//THIS IS A GLOBAL FUNCTION FOR RESIZING THE ELEMENT AND CHANGING ITS POSITION

//float factor = 0.001;
//float offset = -300;
//
//static void point(float x, float y) {
//	glVertex2f((x + offset) * factor, (y + offset) * factor);
//}

//void sun() {
//	const int numSegments = 100;
//	float angleIncrement = 2.0f * M_PI / numSegments;
//
//	glColor3f(1.0f, 0.9f, 0.2f);
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(-0.8f, 0.8f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = -0.8f + 0.1 * cos(angle);
//		float y = 0.8f + 0.1 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//}

//void cloud() {
//	const int numSegments = 100;
//	float angleIncrement = 2.0f * M_PI / numSegments;
//
//	/*CLOUD1*/
//
//	glColor3f(1.0f, 1.0f, 1.0f);
//	
//	/*Right*/
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.82f, 0.82f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = 0.82f + 0.05 * cos(angle);
//		float y = 0.82f + 0.05 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.81f, 0.78f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = 0.81f + 0.05 * cos(angle);
//		float y = 0.78f + 0.05 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	/*Top*/
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f, 0.85f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = 0.75f + 0.05 * cos(angle);
//		float y = 0.83f + 0.05 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	/*Left*/
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.70f, 0.80f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = 0.70f + 0.05 * cos(angle);
//		float y = 0.80f + 0.05 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	/*Bottom*/
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f, 0.77f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = 0.75f + 0.05 * cos(angle);
//		float y = 0.77f + 0.05 * sin(angle);
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	/*CLOUD2*/
//
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.82f - 0.5f, 0.82f - 0.1f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.82f - 0.5f) + 0.05f * cos(angle); 
//		float y = (0.82f - 0.1f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.81f - 0.5f, 0.78f - 0.1f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.81f - 0.5f) + 0.05f * cos(angle); 
//		float y = (0.78f - 0.1f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Top
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f - 0.5f, 0.85f - 0.1f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.75f - 0.5f) + 0.05f * cos(angle); 
//		float y = (0.85f - 0.1f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Left
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.70f - 0.5f, 0.80f - 0.1f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.70f - 0.5f) + 0.05f * cos(angle); 
//		float y = (0.80f - 0.1f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Bottom
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f - 0.5f, 0.77f - 0.1f); 
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.75f - 0.5f) + 0.05f * cos(angle); 
//		float y = (0.77f - 0.1f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//	
//	/*CLOUD3*/
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.82f - 1.2f, 0.82f - 0.05f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.82f - 1.2f) + 0.05f * cos(angle); 
//		float y = (0.82f - 0.05f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.81f - 1.2f, 0.78f - 0.05f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.81f - 1.2f) + 0.05f * cos(angle); 
//		float y = (0.78f - 0.05f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Top
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f - 1.2f, 0.85f - 0.05f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.75f - 1.2f) + 0.05f * cos(angle); 
//		float y = (0.85f - 0.05f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Left
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.70f - 1.2f, 0.80f - 0.05f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.70f - 1.2f) + 0.05f * cos(angle); 
//		float y = (0.80f - 0.05f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//
//	// Bottom
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2f(0.75f - 1.2f, 0.77f - 0.05f);
//	for (int i = 0; i <= numSegments; ++i) {
//		float angle = i * angleIncrement;
//		float x = (0.75f - 1.2f) + 0.05f * cos(angle); 
//		float y = (0.77f - 0.05f) + 0.05f * sin(angle); 
//		glVertex2f(x, y);
//	}
//	glEnd();
//}

//void ground()
//{
//	glBegin(GL_POLYGON);
//
//	glColor3f(0.3f, 0.8f, 0.15f);
//
//	glVertex2f(-1.0f, -0.1f);
//    glVertex2f(-0.8f, 0.0f); 
//    glVertex2f(-0.6f, -0.1f); 
//    glVertex2f(-0.4f, 0.0f);  
//    glVertex2f(-0.2f, -0.1f); 
//    glVertex2f(0.0f, 0.0f);   
//    glVertex2f(0.2f, -0.1f);  
//    glVertex2f(0.4f, 0.0f);   
//    glVertex2f(0.6f, -0.1f);  
//    glVertex2f(0.8f, 0.0f);   
//    glVertex2f(1.0f, -0.1f);  
//    glVertex2f(1.0f, -1.0f);
//    glVertex2f(-1.0f, -1.0f);
//
//	glEnd();
//}



void renderBitmapString(float x, float y, void* font, const char* string) {
	const char* c;
	glColor3f(1.0f, 1.0f, 1.0f);
	glRasterPos2f(x, y); 
	for (c = string; *c != '\0'; c++) {
		glutBitmapCharacter(font, *c);
	}
}
void drawGrass(float baseX, float baseY) {

	if (isClickedGrass) {
		glBegin(GL_LINES);
		glColor3f(0.0f, 0.5f, 0.0f);


		glVertex2f(baseX, baseY);
		glVertex2f(baseX - 0.025f, baseY + 0.03f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX - 0.02f, baseY + 0.04f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX - 0.015f, baseY + 0.045f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX - 0.007f, baseY + 0.05f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX, baseY + 0.055f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX + 0.007f, baseY + 0.05f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX + 0.015f, baseY + 0.045f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX + 0.02f, baseY + 0.04f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX + 0.025f, baseY + 0.03f);

		glVertex2f(baseX, baseY);
		glVertex2f(baseX + 0.025f, baseY + 0.025f);

		glEnd();

	}
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	
	/*GROUND_AT_DAY*/
	if (isClickedGround) {
		glBegin(GL_POLYGON);

		glColor3f(0.3f, 0.8f, 0.15f);

		glVertex2f(-1.0f, -0.1f);
		glVertex2f(-0.8f, 0.0f);
		glVertex2f(-0.6f, -0.1f);
		glVertex2f(-0.4f, 0.0f);
		glVertex2f(-0.2f, -0.1f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(0.2f, -0.1f);
		glVertex2f(0.4f, 0.0f);
		glVertex2f(0.6f, -0.1f);
		glVertex2f(0.8f, 0.0f);
		glVertex2f(1.0f, -0.1f);
		glVertex2f(1.0f, -1.0f);
		glVertex2f(-1.0f, -1.0f);

		glEnd();
	}
	glLineWidth(1.75f);

	/*glBegin(GL_LINES);
	glColor3f(0.0f, 0.5f, 0.0f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.575f, -0.57f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.58f, -0.56f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.585f, -0.555f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.593f, -0.55f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.60f, -0.545f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.607f, -0.55f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.615f, -0.555f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.62f, -0.56f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.625f, -0.565f);

	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.625f, -0.57f);


	glEnd();*/

	drawGrass(0.6f, -0.6f);

	drawGrass(0.5f, -0.65f);

	drawGrass(0.48f, -0.54f);

	drawGrass(0.1f, -0.75f);

	drawGrass(0.2f, -0.4f);

	drawGrass(0.28f, -0.45f);

	drawGrass(0.3f, -0.7f);

	drawGrass(0.54f, -0.3f);

	drawGrass(0.40f, -0.38f);

	drawGrass(0.7f, -0.46f);

	drawGrass(0.84f, -0.40f);

	drawGrass(0.79f, -0.54f);

	drawGrass(0.75f, -0.22f);

	drawGrass(0.75f, -0.7f);

	drawGrass(0.22f, -0.89f);

	drawGrass(0.34f, -0.5f);

	drawGrass(0.12f, -0.63f);

	drawGrass(0.24f, -0.55f);

	drawGrass(0.44f, -0.82f);

	drawGrass(-0.40f, -0.38f);

	drawGrass(-0.48f, -0.52f);

	drawGrass(-0.55f, -0.64f);

	drawGrass(-0.55f, -0.3f);
	
	drawGrass(-0.68f, -0.25f);

	drawGrass(-0.68f, -0.4f);

	drawGrass(-0.79f, -0.36f);

	drawGrass(-0.6f, -0.8f);

	drawGrass(-0.75f, -0.6f);

	drawGrass(-0.85f, -0.48f);

	drawGrass(-0.80f, -0.68f);

	drawGrass(-0.72f, -0.82f);

	drawGrass(-0.90f, -0.78f);
	/*Night*/

	if (isClickedNight) {

	    

		const int numSegments = 100;
		float angleIncrement = 2.0f * M_PI / numSegments;

		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-0.8f, 0.8f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = -0.8f + 0.1 * cos(angle);
			float y = 0.8f + 0.1 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glColor3f(0.05f, 0.05f, 0.2f);
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-0.75f, 0.80f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = -0.75f + 0.1 * cos(angle);
			float y = 0.80f + 0.1 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*GROUND_AT_NIGHT*/
		glBegin(GL_POLYGON);
		
		glColor3f(0.1f, 0.25f, 0.1f);
		
		glVertex2f(-1.0f, -0.1f);
		glVertex2f(-0.8f, 0.0f);
		glVertex2f(-0.6f, -0.1f);
		glVertex2f(-0.4f, 0.0f);
		glVertex2f(-0.2f, -0.1f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(0.2f, -0.1f);
		glVertex2f(0.4f, 0.0f);
		glVertex2f(0.6f, -0.1f);
		glVertex2f(0.8f, 0.0f);
		glVertex2f(1.0f, -0.1f);
		glVertex2f(1.0f, -1.0f);
		glVertex2f(-1.0f, -1.0f);

		glEnd();

		/*const int numSegments = 100;
		float angleIncrement = 2.0f * M_PI / numSegments;*/

		/*CLOUD1*/

		
		glColor3f(0.6f, 0.6f, 0.65f);
		/*Right*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f, 0.82f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.82f + 0.05 * cos(angle);
			float y = 0.82f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f, 0.78f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.81f + 0.05 * cos(angle);
			float y = 0.78f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Top*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f, 0.85f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.75f + 0.05 * cos(angle);
			float y = 0.83f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Left*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f, 0.80f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.70f + 0.05 * cos(angle);
			float y = 0.80f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Bottom*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f, 0.77f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.75f + 0.05 * cos(angle);
			float y = 0.77f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*CLOUD2*/

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f - 0.5f, 0.82f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.82f - 0.5f) + 0.05f * cos(angle);
			float y = (0.82f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f - 0.5f, 0.78f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.81f - 0.5f) + 0.05f * cos(angle);
			float y = (0.78f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Top
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 0.5f, 0.85f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 0.5f) + 0.05f * cos(angle);
			float y = (0.85f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Left
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f - 0.5f, 0.80f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.70f - 0.5f) + 0.05f * cos(angle);
			float y = (0.80f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Bottom
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 0.5f, 0.77f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 0.5f) + 0.05f * cos(angle);
			float y = (0.77f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*CLOUD3*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f - 1.2f, 0.82f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.82f - 1.2f) + 0.05f * cos(angle);
			float y = (0.82f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f - 1.2f, 0.78f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.81f - 1.2f) + 0.05f * cos(angle);
			float y = (0.78f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Top
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 1.2f, 0.85f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 1.2f) + 0.05f * cos(angle);
			float y = (0.85f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Left
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f - 1.2f, 0.80f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.70f - 1.2f) + 0.05f * cos(angle);
			float y = (0.80f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Bottom
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 1.2f, 0.77f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 1.2f) + 0.05f * cos(angle);
			float y = (0.77f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*PATHWAY AT NIGHT*/
		glColor3f(0.3f, 0.3f, 0.3f);

		glBegin(GL_QUADS);

		glVertex2f(-0.16f, -0.3f);
		glVertex2f(-0.02f, -0.34f);
		glVertex2f(-0.22f, -0.64f);
		glVertex2f(-0.38f, -0.60f);

		glEnd();

		/*glColor3f(0.5f, 0.5f, 0.5f);*/

		glBegin(GL_QUADS);

		glVertex2f(-0.22f, -0.64f);
		glVertex2f(-0.38f, -0.60f);
		glVertex2f(-0.46f, -1.0f);
		glVertex2f(-0.30f, -1.0f);
		glEnd();

		

	}

	/*GRASS*/

	drawGrass(0.6f, -0.6f);

	drawGrass(0.5f, -0.65f);

	drawGrass(0.48f, -0.54f);

	drawGrass(0.1f, -0.75f);

	drawGrass(0.2f, -0.4f);

	drawGrass(0.28f, -0.45f);

	drawGrass(0.3f, -0.7f);

	drawGrass(0.54f, -0.3f);

	drawGrass(0.40f, -0.38f);

	drawGrass(0.7f, -0.46f);

	drawGrass(0.84f, -0.40f);

	drawGrass(0.79f, -0.54f);

	drawGrass(0.75f, -0.22f);

	drawGrass(0.75f, -0.7f);

	drawGrass(0.22f, -0.89f);

	drawGrass(0.34f, -0.5f);

	drawGrass(0.12f, -0.63f);

	drawGrass(0.24f, -0.55f);

	drawGrass(0.44f, -0.82f);

	drawGrass(-0.40f, -0.38f);

	drawGrass(-0.48f, -0.52f);

	drawGrass(-0.55f, -0.64f);

	drawGrass(-0.55f, -0.3f);

	drawGrass(-0.68f, -0.25f);

	drawGrass(-0.68f, -0.4f);

	drawGrass(-0.79f, -0.36f);

	drawGrass(-0.6f, -0.8f);

	drawGrass(-0.75f, -0.6f);

	drawGrass(-0.85f, -0.48f);

	drawGrass(-0.80f, -0.68f);

	drawGrass(-0.72f, -0.82f);

	drawGrass(-0.90f, -0.78f);

	/*SUN*/
	if (isClickedSun){
	const int numSegments = 100;
	float angleIncrement = 2.0f * M_PI / numSegments;

	glColor3f(1.0f, 0.9f, 0.2f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(-0.8f, 0.8f); 
	for (int i = 0; i <= numSegments; ++i) {
		float angle = i * angleIncrement;
		float x = -0.8f + 0.1 * cos(angle);
		float y = 0.8f + 0.1 * sin(angle);
		glVertex2f(x, y);
	}
	glEnd();
	}

	if (isClickedCloud) {
		/*cloud();*/
		const int numSegments = 100;
		float angleIncrement = 2.0f * M_PI / numSegments;

		/*CLOUD1*/

		glColor3f(1.0f, 1.0f, 1.0f);

		/*Right*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f, 0.82f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.82f + 0.05 * cos(angle);
			float y = 0.82f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f, 0.78f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.81f + 0.05 * cos(angle);
			float y = 0.78f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Top*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f, 0.85f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.75f + 0.05 * cos(angle);
			float y = 0.83f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Left*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f, 0.80f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.70f + 0.05 * cos(angle);
			float y = 0.80f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*Bottom*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f, 0.77f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = 0.75f + 0.05 * cos(angle);
			float y = 0.77f + 0.05 * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*CLOUD2*/

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f - 0.5f, 0.82f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.82f - 0.5f) + 0.05f * cos(angle);
			float y = (0.82f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f - 0.5f, 0.78f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.81f - 0.5f) + 0.05f * cos(angle);
			float y = (0.78f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Top
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 0.5f, 0.85f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 0.5f) + 0.05f * cos(angle);
			float y = (0.85f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Left
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f - 0.5f, 0.80f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.70f - 0.5f) + 0.05f * cos(angle);
			float y = (0.80f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Bottom
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 0.5f, 0.77f - 0.1f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 0.5f) + 0.05f * cos(angle);
			float y = (0.77f - 0.1f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		/*CLOUD3*/
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.82f - 1.2f, 0.82f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.82f - 1.2f) + 0.05f * cos(angle);
			float y = (0.82f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.81f - 1.2f, 0.78f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.81f - 1.2f) + 0.05f * cos(angle);
			float y = (0.78f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Top
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 1.2f, 0.85f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 1.2f) + 0.05f * cos(angle);
			float y = (0.85f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Left
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.70f - 1.2f, 0.80f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.70f - 1.2f) + 0.05f * cos(angle);
			float y = (0.80f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();

		// Bottom
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.75f - 1.2f, 0.77f - 0.05f);
		for (int i = 0; i <= numSegments; ++i) {
			float angle = i * angleIncrement;
			float x = (0.75f - 1.2f) + 0.05f * cos(angle);
			float y = (0.77f - 0.05f) + 0.05f * sin(angle);
			glVertex2f(x, y);
		}
		glEnd();
	}
	

	
	renderBitmapString(0.55f, -0.9f, GLUT_BITMAP_HELVETICA_18, "Love Dewangan, 500109339");
	renderBitmapString(0.70f, 0.575f, GLUT_BITMAP_HELVETICA_12, "Sky");
	renderBitmapString(0.70f, 0.525f, GLUT_BITMAP_HELVETICA_12, "Pathway");
	renderBitmapString(0.70f, 0.475f, GLUT_BITMAP_HELVETICA_12, "Cloud");
	renderBitmapString(0.70f, 0.425f, GLUT_BITMAP_HELVETICA_12, "Sun");
	renderBitmapString(0.70f, 0.375f, GLUT_BITMAP_HELVETICA_12, "Ground");
	renderBitmapString(0.70f, 0.325f, GLUT_BITMAP_HELVETICA_12, "Grass");
	renderBitmapString(0.70f, 0.275f, GLUT_BITMAP_HELVETICA_12, "Night");


	
	






	/*Left Side Of The Hut*/
	glColor3f(0.43f, 0.34f, 0.26f);

	glBegin(GL_POLYGON);
	glVertex2f(-0.33f, -0.26f);
	glVertex2f(0.0f, -0.35f);
	glVertex2f(0.0f, 0.3f);
	glVertex2f(-0.16f, 0.5f);
	glVertex2f(-0.33f, 0.2f);
	glEnd();

	/*DoorOuter*/
	glColor3f(0.38f, 0.27f, 0.20f);

	glBegin(GL_QUADS);

	glVertex2f(-0.16f, 0.185f);
	glVertex2f(-0.16f, -0.3f);
	glVertex2f(-0.02f, -0.34f);
	glVertex2f(-0.02f, 0.2f);

	glEnd();

	/*DoorInner*/
	/*glColor3f(0.36f, 0.25f, 0.20f);*/

	glColor3f(0.24f, 0.17f, 0.12f);

	glBegin(GL_QUADS);

	glVertex2f(-0.15f, 0.175f);
	glVertex2f(-0.15f, -0.308f);
	glVertex2f(-0.03f, -0.34f);
	glVertex2f(-0.03f, 0.185f);

	glEnd();


	/*Road*/

	if (isClickedRoad) {
		glColor3f(0.5f, 0.5f, 0.5f);
		

		glBegin(GL_QUADS);

		glVertex2f(-0.16f, -0.3f);
		glVertex2f(-0.02f, -0.34f);
		glVertex2f(-0.22f, -0.64f);
		glVertex2f(-0.38f, -0.60f);

		glEnd();

		glColor3f(0.5f, 0.5f, 0.5f);

		glBegin(GL_QUADS);

		glVertex2f(-0.22f, -0.64f);
		glVertex2f(-0.38f, -0.60f);
		glVertex2f(-0.46f, -1.0f);
		glVertex2f(-0.30f, -1.0f);
		glEnd();
	}
	

	/*LeftWindowOuter*/
	
	glColor3f(0.38f, 0.27f, 0.20f);
	
	glBegin(GL_QUADS);

	glVertex2f(-0.3f, 0.175f);
	glVertex2f(-0.3f, -0.08f);
	glVertex2f(-0.19f, -0.08f);
	glVertex2f(-0.19f, 0.185f);
	
	glEnd();

	/*LeftWindowInner*/
	glColor3f(0.24f, 0.17f, 0.12f);

	/*glColor3f(0.24f, 0.17f, 0.12f);*/
	glBegin(GL_QUADS);

	glVertex2f(-0.29f, 0.160f);
	glVertex2f(-0.29f, -0.07f);
	glVertex2f(-0.2f, -0.07f);
	glVertex2f(-0.2f, 0.170f);

	glEnd();

	/*RightSideOfTheHut*/
	/*glColor3f(0.35f, 0.16f, 0.14f);*/

	/*Bistre Brown*/
	/*glColor3f(0.24f, 0.17f, 0.12f);*/

	glColor3f(0.38f, 0.27f, 0.20f);

	glBegin(GL_POLYGON);

	glVertex2f(-0.0f, -0.35f);
	glVertex2f(0.475f, -0.16f);
	glVertex2f(0.475f, 0.13f);
	glVertex2f(0.075f, 0.2f);
	glVertex2f(0.0f, 0.3f);

	glEnd();

	/*RoofLeftPart*/
	/*glColor3f(0.35f, 0.16f, 0.14f);*/

	/*Bistre Brown*/
	glColor3f(0.24f, 0.17f, 0.12f);

	glBegin(GL_POLYGON);

	glVertex2f(-0.4f,0.15f);
	glVertex2f(-0.33f,0.15f);
	glVertex2f(-0.33f,0.2f);
	glVertex2f(-0.16f,0.5f);
	glVertex2f(-0.17f, 0.515f);

	glEnd();

	
	/*RoofRightPart*/
	/*glColor3f(0.36f, 0.25f, 0.20f);*/

	/*Dark Chocolate*/
	glColor3f(0.24f, 0.13f, 0.07f);

	glBegin(GL_QUADS);

	glVertex2f(-0.17f, 0.515f);
	glVertex2f(0.075f, 0.2f);
	glVertex2f(0.55f, 0.1f);
	glVertex2f(0.425f, 0.24f);

	glEnd();

	/*RightWindowOuter*/
	
	glColor3f(0.28f, 0.20f, 0.15f);
	glBegin(GL_QUADS);

	glVertex2f(0.12f, 0.183f);
	glVertex2f(0.12f, -0.08f);
	glVertex2f(0.38f, -0.05f);
	glVertex2f(0.38f, 0.13f);

	glEnd();

	/*RightWindowInner*/

	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.13f, 0.173f);
	glVertex2f(0.13f, -0.07f);
	glVertex2f(0.37f, -0.04f);
	glVertex2f(0.37f, 0.12f);

	glEnd();

	/*INTERACTIVE SWITCHES*/
	/*SKY*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.6f);
	glVertex2f(0.65f, 0.57f);
	glVertex2f(0.67f, 0.57f);
	glVertex2f(0.67f, 0.6f);

	glEnd();

	/*PATHWAY*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.55f);
	glVertex2f(0.65f, 0.52f);
	glVertex2f(0.67f, 0.52f);
	glVertex2f(0.67f, 0.55f);

	glEnd();

	/*CLOUD*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.50f);
	glVertex2f(0.65f, 0.47f);
	glVertex2f(0.67f, 0.47f);
	glVertex2f(0.67f, 0.50f);

	glEnd();

	/*SUN*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.45f);
	glVertex2f(0.65f, 0.42f);
	glVertex2f(0.67f, 0.42f);
	glVertex2f(0.67f, 0.45f);

	glEnd();

	/*GROUND*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.40f);
	glVertex2f(0.65f, 0.37f);
	glVertex2f(0.67f, 0.37f);
	glVertex2f(0.67f, 0.40f);

	glEnd();

	/*GRASS*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.32f);
	glVertex2f(0.67f, 0.32f);
	glVertex2f(0.67f, 0.35f);

	glEnd();

	/*NIGHT*/
	glColor3f(0.24f, 0.17f, 0.12f);
	glBegin(GL_QUADS);

	glVertex2f(0.65f, 0.30f);
	glVertex2f(0.65f, 0.27f);
	glVertex2f(0.67f, 0.27f);
	glVertex2f(0.67f, 0.30f);

	glEnd();
	
	

	/*OLD HUT*/

	/*glColor3f(0.36f, 0.25f, 0.20f);

	glBegin(GL_QUADS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.6f, -0.4f);
	glVertex2f(0.6f, 0.0f);
	glEnd();
	
	glColor3f(0.35f, 0.16f, 0.14f);

	glBegin(GL_QUADS);
	glVertex2f(-0.4f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glEnd();

	glColor3f(0.55f, 0.35f, 0.05f);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(0.0f, 0.0f);
	glEnd();

	glColor3f(0.35f, 0.16f, 0.14f);
	glBegin(GL_QUADS);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.4f, 0.3f);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.25f, -0.2f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.2f);
	glEnd();*/

	glFlush();

}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {

		float normX = (float)x / glutGet(GLUT_WINDOW_WIDTH) * 2.0f - 1.0f;
		float normY = 1.0f - (float)y / glutGet(GLUT_WINDOW_HEIGHT) * 2.0f;
		if (isClickedNight == false)
		{
			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.57f && normY <= 0.6f) {
				if (isClickedSky) {
					glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
				}
				else {

					glClearColor(0.53f, 0.81f, 0.92f, 1.0f);
					/*glClearColor(0.05f, 0.05f, 0.2f, 1.0f);*/
					/*glClearColor(0.29f, 0.40f, 0.61f, 1.0f);*/

				}

				isClickedSky = !isClickedSky;
				glutPostRedisplay();
			}
			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.52f && normY <= 0.55f) {

				isClickedRoad = !isClickedRoad;

			}
			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.47f && normY <= 0.50f) {

				isClickedCloud = !isClickedCloud;

			}

			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.42f && normY <= 0.45f) {

				isClickedSun = !isClickedSun;

			}

			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.37f && normY <= 0.40f) {

				isClickedGround = !isClickedGround;

			}

			if (normX >= 0.65f && normX <= 0.67f && normY >= 0.32f && normY <= 0.35f) {

				isClickedGrass = !isClickedGrass;

			}
		}
		if (normX >= 0.65f && normX <= 0.67f && normY >= 0.27f && normY <= 0.30f) {

			
			if (isClickedNight) {
				glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
				isClickedGrass = false;
			}
			else {

				isClickedGrass = true;
				glClearColor(0.05f, 0.05f, 0.2f, 1.0f);
				/*glClearColor(0.05f, 0.05f, 0.2f, 1.0f);*/
				/*glClearColor(0.29f, 0.40f, 0.61f, 1.0f);*/

			}
			
			isClickedSky = false;
			isClickedRoad = false;
			isClickedGround = false;
			isClickedCloud = false;
			isClickedSun = false;
			
			
			isClickedNight = !isClickedNight;

		}
		/*if (normX >= 0.65f && normX <= 0.67f && normY >= 0.27f && normY <= 0.30f)
		{
			
			isClickedDay = !isClickedDay;
		}*/
		
	}
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1280, 720);

	glutInitWindowPosition(100, 100);

	glutCreateWindow("Hut");

	glClearColor(0.0, 0.0, 0.0, 1.0f);

	glutDisplayFunc(display);
	
	glutMouseFunc(mouse);

	glutMainLoop();

	return 0;
}