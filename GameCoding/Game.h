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
	void CreateGeometry();
	void CreateInputLayout();
	void CreateVS();
	void CreatePS();

	void CreateRasterizerState();
	void CreateSamplerState();
	void CreateBlendState();
	void CreateSRV();

	void CreateConstantBuffer();

	void LoadShaderFromFile(
		const wstring& path, 
		const string& name, 
		const string& version, 
		ComPtr<ID3DBlob>& blob
	);


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
	ComPtr<ID3D11VertexShader> _vertexShader = nullptr;
	ComPtr<ID3DBlob> _vsBlob = nullptr;

	//RAS
	ComPtr<ID3D11RasterizerState> _rasterizerState = nullptr;

	//PS
	ComPtr<ID3D11PixelShader> _pixelShader = nullptr;
	ComPtr<ID3DBlob> _psBlob = nullptr;

	//SRV
	ComPtr<ID3D11ShaderResourceView> _shaderResourceView = nullptr;

	ComPtr<ID3D11SamplerState> _samplerState = nullptr;
	ComPtr<ID3D11BlendState> _blendState = nullptr;

private:
	//SRT
	TransformData _transformData;
	ComPtr<ID3D11Buffer> _constantBuffer;

	//객체별 로컬 SRT 정보
	Vec3 _localPosition = { 0.f, 0.f, 0.f };
	Vec3 _localRotation = { 0.f, 0.f, 0.f };
	Vec3 _localScale = { 1.f, 1.f, 1.f };
};

