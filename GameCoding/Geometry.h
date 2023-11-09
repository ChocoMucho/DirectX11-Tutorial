#pragma once

template<typename T>
class Geometry
{
public:
	Geometry() {};
	~Geometry() {};

	//��� ����, ���� �ּ�, ���� ��ȯ �Լ�
	uint32 GetVertexCount() { return static_cast<uint32>(_vertices.size()); }
	void* GetVertexData() { return _vertices.data(); }
	const vector<T>& GetVertices() { return _vertices; }

	uint32 GetIndexCount() { return static_cast<uint32>(_indices.size()); }
	void* GetIndexData() { return _indices.data(); }
	const vector<uint32> GetIndices() { return _indices; }


	//��� �߰�, ����(�迭) �߰�, ���� ����
	void AddVerTex(const T& vertex) { _vertices.pushback(vertex); }
	void AddVertices(const vector<T>& vertices) { _vertices.insert(_vertices.end(), vertices.begin(), vertices.end()); }
	void SetVertices(const vector<T>& vertices) { _vertices = vertices; }

	void AddIndex(const uint32& index) { _indices.push_back(index); };
	void AddIndices(const vector<uint32>& index) { _indices.insert(_indices.end(), index.begin(), index.end()); };
	void SetIndices(const vector<uint32>& index) { _indices = index; };

private:
	vector<T> _vertices;
	vector<uint32> _indices;
};

