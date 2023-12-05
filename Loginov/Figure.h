#pragma once
#include "Matrix.h"
#include <vector>
class path {
public:
	std::vector<vec2> verticles;
	vec3 color;
	float thickness;
	path(std::vector<vec2> verts, vec3 col, float thickn) {
		verticles = verts;
		color = col;
		thickness = thickn;
	}
};