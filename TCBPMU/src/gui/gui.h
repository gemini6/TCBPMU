#pragma once

namespace TCBPMU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gui
	/// </summary>
	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}



    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->SuspendLayout();
            // 
            // gui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(411,359);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->MaximizeBox = false;
            this->Name = L"gui";
            this->Padding = System::Windows::Forms::Padding(10);
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"TCBPMU";
            this->Load += gcnew System::EventHandler(this,&gui::gui_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void gui_Load(System::Object^  sender,System::EventArgs^  e) {
    }
    private: System::Void task_list_box_SelectedIndexChanged(System::Object^  sender,System::EventArgs^  e) {
    }
    };
}
