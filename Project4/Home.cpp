
#include"Home.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array <String^>^args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew Project4::Home);
	 
}

 
