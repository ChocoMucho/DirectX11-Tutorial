#pragma once
#include "Types.h"

//struct Vertex
//{
//	Vec3 positioin;
//	//Color color;
//	Vec2 uv;
//};

struct TransformData
{
	Matrix matWorld = Matrix::Identity;
	Matrix matView = Matrix::Identity;
	Matrix matProjection = Matrix::Identity;
};