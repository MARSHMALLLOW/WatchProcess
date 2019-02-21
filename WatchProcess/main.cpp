#include <Windows.h>
int main() {
	HWND hProcess;
	hProcess = FindWindow(NULL, "Debug");
	if (hProcess)
	{
		MessageBox(NULL, "You can't start Debug!", "Alert!", MB_ICONERROR | MB_OK);
	}
}