#include "Transform.h"

Vector2 vectorInfinity()
{
	return Vector2(999999.0f, 999999.0f);
}

Vector2 vectorZero()
{
	return Vector2(0.0f, 0.0f);
}

Vector2 normalizedVector()
{
	return Vector2(1.0f, 1.0f);
}

Vector2 multi(float n, Vector2 vector)
{
	return Vector2(n * vector.x, n * vector.y);
}

Transform createTransform(Vector2 position, Vector2 scale, float rotation)
{
	Transform result;
	result.Position = position;
	result.Scale = scale;
	result.Rotation = rotation;
	return result;
}

bool Rect::TouchOrInterSect(const Rect& other)
{
	return this->left <= other.right &&
		this->top <= other.bottom &&
		this->right >= other.left &&
		this->bottom >= other.top;
}

bool Rect::Contains(const Vector2& point)
{
	return left <= point.x &&
		top <= point.y &&
		right >= point.x &&
		bottom >= point.y;
}

bool Rect::Contains(const Rect& other)
{
	return (
		this->left <= other.left &&
		this->top <= other.top &&
		this->right >= other.right &&
		this->bottom >= other.bottom);
}