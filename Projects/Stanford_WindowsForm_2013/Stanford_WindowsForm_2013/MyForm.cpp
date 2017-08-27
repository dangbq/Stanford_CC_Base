#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Stanford_WindowsForm_2013::MyForm form;

	Application::Run(%form);
}
