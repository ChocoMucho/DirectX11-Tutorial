#pragma once
class GeometryHelper
{

public:
	//���ø��� VertexTexture(Color)Data�ڷ����� ���� ������Ʈ�� ��ü�� �޴´�.
	static void CreateRectangle(shared_ptr<Geometry<VertexColorData>> geometry, Color color);
	static void CreateRectangle(shared_ptr<Geometry<VertexTextureData>> geometry);
};

