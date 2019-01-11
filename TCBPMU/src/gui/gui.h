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
    private: System::Windows::Forms::StatusStrip^  statusStrip1;
    private: System::Windows::Forms::MenuStrip^  menuStrip1;
    private: System::Windows::Forms::ListBox^  task_list_box;
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
            this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->task_list_box = (gcnew System::Windows::Forms::ListBox());
            this->SuspendLayout();
            // 
            // statusStrip1
            // 
            this->statusStrip1->Location = System::Drawing::Point(10,327);
            this->statusStrip1->Name = L"statusStrip1";
            this->statusStrip1->Size = System::Drawing::Size(598,22);
            this->statusStrip1->TabIndex = 0;
            this->statusStrip1->Text = L"statusStrip1";
            // 
            // menuStrip1
            // 
            this->menuStrip1->Location = System::Drawing::Point(10,10);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(598,24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // task_list_box
            // 
            this->task_list_box->FormattingEnabled = true;
            this->task_list_box->Location = System::Drawing::Point(13,50);
            this->task_list_box->Name = L"task_list_box";
            this->task_list_box->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
            this->task_list_box->Size = System::Drawing::Size(316,264);
            this->task_list_box->TabIndex = 2;
            this->task_list_box->SelectedIndexChanged += gcnew System::EventHandler(this,&gui::task_list_box_SelectedIndexChanged);
            // 
            // gui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(618,359);
            this->Controls->Add(this->task_list_box);
            this->Controls->Add(this->statusStrip1);
            this->Controls->Add(this->menuStrip1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->MainMenuStrip = this->menuStrip1;
            this->MaximizeBox = false;
            this->Name = L"gui";
            this->Padding = System::Windows::Forms::Padding(10);
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"TCBPMU";
            this->Load += gcnew System::EventHandler(this,&gui::gui_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void gui_Load(System::Object^  sender,System::EventArgs^  e) {
    }
    private: System::Void task_list_box_SelectedIndexChanged(System::Object^  sender,System::EventArgs^  e) {
    }
    };
}
