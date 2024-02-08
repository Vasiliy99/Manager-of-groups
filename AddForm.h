#pragma once

#include <msclr\marshal_cppstd.h>
#include "Table.h"

using namespace msclr::interop;

namespace studentsgroup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//int check_group;
	//Table* table;
	//RichTextBox* rtb;
	//MainForm^ ff = NULL;

	/// <summary>
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
		int check_group;
		Table* table;
		RichTextBox^ rtb;
		int index;

	public:
		AddForm(int as, Table* ttt, System::Windows::Forms::RichTextBox^ rtb_in, int group_index)
		{
			InitializeComponent();

			table = ttt;
			rtb = rtb_in;
			System::String^ s_str = System::Convert::ToString(group_index); // System::Convert::ToString(c)
			index = group_index;

			if (as == 0) {

				check_group = 0;
				main_label->Text = "Добавить дневную бюджетную группу";
				label1->Text = "Размер группы:";
				label2->Text = "Номер кафедры:";
				label3->Text = "Специалиация:";
				label4->Text = "Срок обучения:";
				label5->Text = "Размер степендии:";
				label6->Text = "Число студентов, получающих стипендию:";
				if (group_index > 0) {
					main_label->Text = "Изменить характеристики дневной бюджетной группы";
					//s_str = group_index;
					textBox7->Text = System::Convert::ToString(group_index);
					textBox7->ReadOnly = true;

					DayGroup temp = table->return_daygroup(group_index);
					std::string str = temp.return_specialization();
					System::String^ s_str = gcnew System::String(str.c_str());

					textBox1->Text = System::Convert::ToString(temp.return_size());
					textBox2->Text = System::Convert::ToString(temp.return_cafedra());
					textBox3->Text = s_str; //System::String(str.c_str())
					textBox4->Text = System::Convert::ToString(temp.return_duration());
					textBox5->Text = System::Convert::ToString(temp.return_scholarship());
					textBox6->Text = System::Convert::ToString(temp.return_scholarship_students());
				}
			}

			if (as == 1) {

				check_group = 1;
				main_label->Text = "Добавить вечернюю бюджетную группу";
				label1->Text = "Размер группы:";
				label2->Text = "Номер кафедры:";
				label3->Text = "Специалиация:";
				label4->Text = "Срок обучения:";
				label5->Text = "Контингент:";
				label6->Text = "Квалификация выпускника:";

				if (group_index > 0) {
					main_label->Text = "Изменить характеристики вечерней бюджетной группы";
					//s_str = group_index;
					textBox7->Text = System::Convert::ToString(group_index);
					textBox7->ReadOnly = true;

					NightGroup temp = table->return_nightgroup(group_index);
					std::string str = temp.return_specialization();
					System::String^ s_str = gcnew System::String(str.c_str());

					textBox1->Text = System::Convert::ToString(temp.return_size());
					textBox2->Text = System::Convert::ToString(temp.return_cafedra());
					textBox3->Text = s_str; //System::String(str.c_str())
					textBox4->Text = System::Convert::ToString(temp.return_duration());
					s_str = gcnew System::String(temp.return_contingent().c_str());
					textBox5->Text = s_str;
					s_str = gcnew System::String(temp.return_student_cvalification().c_str());
					textBox6->Text = s_str;
				}

			}

			if (as == 2) {

				check_group = 2;
				main_label->Text = "Добавить платную группу";
				label1->Text = "Размер группы:";
				label2->Text = "Номер кафедры:";
				label3->Text = "Специалиация:";
				label4->Text = "Срок обучения:";
				label5->Text = "Номер контракта:";
				label6->Text = "Размер платы за семестр:";

				if (group_index > 0) {
					main_label->Text = "Изменить характеристики платной группы";
					//s_str = group_index;
					textBox7->Text = System::Convert::ToString(group_index);
					textBox7->ReadOnly = true;

					PayGroup temp = table->return_paygroup(group_index);
					std::string str = temp.return_specialization();
					System::String^ s_str = gcnew System::String(str.c_str());

					textBox1->Text = System::Convert::ToString(temp.return_size());
					textBox2->Text = System::Convert::ToString(temp.return_cafedra());
					textBox3->Text = s_str; //System::String(str.c_str())
					textBox4->Text = System::Convert::ToString(temp.return_duration());
					textBox5->Text = System::Convert::ToString(temp.return_contract_number());
					textBox6->Text = System::Convert::ToString(temp.return_price());
				}

			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ add_group_btn;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ main_label;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ index_label;

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->add_group_btn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->main_label = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->index_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(13, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 86);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(396, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(13, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(13, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(13, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(13, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// add_group_btn
			// 
			this->add_group_btn->Location = System::Drawing::Point(12, 322);
			this->add_group_btn->Name = L"add_group_btn";
			this->add_group_btn->Size = System::Drawing::Size(560, 35);
			this->add_group_btn->TabIndex = 10;
			this->add_group_btn->Text = L"Добавить группу";
			this->add_group_btn->UseVisualStyleBackColor = true;
			this->add_group_btn->Click += gcnew System::EventHandler(this, &AddForm::add_group_btn_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 124);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(396, 32);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 162);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(396, 32);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(176, 200);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(396, 32);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(176, 238);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(396, 32);
			this->textBox5->TabIndex = 14;
			// 
			// main_label
			// 
			this->main_label->Location = System::Drawing::Point(13, 9);
			this->main_label->Name = L"main_label";
			this->main_label->Size = System::Drawing::Size(555, 24);
			this->main_label->TabIndex = 15;
			this->main_label->Tag = L"";
			this->main_label->Text = L"label6";
			this->main_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->main_label->Click += gcnew System::EventHandler(this, &AddForm::main_label_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(176, 276);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(396, 32);
			this->textBox6->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(13, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(157, 32);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(176, 48);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(396, 32);
			this->textBox7->TabIndex = 19;
			// 
			// index_label
			// 
			this->index_label->Location = System::Drawing::Point(13, 48);
			this->index_label->Name = L"index_label";
			this->index_label->Size = System::Drawing::Size(157, 32);
			this->index_label->TabIndex = 18;
			this->index_label->Text = L"Индекс";
			this->index_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 369);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->index_label);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->main_label);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->add_group_btn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"AddForm";
			this->Text = L"Добавить группу";
			this->Load += gcnew System::EventHandler(this, &AddForm::AddForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void add_group_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check_group == 0) {
			try {
				int size = int::Parse(textBox1->Text);
				int cafedra = int::Parse(textBox2->Text);
				std::string spec = marshal_as<std::string>(textBox3->Text);
				int dur = int::Parse(textBox4->Text);
				int sship = int::Parse(textBox5->Text);
				int sship_stud = int::Parse(textBox6->Text);
				int index = int::Parse(textBox7->Text);


				if (index)
					table->delete_by_index(index, rtb);
				table->insert(index, DayGroup(size, cafedra, spec, dur, sship, sship_stud));
				rtb->Text = "Группа успешно добавлена";
			}

			catch (Exception^ ex) {
				rtb->Text = "!!! ОШИБКА ВВОДА !!!";
			}

			catch (std::string ex) {
				rtb->Text = "!!! ОШИБКА ВВОДА !!!\n";

				//std::string str = return_specialization();
				System::String^ s_str = gcnew System::String(ex.c_str());

				rtb->Text = rtb->Text + s_str;
			}

			this->Close();
		}

		if (check_group == 1) {
			try {
				int size = int::Parse(textBox1->Text);
				int cafedra = int::Parse(textBox2->Text);
				std::string spec = marshal_as<std::string>(textBox3->Text);
				int dur = int::Parse(textBox4->Text);
				std::string cont = marshal_as<std::string>(textBox5->Text);
				std::string cval = marshal_as<std::string>(textBox6->Text);
				int index = int::Parse(textBox7->Text);

				if (index)
					table->delete_by_index(index, rtb);

				table->insert(index, NightGroup(size, cafedra, spec, dur, cont, cval));
				rtb->Text = "Группа успешно добавлена";
			}

			catch (Exception^ ex) {
				rtb->Text = "!!! ОШИБКА ВВОДА !!!";
			}



			this->Close();
		}

		if (check_group == 2) {
			try {
				int size = int::Parse(textBox1->Text);
				int cafedra = int::Parse(textBox2->Text);
				std::string spec = marshal_as<std::string>(textBox3->Text);
				int dur = int::Parse(textBox4->Text);
				int cont = int::Parse(textBox5->Text);
				int price = int::Parse(textBox6->Text);
				int index = int::Parse(textBox7->Text);

				if (index)
					table->delete_by_index(index, rtb);

				table->insert(index, PayGroup(size, cafedra, spec, dur, cont, price));
				rtb->Text = "Группа успешно добавлена";
			}

			catch (Exception^ ex) {
				rtb->Text = "!!! ОШИБКА ВВОДА !!!";
			}

			this->Close();
		}
	}
	private: System::Void main_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
