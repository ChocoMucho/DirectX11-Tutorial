#pragma once

#include "Graphics.h"

class Game
{
public:
	Game();
	~Game();

public:
	void Init(HWND hwnd);
	void Update();
	void Render();

//private:
//	void RenderBegin();
//	void RenderEnd();

//private:
//	void CreateDeviceAndSwapChain();
//	void CreateRenderTargetView();
//	void SetViewport();

private:
	/*void CreateGeometry();
	void CreateInputLayout();
	void CreateVS();
	void CreatePS();*/

	void CreateRasterizerState();
	void CreateSamplerState();
	void CreateBlendState();



private:
	HWND _hWnd;
	//uint32 _width = 0;
	//uint32 _height = 0;


	shared_ptr<Graphics> _graphics;

private:
	//Geometry
	//vector<Vertex> _vertices;
	//vector<uint32> _indices;

	shared_ptr<Geometry<VertexTextureData>> _geometry;

	shared_ptr<VertexBuffer> _vertexBuffer;
	shared_ptr<IndexBuffer> _indexBuffer;
	shared_ptr<InputLayout> _inputLayout;

	//VS
	shared_ptr<VertexShader> _vertexShader;

	//RAS
	ComPtr<ID3D11RasterizerState> _rasterizerState = nullptr;

	//PS
	shared_ptr<PixelShader> _pixelShader;

	//SRV
	shared_ptr<Texture> _texture;

	ComPtr<ID3D11SamplerState> _samplerState = nullptr;
	ComPtr<ID3D11BlendState> _blendState = nullptr;

private:
	//SRT
	TransformData _transformData;
	shared_ptr<ConstantBuffer<TransformData>> _constantBuffer;

	//��ü�� ���� SRT ����
	Vec3 _localPosition = { 0.f, 0.f, 0.f };
	Vec3 _localRotation = { 0.f, 0.f, 0.f };
	Vec3 _localScale = { 1.f, 1.f, 1.f };
};

