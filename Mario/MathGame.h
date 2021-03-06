#pragma once
#include "Transform.h"
class MathGame
{
public:
	static const float Pi;
	static float Lerp(float a, float b, float c);
	static Vector2 Lerp(Vector2 a, Vector2 b, float t);
	static float Max(float a, float b);
	static float Min(float a, float b);
	static int Sign(float x);
	static float Clamp(float target, float inf, float sup);
	static int ClampInt(int target, int inf, int sup);
	static bool inRange(float target, float inf, float sup);
	static float Abs(float x);
	static float Sin(float x);
	static float Cos(float x);
	static float Tan(float x);
	static float Arctan(float radian);
	static float Arctan2(float y, float x);
	static float RadDeg(float radian);
	static float DegRad(float degree);
	static float Magnitude(Vector2 vec);
	static Vector2 Normalize(Vector2 vec);
	static float ToAngle(Vector2 vec);
	static Vector2 ToDirectionalVector(float radian);
	static float Ceil(float number);
	static float Floor(float number);
};

class Random
{
public:
	static int Range(int inf, int sup);
private:
	static bool Initialized;
};
