#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Liczba1;
	protected:
	private: System::Windows::Forms::TextBox^  Liczba2;
	private: System::Windows::Forms::TextBox^  Dzialanie;
	private: System::Windows::Forms::Button^  PrzyciskDzielenia;
	private: System::Windows::Forms::Button^  PrzyciskMnozenia;
	private: System::Windows::Forms::Label^  etykieta1;
	private: System::Windows::Forms::TextBox^  TekstImie;
	private: System::Windows::Forms::TextBox^  TekstNazwisko;
	private: System::Windows::Forms::TextBox^  TekstDataUr;





	private: System::Windows::Forms::Button^  PrzyciskZakoncz;
	private: System::Windows::Forms::TextBox^  TekstPESEL;
	private: System::Windows::Forms::Label^  PodanyKlient;
	private: System::Windows::Forms::Button^  PrzyciskWprowadzOsobe;



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
			this->Liczba1 = (gcnew System::Windows::Forms::TextBox());
			this->Liczba2 = (gcnew System::Windows::Forms::TextBox());
			this->Dzialanie = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskDzielenia = (gcnew System::Windows::Forms::Button());
			this->PrzyciskMnozenia = (gcnew System::Windows::Forms::Button());
			this->etykieta1 = (gcnew System::Windows::Forms::Label());
			this->TekstImie = (gcnew System::Windows::Forms::TextBox());
			this->TekstNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->TekstDataUr = (gcnew System::Windows::Forms::TextBox());
			this->PrzyciskZakoncz = (gcnew System::Windows::Forms::Button());
			this->TekstPESEL = (gcnew System::Windows::Forms::TextBox());
			this->PodanyKlient = (gcnew System::Windows::Forms::Label());
			this->PrzyciskWprowadzOsobe = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Liczba1
			// 
			this->Liczba1->Location = System::Drawing::Point(808, 252);
			this->Liczba1->Name = L"Liczba1";
			this->Liczba1->Size = System::Drawing::Size(100, 20);
			this->Liczba1->TabIndex = 0;
			this->Liczba1->Text = L"Dzielna";
			// 
			// Liczba2
			// 
			this->Liczba2->Location = System::Drawing::Point(808, 278);
			this->Liczba2->Name = L"Liczba2";
			this->Liczba2->Size = System::Drawing::Size(100, 20);
			this->Liczba2->TabIndex = 1;
			this->Liczba2->Text = L"Dzielnik";
			// 
			// Dzialanie
			// 
			this->Dzialanie->Location = System::Drawing::Point(808, 304);
			this->Dzialanie->Name = L"Dzialanie";
			this->Dzialanie->Size = System::Drawing::Size(100, 20);
			this->Dzialanie->TabIndex = 2;
			this->Dzialanie->Text = L"Wynik";
			// 
			// PrzyciskDzielenia
			// 
			this->PrzyciskDzielenia->Location = System::Drawing::Point(701, 329);
			this->PrzyciskDzielenia->Name = L"PrzyciskDzielenia";
			this->PrzyciskDzielenia->Size = System::Drawing::Size(98, 23);
			this->PrzyciskDzielenia->TabIndex = 3;
			this->PrzyciskDzielenia->Text = L"Wynik Dzielenia";
			this->PrzyciskDzielenia->UseVisualStyleBackColor = true;
			this->PrzyciskDzielenia->Click += gcnew System::EventHandler(this, &Form1::PrzyciskDzielenia_Click);
			// 
			// PrzyciskMnozenia
			// 
			this->PrzyciskMnozenia->Location = System::Drawing::Point(808, 330);
			this->PrzyciskMnozenia->Name = L"PrzyciskMnozenia";
			this->PrzyciskMnozenia->Size = System::Drawing::Size(95, 23);
			this->PrzyciskMnozenia->TabIndex = 4;
			this->PrzyciskMnozenia->Text = L"Wynik Mno¿enia";
			this->PrzyciskMnozenia->UseVisualStyleBackColor = true;
			this->PrzyciskMnozenia->Click += gcnew System::EventHandler(this, &Form1::PrzyciskMnozenia_Click);
			// 
			// etykieta1
			// 
			this->etykieta1->AutoSize = true;
			this->etykieta1->Location = System::Drawing::Point(12, 9);
			this->etykieta1->Name = L"etykieta1";
			this->etykieta1->Size = System::Drawing::Size(55, 13);
			this->etykieta1->TabIndex = 5;
			this->etykieta1->Text = L"Formularz:";
			// 
			// TekstImie
			// 
			this->TekstImie->Location = System::Drawing::Point(12, 38);
			this->TekstImie->Name = L"TekstImie";
			this->TekstImie->Size = System::Drawing::Size(100, 20);
			this->TekstImie->TabIndex = 6;
			this->TekstImie->Text = L"Podaj imiê";
			// 
			// TekstNazwisko
			// 
			this->TekstNazwisko->Location = System::Drawing::Point(12, 64);
			this->TekstNazwisko->Name = L"TekstNazwisko";
			this->TekstNazwisko->Size = System::Drawing::Size(100, 20);
			this->TekstNazwisko->TabIndex = 7;
			this->TekstNazwisko->Text = L"Podaj nazwisko";
			// 
			// TekstDataUr
			// 
			this->TekstDataUr->Location = System::Drawing::Point(12, 90);
			this->TekstDataUr->Multiline = true;
			this->TekstDataUr->Name = L"TekstDataUr";
			this->TekstDataUr->Size = System::Drawing::Size(120, 48);
			this->TekstDataUr->TabIndex = 8;
			this->TekstDataUr->Text = L"Podaj datê urodzenia";
			// 
			// PrzyciskZakoncz
			// 
			this->PrzyciskZakoncz->Location = System::Drawing::Point(842, 9);
			this->PrzyciskZakoncz->Name = L"PrzyciskZakoncz";
			this->PrzyciskZakoncz->Size = System::Drawing::Size(75, 23);
			this->PrzyciskZakoncz->TabIndex = 9;
			this->PrzyciskZakoncz->Text = L"Zakoñcz";
			this->PrzyciskZakoncz->UseVisualStyleBackColor = true;
			this->PrzyciskZakoncz->Click += gcnew System::EventHandler(this, &Form1::PrzyciskZakoncz_Click);
			// 
			// TekstPESEL
			// 
			this->TekstPESEL->Location = System::Drawing::Point(12, 144);
			this->TekstPESEL->Name = L"TekstPESEL";
			this->TekstPESEL->Size = System::Drawing::Size(100, 20);
			this->TekstPESEL->TabIndex = 10;
			this->TekstPESEL->Text = L"Podaj PESEL";
			// 
			// PodanyKlient
			// 
			this->PodanyKlient->AutoSize = true;
			this->PodanyKlient->Location = System::Drawing::Point(212, 9);
			this->PodanyKlient->Name = L"PodanyKlient";
			this->PodanyKlient->Size = System::Drawing::Size(72, 13);
			this->PodanyKlient->TabIndex = 11;
			this->PodanyKlient->Text = L"Podany Klient";
			// 
			// PrzyciskWprowadzOsobe
			// 
			this->PrzyciskWprowadzOsobe->Location = System::Drawing::Point(15, 189);
			this->PrzyciskWprowadzOsobe->Name = L"PrzyciskWprowadzOsobe";
			this->PrzyciskWprowadzOsobe->Size = System::Drawing::Size(117, 60);
			this->PrzyciskWprowadzOsobe->TabIndex = 12;
			this->PrzyciskWprowadzOsobe->Text = L"Dodaj Osobe";
			this->PrzyciskWprowadzOsobe->UseVisualStyleBackColor = true;
			this->PrzyciskWprowadzOsobe->Click += gcnew System::EventHandler(this, &Form1::PrzyciskWprowadzOsobe_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(929, 364);
			this->Controls->Add(this->PrzyciskWprowadzOsobe);
			this->Controls->Add(this->PodanyKlient);
			this->Controls->Add(this->TekstPESEL);
			this->Controls->Add(this->PrzyciskZakoncz);
			this->Controls->Add(this->TekstDataUr);
			this->Controls->Add(this->TekstNazwisko);
			this->Controls->Add(this->TekstImie);
			this->Controls->Add(this->etykieta1);
			this->Controls->Add(this->PrzyciskMnozenia);
			this->Controls->Add(this->PrzyciskDzielenia);
			this->Controls->Add(this->Dzialanie);
			this->Controls->Add(this->Liczba2);
			this->Controls->Add(this->Liczba1);
			this->Name = L"Form1";
			this->Text = L"Dane Klienta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void PrzyciskDzielenia_Click(System::Object^  sender, System::EventArgs^  e) {
	Dzialanie->Text = (Double::Parse(Liczba1->Text) / Double::Parse(Liczba2->Text)).ToString();
}
private: System::Void PrzyciskMnozenia_Click(System::Object^  sender, System::EventArgs^  e) {
	Dzialanie->Text = (Double::Parse(Liczba1->Text) * Double::Parse(Liczba2->Text)).ToString();
}
private: System::Void PrzyciskZakoncz_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void PrzyciskWprowadzOsobe_Click(System::Object^  sender, System::EventArgs^  e) {
	PodanyKlient->Text = TekstImie->Text;
}
};
}

