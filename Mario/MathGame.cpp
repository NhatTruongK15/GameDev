#include "MathGame.h"
#include <cstdlib>
#include <ctime>
 

const float MathGame::Pi = 3.1416f;

float MathGame::Lerp(float a, float b, float t)
{
	return a + (b - a) * t;
}

Vector2 MathGame::Lerp(Vector2 a, Vector2 b, float t)
{



}