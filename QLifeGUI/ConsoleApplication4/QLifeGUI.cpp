// ConsoleApplication4.cpp : main project file.

#include "stdafx.h"
#include "QLife.h"
#include "AddEvent1.h"
#include "PieChart.h"

using namespace ConsoleApplication4;
using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication4::QLife form;
	Application::Run(%form);
	return 0;
}
