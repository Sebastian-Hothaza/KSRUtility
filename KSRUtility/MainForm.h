#pragma once

namespace KSRUtility {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  top;
	protected:
	private: System::Windows::Forms::Label^  naviLBL;
	private: System::Windows::Forms::Panel^  navipanel;
	private: System::Windows::Forms::Panel^  logopanel;
	private: System::Windows::Forms::Label^  trackDaysLBL;
	private: System::Windows::Forms::Button^  membersBTN;
	private: System::Windows::Forms::Button^  eventsBTN;
	private: System::Windows::Forms::Button^  settingsBTN;
	private: System::Windows::Forms::PictureBox^  logo;
	private: System::Windows::Forms::Panel^  EventsPNL;
	private: System::Windows::Forms::Button^  exportDayBTN;
	private: System::Windows::Forms::Button^  registerMemberBTN;
	private: System::Windows::Forms::Button^  confirmPmtBTN;
	private: System::Windows::Forms::Button^  editRegistrationBTN;
	private: System::Windows::Forms::Panel^  membersPNL;
	private: System::Windows::Forms::Button^  editMemberBTN;
	private: System::Windows::Forms::Button^  exportMemberBTN;
	private: System::Windows::Forms::Button^  addMemberBTN;
	private: System::Windows::Forms::Panel^  addMemberPNL;
	private: System::Windows::Forms::Panel^  editMemberPNL;
	private: System::Windows::Forms::Panel^  exportMembersPNL;
	private: System::Windows::Forms::Panel^  settingsPNL;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->top = (gcnew System::Windows::Forms::Panel());
			this->naviLBL = (gcnew System::Windows::Forms::Label());
			this->navipanel = (gcnew System::Windows::Forms::Panel());
			this->logopanel = (gcnew System::Windows::Forms::Panel());
			this->trackDaysLBL = (gcnew System::Windows::Forms::Label());
			this->membersBTN = (gcnew System::Windows::Forms::Button());
			this->eventsBTN = (gcnew System::Windows::Forms::Button());
			this->settingsBTN = (gcnew System::Windows::Forms::Button());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->EventsPNL = (gcnew System::Windows::Forms::Panel());
			this->exportDayBTN = (gcnew System::Windows::Forms::Button());
			this->registerMemberBTN = (gcnew System::Windows::Forms::Button());
			this->confirmPmtBTN = (gcnew System::Windows::Forms::Button());
			this->editRegistrationBTN = (gcnew System::Windows::Forms::Button());
			this->membersPNL = (gcnew System::Windows::Forms::Panel());
			this->editMemberBTN = (gcnew System::Windows::Forms::Button());
			this->exportMemberBTN = (gcnew System::Windows::Forms::Button());
			this->addMemberBTN = (gcnew System::Windows::Forms::Button());
			this->addMemberPNL = (gcnew System::Windows::Forms::Panel());
			this->editMemberPNL = (gcnew System::Windows::Forms::Panel());
			this->exportMembersPNL = (gcnew System::Windows::Forms::Panel());
			this->settingsPNL = (gcnew System::Windows::Forms::Panel());
			this->top->SuspendLayout();
			this->navipanel->SuspendLayout();
			this->logopanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->EventsPNL->SuspendLayout();
			this->membersPNL->SuspendLayout();
			this->SuspendLayout();
			// 
			// trackDaysLBL
			// 
			this->trackDaysLBL->AutoSize = true;
			this->trackDaysLBL->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trackDaysLBL->ForeColor = System::Drawing::SystemColors::Control;
			this->trackDaysLBL->Location = System::Drawing::Point(12, 9);
			this->trackDaysLBL->Name = L"trackDaysLBL";
			this->trackDaysLBL->Size = System::Drawing::Size(167, 36);
			this->trackDaysLBL->TabIndex = 0;
			this->trackDaysLBL->Text = L"Track Days";
			// 
			// addMemberBTN
			// 
			this->addMemberBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->addMemberBTN->FlatAppearance->BorderSize = 0;
			this->addMemberBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addMemberBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addMemberBTN->ForeColor = System::Drawing::Color::White;
			this->addMemberBTN->Location = System::Drawing::Point(0, 0);
			this->addMemberBTN->Name = L"addMemberBTN";
			this->addMemberBTN->Size = System::Drawing::Size(230, 50);
			this->addMemberBTN->TabIndex = 5;
			this->addMemberBTN->Text = L"Add Member";
			this->addMemberBTN->UseVisualStyleBackColor = false;
			this->addMemberBTN->Click += gcnew System::EventHandler(this, &MainForm::addMemberBTN_Click);
			// 
			// exportMemberBTN
			// 
			this->exportMemberBTN->BackColor = System::Drawing::Color::Indigo;
			this->exportMemberBTN->FlatAppearance->BorderSize = 0;
			this->exportMemberBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportMemberBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exportMemberBTN->ForeColor = System::Drawing::Color::White;
			this->exportMemberBTN->Location = System::Drawing::Point(460, 0);
			this->exportMemberBTN->Name = L"exportMemberBTN";
			this->exportMemberBTN->Size = System::Drawing::Size(230, 50);
			this->exportMemberBTN->TabIndex = 7;
			this->exportMemberBTN->Text = L"Export Members";
			this->exportMemberBTN->UseVisualStyleBackColor = false;
			this->exportMemberBTN->Click += gcnew System::EventHandler(this, &MainForm::exportMemberBTN_Click);
			// 
			// naviLBL
			// 
			this->naviLBL->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->naviLBL->ForeColor = System::Drawing::Color::DimGray;
			this->naviLBL->Location = System::Drawing::Point(362, 9);
			this->naviLBL->Name = L"naviLBL";
			this->naviLBL->Size = System::Drawing::Size(326, 36);
			this->naviLBL->TabIndex = 4;
			this->naviLBL->Text = L"Add Member";
			this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// top
			// 
			this->top->BackColor = System::Drawing::Color::White;
			this->top->Controls->Add(this->naviLBL);
			this->top->Dock = System::Windows::Forms::DockStyle::Top;
			this->top->Location = System::Drawing::Point(196, 0);
			this->top->Name = L"top";
			this->top->Size = System::Drawing::Size(690, 54);
			this->top->TabIndex = 1;
			// 
			// membersBTN
			// 
			this->membersBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->membersBTN->FlatAppearance->BorderSize = 0;
			this->membersBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->membersBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->membersBTN->ForeColor = System::Drawing::Color::Silver;
			this->membersBTN->Location = System::Drawing::Point(0, 81);
			this->membersBTN->Name = L"membersBTN";
			this->membersBTN->Size = System::Drawing::Size(196, 71);
			this->membersBTN->TabIndex = 1;
			this->membersBTN->Text = L"Members";
			this->membersBTN->UseVisualStyleBackColor = false;
			this->membersBTN->Click += gcnew System::EventHandler(this, &MainForm::button_Click);
			// 
			// eventsBTN
			// 
			this->eventsBTN->FlatAppearance->BorderSize = 0;
			this->eventsBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eventsBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eventsBTN->ForeColor = System::Drawing::Color::Silver;
			this->eventsBTN->Location = System::Drawing::Point(0, 158);
			this->eventsBTN->Name = L"eventsBTN";
			this->eventsBTN->Size = System::Drawing::Size(196, 71);
			this->eventsBTN->TabIndex = 3;
			this->eventsBTN->Text = L"Events";
			this->eventsBTN->UseVisualStyleBackColor = true;
			this->eventsBTN->Click += gcnew System::EventHandler(this, &MainForm::eventsBTN_Click);
			// 
			// logo
			// 
			this->logo->BackColor = System::Drawing::Color::Transparent;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(0, 322);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(194, 54);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logo->TabIndex = 2;
			this->logo->TabStop = false;
			// 
			// settingsBTN
			// 
			this->settingsBTN->FlatAppearance->BorderSize = 0;
			this->settingsBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingsBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsBTN->ForeColor = System::Drawing::Color::Silver;
			this->settingsBTN->Location = System::Drawing::Point(0, 235);
			this->settingsBTN->Name = L"settingsBTN";
			this->settingsBTN->Size = System::Drawing::Size(196, 71);
			this->settingsBTN->TabIndex = 4;
			this->settingsBTN->Text = L"Settings";
			this->settingsBTN->UseVisualStyleBackColor = true;
			this->settingsBTN->Click += gcnew System::EventHandler(this, &MainForm::settingsBTN_Click);
			// 
			// navipanel
			// 
			this->navipanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->navipanel->Controls->Add(this->logopanel);
			this->navipanel->Controls->Add(this->membersBTN);
			this->navipanel->Controls->Add(this->eventsBTN);
			this->navipanel->Controls->Add(this->settingsBTN);
			this->navipanel->Controls->Add(this->logo);
			this->navipanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->navipanel->Location = System::Drawing::Point(0, 0);
			this->navipanel->Name = L"navipanel";
			this->navipanel->Size = System::Drawing::Size(196, 400);
			this->navipanel->TabIndex = 0;
			// 
			// logopanel
			// 
			this->logopanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->logopanel->Controls->Add(this->trackDaysLBL);
			this->logopanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->logopanel->Location = System::Drawing::Point(0, 0);
			this->logopanel->Name = L"logopanel";
			this->logopanel->Size = System::Drawing::Size(196, 54);
			this->logopanel->TabIndex = 0;
			// 
			// membersPNL
			// 
			this->membersPNL->Controls->Add(this->editMemberBTN);
			this->membersPNL->Controls->Add(this->exportMemberBTN);
			this->membersPNL->Controls->Add(this->addMemberBTN);
			this->membersPNL->Controls->Add(this->addMemberPNL);
			this->membersPNL->Controls->Add(this->editMemberPNL);
			this->membersPNL->Controls->Add(this->exportMembersPNL);
			this->membersPNL->Location = System::Drawing::Point(196, 54);
			this->membersPNL->Name = L"membersPNL";
			this->membersPNL->Size = System::Drawing::Size(690, 340);
			this->membersPNL->TabIndex = 8;
			// 
			// editMemberBTN
			// 
			this->editMemberBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->editMemberBTN->FlatAppearance->BorderSize = 0;
			this->editMemberBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editMemberBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editMemberBTN->ForeColor = System::Drawing::Color::White;
			this->editMemberBTN->Location = System::Drawing::Point(230, 0);
			this->editMemberBTN->Name = L"editMemberBTN";
			this->editMemberBTN->Size = System::Drawing::Size(230, 50);
			this->editMemberBTN->TabIndex = 6;
			this->editMemberBTN->Text = L"Edit Member";
			this->editMemberBTN->UseVisualStyleBackColor = false;
			this->editMemberBTN->Click += gcnew System::EventHandler(this, &MainForm::editMemberBTN_Click);
			// 
			// addMemberPNL
			// 
			this->addMemberPNL->Location = System::Drawing::Point(0, 50);
			this->addMemberPNL->Name = L"addMemberPNL";
			this->addMemberPNL->Size = System::Drawing::Size(690, 290);
			this->addMemberPNL->TabIndex = 8;
			// 
			// editMemberPNL
			// 
			this->editMemberPNL->Location = System::Drawing::Point(0, 50);
			this->editMemberPNL->Name = L"editMemberPNL";
			this->editMemberPNL->Size = System::Drawing::Size(690, 290);
			this->editMemberPNL->TabIndex = 9;
			// 
			// exportMembersPNL
			// 
			this->exportMembersPNL->Location = System::Drawing::Point(0, 50);
			this->exportMembersPNL->Name = L"exportMembersPNL";
			this->exportMembersPNL->Size = System::Drawing::Size(690, 290);
			this->exportMembersPNL->TabIndex = 10;
			// 
			// EventsPNL
			// 
			this->EventsPNL->Controls->Add(this->exportDayBTN);
			this->EventsPNL->Controls->Add(this->registerMemberBTN);
			this->EventsPNL->Controls->Add(this->confirmPmtBTN);
			this->EventsPNL->Controls->Add(this->editRegistrationBTN);
			this->EventsPNL->Location = System::Drawing::Point(196, 54);
			this->EventsPNL->Name = L"EventsPNL";
			this->EventsPNL->Size = System::Drawing::Size(690, 340);
			this->EventsPNL->TabIndex = 9;
			// 
			// exportDayBTN
			// 
			this->exportDayBTN->BackColor = System::Drawing::Color::Indigo;
			this->exportDayBTN->FlatAppearance->BorderSize = 0;
			this->exportDayBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportDayBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exportDayBTN->ForeColor = System::Drawing::Color::White;
			this->exportDayBTN->Location = System::Drawing::Point(518, 0);
			this->exportDayBTN->Name = L"exportDayBTN";
			this->exportDayBTN->Size = System::Drawing::Size(172, 50);
			this->exportDayBTN->TabIndex = 11;
			this->exportDayBTN->Text = L"Export Day";
			this->exportDayBTN->UseVisualStyleBackColor = false;
			// 
			// registerMemberBTN
			// 
			this->registerMemberBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->registerMemberBTN->FlatAppearance->BorderSize = 0;
			this->registerMemberBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerMemberBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerMemberBTN->ForeColor = System::Drawing::Color::White;
			this->registerMemberBTN->Location = System::Drawing::Point(0, 0);
			this->registerMemberBTN->Name = L"registerMemberBTN";
			this->registerMemberBTN->Size = System::Drawing::Size(174, 50);
			this->registerMemberBTN->TabIndex = 9;
			this->registerMemberBTN->Text = L"Register Member";
			this->registerMemberBTN->UseVisualStyleBackColor = false;
			this->registerMemberBTN->Click += gcnew System::EventHandler(this, &MainForm::registerMemberBTN_Click);
			// 
			// confirmPmtBTN
			// 
			this->confirmPmtBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->confirmPmtBTN->FlatAppearance->BorderSize = 0;
			this->confirmPmtBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmPmtBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPmtBTN->ForeColor = System::Drawing::Color::White;
			this->confirmPmtBTN->Location = System::Drawing::Point(174, 0);
			this->confirmPmtBTN->Name = L"confirmPmtBTN";
			this->confirmPmtBTN->Size = System::Drawing::Size(172, 50);
			this->confirmPmtBTN->TabIndex = 8;
			this->confirmPmtBTN->Text = L"Confirm Payment ";
			this->confirmPmtBTN->UseVisualStyleBackColor = false;
			// 
			// editRegistrationBTN
			// 
			this->editRegistrationBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->editRegistrationBTN->FlatAppearance->BorderSize = 0;
			this->editRegistrationBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editRegistrationBTN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editRegistrationBTN->ForeColor = System::Drawing::Color::White;
			this->editRegistrationBTN->Location = System::Drawing::Point(346, 0);
			this->editRegistrationBTN->Name = L"editRegistrationBTN";
			this->editRegistrationBTN->Size = System::Drawing::Size(172, 50);
			this->editRegistrationBTN->TabIndex = 7;
			this->editRegistrationBTN->Text = L"Edit Registration";
			this->editRegistrationBTN->UseVisualStyleBackColor = false;
			// 
			// settingsPNL
			// 
			this->settingsPNL->Location = System::Drawing::Point(196, 54);
			this->settingsPNL->Name = L"settingsPNL";
			this->settingsPNL->Size = System::Drawing::Size(690, 340);
			this->settingsPNL->TabIndex = 10;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(886, 400);
			this->Controls->Add(this->top);
			this->Controls->Add(this->navipanel);
			this->Controls->Add(this->EventsPNL);
			this->Controls->Add(this->membersPNL);
			this->Controls->Add(this->settingsPNL);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"KSR";
			this->TopMost = true;
			this->top->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->navipanel->ResumeLayout(false);
			this->logopanel->ResumeLayout(false);
			this->logopanel->PerformLayout();
			this->membersPNL->ResumeLayout(false);
			this->EventsPNL->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
	// handling coloring of side buttons
	this->membersBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
		static_cast<System::Int32>(static_cast<System::Byte>(115)));
	this->eventsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));
	this->settingsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));

	//naviLBL
	this->naviLBL->Text = "Add Member";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

	// handling of panels
	this->membersPNL->Show();
	this->EventsPNL->Hide();
	this->settingsPNL->Hide();
}
private: System::Void eventsBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	// handling coloring of side buttons
	this->eventsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
		static_cast<System::Int32>(static_cast<System::Byte>(115)));
	this->membersBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));
	this->settingsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));

	//naviLBL
	this->naviLBL->Text = "Events";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

	// handling of panels
	this->membersPNL->Hide();
	this->EventsPNL->Show();
	this->settingsPNL->Hide();
}


private: System::Void settingsBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	// handling coloring of side buttons
	this->settingsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
		static_cast<System::Int32>(static_cast<System::Byte>(115)));
	this->membersBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));
	this->eventsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
		static_cast<System::Int32>(static_cast<System::Byte>(75)));

	//naviLBL
	this->naviLBL->Text = "Settings";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

	// handling of panels
	this->membersPNL->Hide();
	this->EventsPNL->Hide();
	this->settingsPNL->Show();
}

private: System::Void addMemberBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	this->naviLBL->Text = "Add Member";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
}

private: System::Void editMemberBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	this->naviLBL->Text = "Edit Member";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
}

private: System::Void exportMemberBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	this->naviLBL->Text = "Export Member";
	this->naviLBL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
}

private: System::Void registerMemberBTN_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

