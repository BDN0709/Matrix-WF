#include "Logic.h"
#include "MyForm.h"
#include "UI.h"

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MatrixWF::MyForm form;
	Application::Run(% form);

	return;
}