#pragma once

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int i = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	public:
		array<String^>^ auta;
		array<String^>^ zdj;
	public:
		MyForm(void)
		{
			InitializeComponent();

			auta = gcnew array<String^> {"Ferrari", "Subaru", "BMW"};
			zdj = gcnew array<String^> {"C:\\Users\\1CT\\Documents\\patryk\\arek_aplikacje\\Project3\\pobrane.gif", "C:\\Users\\1CT\\Desktop\\sd\\OIP.jfif", "C:\\Users\\1CT\\Desktop\\sd\\tw72db9e12ba.jpg"};
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	internal: System::Windows::Forms::Timer^ timer1;
	private:
	private: System::ComponentModel::IContainer^ components;
	internal:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(17, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 157);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {


		pictureBox1->Load(zdj[i]);
		i++;
	}
	};
}