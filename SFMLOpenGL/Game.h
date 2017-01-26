#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <gl/glew.h>
#include <gl/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <fstream>

#include "Vector.h"
#include "Matrix.h"

using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	string readShader();
	string readFragment();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void translate();
	void applyMatrix(Matrix matrix);

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};

#endif