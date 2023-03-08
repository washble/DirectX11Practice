#include "Window.h"

int CALLBACK WinMain
(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)
{
	Window wnd(800, 300, "DX11Test");

	// Message pump
	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	if (gResult == -1)
	{
		return -1;
	}

	return msg.wParam;
}



//#include <Windows.h>
//#include "WindowsMessageMap.h"
//#include "tchar.h"
//#include <sstream>
//#include <atlstr.h>
//
//using namespace std;
//
//LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//	static WindowsMessageMap mm;
//	OutputDebugStringA(mm(msg, lParam, wParam).c_str());
//
//	switch (msg)
//	{
//	case WM_CLOSE:
//		PostQuitMessage(69);
//		break;
//	case WM_KEYDOWN:
//		if (wParam == 'D')
//		{
//			SetWindowText(hWnd, _T("ChangeTitle"));
//		}
//		break;
//	case WM_KEYUP:
//		if (wParam == 'F')
//		{
//			SetWindowText(hWnd, _T("hw3dbutts"));
//		}
//		break;
//	case WM_CHAR:
//		{
//			static string title;
//			title.push_back((char)wParam);
//			SetWindowTextA(hWnd, title.c_str());
//		}
//		break;
//	case WM_LBUTTONDOWN:
//		{
//			const POINTS pt = MAKEPOINTS(lParam);
//			ostringstream oss;
//			oss << "(" << pt.x << "," << pt.y << ")";
//			SetWindowTextA(hWnd, oss.str().c_str());
//		}
//		break;
//	}
//
//	return DefWindowProc(hWnd, msg, wParam, lParam);
//}
//
//int CALLBACK WinMain
//(
//	_In_ HINSTANCE hInstance,
//	_In_opt_ HINSTANCE hPrevInstance,
//	_In_ LPSTR lpCmdLine,
//	_In_ int nCmdShow
//)
//{
//	const auto pClassName = _T("hw3dbutts");
//	// Register window class
//	WNDCLASSEXW wc = {0};
//	wc.cbSize = sizeof(wc);
//	wc.style = CS_OWNDC;
//	wc.lpfnWndProc = WndProc;
//	wc.cbClsExtra = 0;
//	wc.cbWndExtra = 0;
//	wc.hInstance = hInstance;
//	wc.hIcon = nullptr;
//	wc.hCursor = nullptr;
//	wc.hbrBackground = nullptr;
//	wc.lpszMenuName = nullptr;
//	wc.lpszClassName = pClassName;
//	wc.hIconSm = nullptr;
//	RegisterClassExW(&wc);
//
//	// Create window instance
//	HWND hWnd = CreateWindowEx
//	(
//		0,
//		pClassName,
//		_T("DX11 Window"),
//		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
//		500,
//		500,
//		640,
//		480,
//		nullptr,
//		nullptr,
//		hInstance,
//		nullptr
//	);
//
//	// Show Window
//	ShowWindow(hWnd, SW_SHOW);
//
//	// Message pump
//	MSG msg;
//	BOOL gResult;
//	while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//
//	if (gResult == -1)
//	{
//		return -1;
//	}
//
//	return msg.wParam;
//}