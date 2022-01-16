#pragma once
#include <stdafx.h>
class Device {
	Microsoft::WRL::ComPtr<IDXGIAdapter1> adapter;
	Microsoft::WRL::ComPtr<ID3D12Device5> dxDevice;
	Microsoft::WRL::ComPtr<IDXGIFactory1> dxgiFactory;

public:
	IDXGIAdapter1* Adapter() const { return adapter.Get(); }
	ID3D12Device5* DxDevice() const { return dxDevice.Get(); }
	IDXGIFactory1* DxgiFactory() const { return dxgiFactory.Get(); }
	Device();
	~Device();
};
