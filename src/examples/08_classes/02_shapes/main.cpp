//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	Shape* shape;
	shape = new Line();
	shape->draw();
	delete shape;

	shape = new Circle();
	shape->draw();
	delete shape;

	std::vector<std::unique_ptr<Shape>> shapes;
	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());
	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());

	for(auto& shape: shapes)
	{
		shape->draw();
	}

	return 0;
}