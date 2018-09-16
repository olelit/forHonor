#include "MainForm.h"
#include <Windows.h>

using namespace Organizer;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Organizer:: MainForm form;   //Project2 - name of your project
	Application::Run(%form);
}

