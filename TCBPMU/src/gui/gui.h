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
    private: System::Windows::Forms::Label^  label1;
    protected:
    private: System::Windows::Forms::TabControl^  tabControl1;
    private: System::Windows::Forms::TabPage^  daily_task_list_tab_page;
    private: System::Windows::Forms::TabPage^  task_entry_tab_page;
    private: System::Windows::Forms::TabPage^  work_orders_tab_page;
    private: System::Windows::Forms::ListBox^  listBox1;





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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->daily_task_list_tab_page = (gcnew System::Windows::Forms::TabPage());
            this->task_entry_tab_page = (gcnew System::Windows::Forms::TabPage());
            this->work_orders_tab_page = (gcnew System::Windows::Forms::TabPage());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->tabControl1->SuspendLayout();
            this->daily_task_list_tab_page->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",14.25F));
            this->label1->Location = System::Drawing::Point(162,21);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(285,25);
            this->label1->TabIndex = 0;
            this->label1->Text = L"TCB Property Maintenance Utility";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->daily_task_list_tab_page);
            this->tabControl1->Controls->Add(this->task_entry_tab_page);
            this->tabControl1->Controls->Add(this->work_orders_tab_page);
            this->tabControl1->Location = System::Drawing::Point(13,66);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(580,343);
            this->tabControl1->TabIndex = 1;
            // 
            // daily_task_list_tab_page
            // 
            this->daily_task_list_tab_page->Controls->Add(this->listBox1);
            this->daily_task_list_tab_page->Location = System::Drawing::Point(4,22);
            this->daily_task_list_tab_page->Name = L"daily_task_list_tab_page";
            this->daily_task_list_tab_page->Padding = System::Windows::Forms::Padding(3);
            this->daily_task_list_tab_page->Size = System::Drawing::Size(572,317);
            this->daily_task_list_tab_page->TabIndex = 0;
            this->daily_task_list_tab_page->Text = L"Daily Task List";
            this->daily_task_list_tab_page->UseVisualStyleBackColor = true;
            // 
            // task_entry_tab_page
            // 
            this->task_entry_tab_page->Location = System::Drawing::Point(4,22);
            this->task_entry_tab_page->Name = L"task_entry_tab_page";
            this->task_entry_tab_page->Padding = System::Windows::Forms::Padding(3);
            this->task_entry_tab_page->Size = System::Drawing::Size(572,317);
            this->task_entry_tab_page->TabIndex = 1;
            this->task_entry_tab_page->Text = L"Task Entry";
            this->task_entry_tab_page->UseVisualStyleBackColor = true;
            // 
            // work_orders_tab_page
            // 
            this->work_orders_tab_page->Location = System::Drawing::Point(4,22);
            this->work_orders_tab_page->Name = L"work_orders_tab_page";
            this->work_orders_tab_page->Size = System::Drawing::Size(572,317);
            this->work_orders_tab_page->TabIndex = 2;
            this->work_orders_tab_page->Text = L"Work Orders";
            this->work_orders_tab_page->UseVisualStyleBackColor = true;
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(7,7);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(559,303);
            this->listBox1->TabIndex = 0;
            // 
            // gui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(606,422);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->MaximizeBox = false;
            this->Name = L"gui";
            this->Padding = System::Windows::Forms::Padding(10);
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"TCBPMU";
            this->Load += gcnew System::EventHandler(this,&gui::gui_Load);
            this->tabControl1->ResumeLayout(false);
            this->daily_task_list_tab_page->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void gui_Load(System::Object^  sender,System::EventArgs^  e) {
    }

    };
}
