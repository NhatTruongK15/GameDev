#pragma once
#include <d3d10.h>
#include <D3DX10.h>

typedef D3DXVECTOR2 Vector2;
typedef D3DXVECTOR3 Vector3;

class Transform
{
public:
	Vector2 Position;
	Vector2 Scale;
	float Rotation;
};

struct Rect
{
	float left, top, right, bottom;
	bool TouchOrInterSect(const Rect& other);
	bool Contains(const Rect& other);
	bool Contains(const Vector2& point);
	static Rect Empty() { return { 0, 0, 0, 0 }; }
	bool operator == (const Rect& other)
	{
		return
			this->left == other.left && this->right == other.right &&
			this->top == other.top && this->bottom == other.bottom;
			
	}
};

struct IntPoint { int x, y; };

Vector2 vectorInfinity();
Vector2 vectorZero();
Vector2 normalizedVector();
Vector2 multi(float n, Vector2 vector);
Transform createTransform(Vector2 positon, Vector2 scale, float rotation);