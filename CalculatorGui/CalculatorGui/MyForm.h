#pragma once
#include <iostream>

namespace CalculatorGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btspace;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btclear;
	private: System::Windows::Forms::Button^ clearall;
	private: System::Windows::Forms::Button^ btplusminus;
	protected:




	private: System::Windows::Forms::Button^ bt7;
	private: System::Windows::Forms::Button^ bt8;
	private: System::Windows::Forms::Button^ bt9;
	private: System::Windows::Forms::Button^ plussbt;




	private: System::Windows::Forms::Button^ bt6;
	private: System::Windows::Forms::Button^ bt5;
	private: System::Windows::Forms::Button^ bt4;
	private: System::Windows::Forms::Button^ lessbt;




	private: System::Windows::Forms::Button^ bt1;

	private: System::Windows::Forms::Button^ bt2;

	private: System::Windows::Forms::Button^ bt3;
	private: System::Windows::Forms::Button^ multbt;


	private: System::Windows::Forms::Button^ bt0;
	private: System::Windows::Forms::Button^ btdot;
	private: System::Windows::Forms::Button^ btequals;
	private: System::Windows::Forms::Button^ devidbt;





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
			this->btspace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btclear = (gcnew System::Windows::Forms::Button());
			this->clearall = (gcnew System::Windows::Forms::Button());
			this->btplusminus = (gcnew System::Windows::Forms::Button());
			this->bt7 = (gcnew System::Windows::Forms::Button());
			this->bt8 = (gcnew System::Windows::Forms::Button());
			this->bt9 = (gcnew System::Windows::Forms::Button());
			this->plussbt = (gcnew System::Windows::Forms::Button());
			this->bt6 = (gcnew System::Windows::Forms::Button());
			this->bt5 = (gcnew System::Windows::Forms::Button());
			this->bt4 = (gcnew System::Windows::Forms::Button());
			this->lessbt = (gcnew System::Windows::Forms::Button());
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->bt2 = (gcnew System::Windows::Forms::Button());
			this->bt3 = (gcnew System::Windows::Forms::Button());
			this->multbt = (gcnew System::Windows::Forms::Button());
			this->bt0 = (gcnew System::Windows::Forms::Button());
			this->btdot = (gcnew System::Windows::Forms::Button());
			this->btequals = (gcnew System::Windows::Forms::Button());
			this->devidbt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btspace
			// 
			this->btspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btspace->Location = System::Drawing::Point(13, 65);
			this->btspace->Name = L"btspace";
			this->btspace->Size = System::Drawing::Size(60, 60);
			this->btspace->TabIndex = 0;
			this->btspace->Text = L"";
			this->btspace->UseVisualStyleBackColor = true;
			this->btspace->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::btdelete);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(11, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(258, 42);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btclear
			// 
			this->btclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btclear->Location = System::Drawing::Point(79, 65);
			this->btclear->Name = L"btclear";
			this->btclear->Size = System::Drawing::Size(60, 60);
			this->btclear->TabIndex = 0;
			this->btclear->Text = L"C";
			this->btclear->UseVisualStyleBackColor = true;
			this->btclear->Click += gcnew System::EventHandler(this, &MyForm::clear);
			// 
			// clearall
			// 
			this->clearall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearall->Location = System::Drawing::Point(145, 65);
			this->clearall->Name = L"clearall";
			this->clearall->Size = System::Drawing::Size(60, 60);
			this->clearall->TabIndex = 0;
			this->clearall->Text = L"CE";
			this->clearall->UseVisualStyleBackColor = true;
			this->clearall->Click += gcnew System::EventHandler(this, &MyForm::secondclearbtn);
			// 
			// btplusminus
			// 
			this->btplusminus->Font = (gcnew System::Drawing::Font(L"Abril Fatface", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btplusminus->Location = System::Drawing::Point(211, 65);
			this->btplusminus->Name = L"btplusminus";
			this->btplusminus->Size = System::Drawing::Size(60, 60);
			this->btplusminus->TabIndex = 0;
			this->btplusminus->Text = L"±";
			this->btplusminus->UseVisualStyleBackColor = true;
			this->btplusminus->Click += gcnew System::EventHandler(this, &MyForm::plusminus);
			// 
			// bt7
			// 
			this->bt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt7->Location = System::Drawing::Point(14, 131);
			this->bt7->Name = L"bt7";
			this->bt7->Size = System::Drawing::Size(60, 60);
			this->bt7->TabIndex = 0;
			this->bt7->Text = L"7";
			this->bt7->UseVisualStyleBackColor = true;
			this->bt7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt8
			// 
			this->bt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt8->Location = System::Drawing::Point(80, 131);
			this->bt8->Name = L"bt8";
			this->bt8->Size = System::Drawing::Size(60, 60);
			this->bt8->TabIndex = 0;
			this->bt8->Text = L"8";
			this->bt8->UseVisualStyleBackColor = true;
			this->bt8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt9
			// 
			this->bt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt9->Location = System::Drawing::Point(146, 131);
			this->bt9->Name = L"bt9";
			this->bt9->Size = System::Drawing::Size(60, 60);
			this->bt9->TabIndex = 0;
			this->bt9->Text = L"9";
			this->bt9->UseVisualStyleBackColor = true;
			this->bt9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// plussbt
			// 
			this->plussbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plussbt->Location = System::Drawing::Point(212, 131);
			this->plussbt->Name = L"plussbt";
			this->plussbt->Size = System::Drawing::Size(60, 60);
			this->plussbt->TabIndex = 0;
			this->plussbt->Text = L"+";
			this->plussbt->UseVisualStyleBackColor = true;
			this->plussbt->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// bt6
			// 
			this->bt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt6->Location = System::Drawing::Point(14, 197);
			this->bt6->Name = L"bt6";
			this->bt6->Size = System::Drawing::Size(60, 60);
			this->bt6->TabIndex = 0;
			this->bt6->Text = L"6";
			this->bt6->UseVisualStyleBackColor = true;
			this->bt6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt5
			// 
			this->bt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt5->Location = System::Drawing::Point(80, 197);
			this->bt5->Name = L"bt5";
			this->bt5->Size = System::Drawing::Size(60, 60);
			this->bt5->TabIndex = 0;
			this->bt5->Text = L"5";
			this->bt5->UseVisualStyleBackColor = true;
			this->bt5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt4
			// 
			this->bt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt4->Location = System::Drawing::Point(146, 197);
			this->bt4->Name = L"bt4";
			this->bt4->Size = System::Drawing::Size(60, 60);
			this->bt4->TabIndex = 0;
			this->bt4->Text = L"4";
			this->bt4->UseVisualStyleBackColor = true;
			this->bt4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// lessbt
			// 
			this->lessbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lessbt->Location = System::Drawing::Point(212, 197);
			this->lessbt->Name = L"lessbt";
			this->lessbt->Size = System::Drawing::Size(60, 60);
			this->lessbt->TabIndex = 0;
			this->lessbt->Text = L"-";
			this->lessbt->UseVisualStyleBackColor = true;
			this->lessbt->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// bt1
			// 
			this->bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt1->Location = System::Drawing::Point(14, 263);
			this->bt1->Name = L"bt1";
			this->bt1->Size = System::Drawing::Size(60, 60);
			this->bt1->TabIndex = 0;
			this->bt1->Text = L"1";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt2
			// 
			this->bt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt2->Location = System::Drawing::Point(80, 263);
			this->bt2->Name = L"bt2";
			this->bt2->Size = System::Drawing::Size(60, 60);
			this->bt2->TabIndex = 0;
			this->bt2->Text = L"2";
			this->bt2->UseVisualStyleBackColor = true;
			this->bt2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bt3
			// 
			this->bt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt3->Location = System::Drawing::Point(146, 263);
			this->bt3->Name = L"bt3";
			this->bt3->Size = System::Drawing::Size(60, 60);
			this->bt3->TabIndex = 0;
			this->bt3->Text = L"3";
			this->bt3->UseVisualStyleBackColor = true;
			this->bt3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// multbt
			// 
			this->multbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multbt->Location = System::Drawing::Point(212, 263);
			this->multbt->Name = L"multbt";
			this->multbt->Size = System::Drawing::Size(60, 60);
			this->multbt->TabIndex = 0;
			this->multbt->Text = L"*";
			this->multbt->UseVisualStyleBackColor = true;
			this->multbt->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// bt0
			// 
			this->bt0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt0->Location = System::Drawing::Point(13, 329);
			this->bt0->Name = L"bt0";
			this->bt0->Size = System::Drawing::Size(60, 60);
			this->bt0->TabIndex = 0;
			this->bt0->Text = L"0";
			this->bt0->UseVisualStyleBackColor = true;
			this->bt0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btdot
			// 
			this->btdot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btdot->Location = System::Drawing::Point(79, 329);
			this->btdot->Name = L"btdot";
			this->btdot->Size = System::Drawing::Size(60, 60);
			this->btdot->TabIndex = 0;
			this->btdot->Text = L".";
			this->btdot->UseVisualStyleBackColor = true;
			this->btdot->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal);
			// 
			// btequals
			// 
			this->btequals->BackColor = System::Drawing::Color::DarkOrchid;
			this->btequals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btequals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btequals->Location = System::Drawing::Point(145, 329);
			this->btequals->Name = L"btequals";
			this->btequals->Size = System::Drawing::Size(60, 60);
			this->btequals->TabIndex = 0;
			this->btequals->Text = L"=";
			this->btequals->UseVisualStyleBackColor = false;
			this->btequals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals);
			// 
			// devidbt
			// 
			this->devidbt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->devidbt->Location = System::Drawing::Point(211, 329);
			this->devidbt->Name = L"devidbt";
			this->devidbt->Size = System::Drawing::Size(60, 60);
			this->devidbt->TabIndex = 0;
			this->devidbt->Text = L"/";
			this->devidbt->UseVisualStyleBackColor = true;
			this->devidbt->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 405);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->devidbt);
			this->Controls->Add(this->btequals);
			this->Controls->Add(this->multbt);
			this->Controls->Add(this->bt3);
			this->Controls->Add(this->lessbt);
			this->Controls->Add(this->bt4);
			this->Controls->Add(this->btdot);
			this->Controls->Add(this->plussbt);
			this->Controls->Add(this->bt2);
			this->Controls->Add(this->bt9);
			this->Controls->Add(this->bt5);
			this->Controls->Add(this->bt0);
			this->Controls->Add(this->btplusminus);
			this->Controls->Add(this->bt1);
			this->Controls->Add(this->bt8);
			this->Controls->Add(this->bt6);
			this->Controls->Add(this->clearall);
			this->Controls->Add(this->bt7);
			this->Controls->Add(this->btclear);
			this->Controls->Add(this->btspace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstdigit, seconddigit, result;
		String^ operators;



	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text == "0") {
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;

	}
}
private: System::Void EnterOperators(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOps = safe_cast<Button^>(sender);
	firstdigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	operators = NumbersOps->Text;

}
private: System::Void btnDecimal(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}


private: System::Void btnEquals(System::Object^ sender, System::EventArgs^ e) {

	seconddigit = Double::Parse(txtDisplay->Text);

	if (operators == "+") {
		result = firstdigit + seconddigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstdigit - seconddigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*") {
		result = firstdigit * seconddigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstdigit / seconddigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}


}
private: System::Void clear(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";

}
private: System::Void secondclearbtn(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";

}
private: System::Void plusminus(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void btdelete(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}

	if (txtDisplay->Text=="") {
		txtDisplay->Text = "0";
	}
}
};
}
