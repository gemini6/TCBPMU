// CCP/src/initializer.cpp

#using <System.dll>
#using <System.Windows.Forms.dll>

#include "initializer.h"
#include "gui/gui.h"

using namespace System;
using namespace System::Windows::Forms;

Initializer::Initializer(void) {
    init();
}

Initializer::~Initializer() {

}

void Initializer::init(void) {
    tcbpmu_context = (gcnew ApplicationContext());
    tcbpmu_context->MainForm = (gcnew TCBPMU::gui());
    Application::Run(tcbpmu_context);
}
