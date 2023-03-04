#include "stdafx.h"
#include "Window.h"

int APIENTRY WinMain
(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE prevIstance,
	_In_ LPSTR lpszCmdParam,
	_In_ int mCmdShow
)
{
	Window::Create(hInstance, 500, 500);
	Window::Show();

	while (Window::Update())
	{

	}

	Window::Destory();
	return 0;
}