#pragma once
class InputLayout
{
public:
	InputLayout(ComPtr<ID3D11Device> device);
	~InputLayout();

public:
	ComPtr<ID3D11InputLayout> GetComPtr() { return _inputLayout; }

public:
	void Create(const vector<D3D11_INPUT_ELEMENT_DESC>& layout, ComPtr<ID3DBlob> vsBlob);

private:
private:
	ComPtr<ID3D11Device> _device;
	ComPtr<ID3D11InputLayout> _inputLayout;
};

