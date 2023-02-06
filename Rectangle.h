#pragma once
#include "Shape.h"
class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	void Size()override;
	void Draw()override;
private:
	int height = 0;
	int width = 0;
	int product = 0;
};
