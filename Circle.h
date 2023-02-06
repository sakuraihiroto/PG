#pragma once
#include"Shape.h"
class Circle :public IShape
{
public:
	Circle();
	~Circle();

	void Size()override;
	void Draw()override;

private:
	float radius = 0;
	float product = 0;
};