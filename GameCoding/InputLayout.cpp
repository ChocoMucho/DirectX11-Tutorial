#include "pch.h"
#include "InputLayout.h"

InputLayout::InputLayout(ComPtr<ID3D11Device> device)
	:_device(device)
{
}

InputLayout::~InputLayout()
{
}

void InputLayout::Create(const vector<D3D11_INPUT_ELEMENT_DESC>& layout, ComPtr<ID3DBlob> vsBlob)
{
	const int32 count = static_cast<int32>(layout.size());

	_device->CreateInputLayout(layout.data(), count, vsBlob->GetBufferPointer(), vsBlob->GetBufferSize(), _inputLayout.GetAddressOf());
}
