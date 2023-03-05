#include <Windows.h>

int CALLBACK WinMain
(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)
{
	const auto pClassName = L"hw3dbutts";
	// Register window class
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;
	RegisterClassEx( &wc );

	// Create window instance
	HWND hWnd = CreateWindowExW
	(
		0,
		pClassName,
		L"DX11 Window",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		500,
		500,
		640,
		480,
		nullptr,
		nullptr,
		hInstance,
		nullptr
	);

	// Show Window
	ShowWindow(hWnd, SW_SHOW);

	while (true);

	return 0;
}