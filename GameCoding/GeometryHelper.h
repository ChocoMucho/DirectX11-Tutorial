#pragma once
class GeometryHelper
{

public:
	//템플릿에 VertexTexture(Color)Data자료형이 들어가는 지오메트리 객체를 받는다.
	static void CreateRectangle(shared_ptr<Geometry<VertexColorData>> geometry, Color color);
	static void CreateRectangle(shared_ptr<Geometry<VertexTextureData>> geometry);
};

