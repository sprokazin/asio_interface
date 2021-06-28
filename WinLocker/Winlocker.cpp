#include "Winlocker.h"
#include <Windows.h>
using namespace WinLocker; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Winlocker);
	return 0;
}
