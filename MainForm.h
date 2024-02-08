#pragma once
#include "DayGroup.h"
#include "NightGroup.h"
#include "PayGroup.h"
#include "Node.h"
//#include "LinkedList.h"
#include "Table.h"
#include "AddForm.h"


namespace studentsgroup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		Table* table = new Table;

	public:

		MainForm(void)
		{
			InitializeComponent();


			DayGroup a1(35, 965, "Ондометрическое обеспечение костоломного сектора", 5, 3500, 17);
			DayGroup a2(27, 963, "Эксплуатация костоломного оборудования", 4, 2700, 14);
			NightGroup b1(13, 635, "Эксплуатация амортизирующего оборудования", 5, "Позитивно-настроенный на учебу", "магистр");
			PayGroup c1(15, 963, "Многоцелевая амбудснатурализация", 5, 567, 75000);
			PayGroup c2(23, 781, "Програмно-алгоретмичесая сейсмоуляция", 4, 568, 47000);

			//Table table;
			table->insert(111, a1);
			table->insert(112, b1);
			table->insert(113, c1);
			table->insert(114, a2);
			table->insert(115, c2);
			//table->insert(116, a2);


			table->info(richTextBox1, false);
		}

	protected:

		~MainForm()
		{
			if (components)
			{
				delete components;
				delete table;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ show_full_info;
	private: System::Windows::Forms::Button^ find_by_index;
	private: System::Windows::Forms::TextBox^ index;
	private: System::Windows::Forms::Button^ delete_by_index;
	private: System::Windows::Forms::TextBox^ index_to_delete;
	private: System::Windows::Forms::Button^ add_group;
	private: System::Windows::Forms::Button^ add_night_group;
	private: System::Windows::Forms::Button^ add_pay_group;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ price_btn;
	private: System::Windows::Forms::TextBox^ change_index;

	private: System::Windows::Forms::Button^ change_btn;
	private: System::Windows::Forms::TextBox^ textBox_cafedra;
	private: System::Windows::Forms::Button^ find_by_cafedra;







	protected:

	protected:

	protected:


	protected:


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->show_full_info = (gcnew System::Windows::Forms::Button());
			this->find_by_index = (gcnew System::Windows::Forms::Button());
			this->index = (gcnew System::Windows::Forms::TextBox());
			this->delete_by_index = (gcnew System::Windows::Forms::Button());
			this->index_to_delete = (gcnew System::Windows::Forms::TextBox());
			this->add_group = (gcnew System::Windows::Forms::Button());
			this->add_night_group = (gcnew System::Windows::Forms::Button());
			this->add_pay_group = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->price_btn = (gcnew System::Windows::Forms::Button());
			this->change_index = (gcnew System::Windows::Forms::TextBox());
			this->change_btn = (gcnew System::Windows::Forms::Button());
			this->textBox_cafedra = (gcnew System::Windows::Forms::TextBox());
			this->find_by_cafedra = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(249, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(539, 576);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::richTextBox1_TextChanged);
			// 
			// show_full_info
			// 
			this->show_full_info->Location = System::Drawing::Point(12, 12);
			this->show_full_info->Name = L"show_full_info";
			this->show_full_info->Size = System::Drawing::Size(230, 40);
			this->show_full_info->TabIndex = 1;
			this->show_full_info->Text = L"Показать все группы";
			this->show_full_info->UseVisualStyleBackColor = true;
			this->show_full_info->Click += gcnew System::EventHandler(this, &MainForm::show_full_info_Click);
			// 
			// find_by_index
			// 
			this->find_by_index->Location = System::Drawing::Point(12, 77);
			this->find_by_index->Name = L"find_by_index";
			this->find_by_index->Size = System::Drawing::Size(75, 40);
			this->find_by_index->TabIndex = 2;
			this->find_by_index->Text = L"Поиск по индексу";
			this->find_by_index->UseVisualStyleBackColor = true;
			this->find_by_index->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// index
			// 
			this->index->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->index->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->index->Location = System::Drawing::Point(93, 77);
			this->index->MaximumSize = System::Drawing::Size(149, 40);
			this->index->MinimumSize = System::Drawing::Size(149, 40);
			this->index->Multiline = true;
			this->index->Name = L"index";
			this->index->Size = System::Drawing::Size(149, 40);
			this->index->TabIndex = 3;
			this->index->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// delete_by_index
			// 
			this->delete_by_index->Location = System::Drawing::Point(12, 123);
			this->delete_by_index->Name = L"delete_by_index";
			this->delete_by_index->Size = System::Drawing::Size(75, 40);
			this->delete_by_index->TabIndex = 4;
			this->delete_by_index->Text = L"Удалить по индексу";
			this->delete_by_index->UseVisualStyleBackColor = true;
			this->delete_by_index->Click += gcnew System::EventHandler(this, &MainForm::delete_by_index_Click);
			// 
			// index_to_delete
			// 
			this->index_to_delete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->index_to_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->index_to_delete->Location = System::Drawing::Point(94, 123);
			this->index_to_delete->MaximumSize = System::Drawing::Size(149, 40);
			this->index_to_delete->MinimumSize = System::Drawing::Size(149, 40);
			this->index_to_delete->Multiline = true;
			this->index_to_delete->Name = L"index_to_delete";
			this->index_to_delete->Size = System::Drawing::Size(149, 40);
			this->index_to_delete->TabIndex = 5;
			this->index_to_delete->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// add_group
			// 
			this->add_group->Location = System::Drawing::Point(12, 215);
			this->add_group->Name = L"add_group";
			this->add_group->Size = System::Drawing::Size(231, 40);
			this->add_group->TabIndex = 6;
			this->add_group->Text = L"Добавить дневную группу";
			this->add_group->UseVisualStyleBackColor = true;
			this->add_group->Click += gcnew System::EventHandler(this, &MainForm::add_group_Click);
			// 
			// add_night_group
			// 
			this->add_night_group->Location = System::Drawing::Point(11, 261);
			this->add_night_group->Name = L"add_night_group";
			this->add_night_group->Size = System::Drawing::Size(231, 40);
			this->add_night_group->TabIndex = 7;
			this->add_night_group->Text = L"Добавить вечернюю группу";
			this->add_night_group->UseVisualStyleBackColor = true;
			this->add_night_group->Click += gcnew System::EventHandler(this, &MainForm::add_night_group_Click);
			// 
			// add_pay_group
			// 
			this->add_pay_group->Location = System::Drawing::Point(11, 307);
			this->add_pay_group->Name = L"add_pay_group";
			this->add_pay_group->Size = System::Drawing::Size(231, 40);
			this->add_pay_group->TabIndex = 8;
			this->add_pay_group->Text = L"Добавить платную группу";
			this->add_pay_group->UseVisualStyleBackColor = true;
			this->add_pay_group->Click += gcnew System::EventHandler(this, &MainForm::add_pay_group_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 54);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Скрыть описание";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// price_btn
			// 
			this->price_btn->Location = System::Drawing::Point(11, 353);
			this->price_btn->Name = L"price_btn";
			this->price_btn->Size = System::Drawing::Size(231, 40);
			this->price_btn->TabIndex = 10;
			this->price_btn->Text = L"Расчет итоговой прибыли";
			this->price_btn->UseVisualStyleBackColor = true;
			this->price_btn->Click += gcnew System::EventHandler(this, &MainForm::price_btn_Click);
			// 
			// change_index
			// 
			this->change_index->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->change_index->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->change_index->Location = System::Drawing::Point(94, 169);
			this->change_index->MaximumSize = System::Drawing::Size(149, 40);
			this->change_index->MinimumSize = System::Drawing::Size(149, 40);
			this->change_index->Multiline = true;
			this->change_index->Name = L"change_index";
			this->change_index->Size = System::Drawing::Size(149, 40);
			this->change_index->TabIndex = 12;
			this->change_index->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// change_btn
			// 
			this->change_btn->Location = System::Drawing::Point(12, 169);
			this->change_btn->Name = L"change_btn";
			this->change_btn->Size = System::Drawing::Size(75, 40);
			this->change_btn->TabIndex = 11;
			this->change_btn->Text = L"Изменить хар-ки";
			this->change_btn->UseVisualStyleBackColor = true;
			this->change_btn->Click += gcnew System::EventHandler(this, &MainForm::change_btn_Click);
			// 
			// textBox_cafedra
			// 
			this->textBox_cafedra->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_cafedra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox_cafedra->Location = System::Drawing::Point(94, 399);
			this->textBox_cafedra->MaximumSize = System::Drawing::Size(149, 58);
			this->textBox_cafedra->MinimumSize = System::Drawing::Size(149, 58);
			this->textBox_cafedra->Multiline = true;
			this->textBox_cafedra->Name = L"textBox_cafedra";
			this->textBox_cafedra->Size = System::Drawing::Size(149, 58);
			this->textBox_cafedra->TabIndex = 14;
			this->textBox_cafedra->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// find_by_cafedra
			// 
			this->find_by_cafedra->Location = System::Drawing::Point(12, 399);
			this->find_by_cafedra->Name = L"find_by_cafedra";
			this->find_by_cafedra->Size = System::Drawing::Size(75, 58);
			this->find_by_cafedra->TabIndex = 13;
			this->find_by_cafedra->Text = L"Показать группы кафедры";
			this->find_by_cafedra->UseVisualStyleBackColor = true;
			this->find_by_cafedra->Click += gcnew System::EventHandler(this, &MainForm::find_by_cafedra_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->textBox_cafedra);
			this->Controls->Add(this->find_by_cafedra);
			this->Controls->Add(this->change_index);
			this->Controls->Add(this->change_btn);
			this->Controls->Add(this->price_btn);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->add_pay_group);
			this->Controls->Add(this->add_night_group);
			this->Controls->Add(this->add_group);
			this->Controls->Add(this->index_to_delete);
			this->Controls->Add(this->delete_by_index);
			this->Controls->Add(this->index);
			this->Controls->Add(this->find_by_index);
			this->Controls->Add(this->show_full_info);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MainForm";
			this->Text = L"Students";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void show_full_info_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check = checkBox1->Checked;
		table->info(richTextBox1, check);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int group_index = int::Parse(index->Text);
			table->find_by_index(group_index, richTextBox1);
		}
		catch (Exception^ ex) {
			richTextBox1->Text = "!!! ОШИБКА ВВОДА !!!";
		}
	}
	private: System::Void delete_by_index_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int group_index = int::Parse(index_to_delete->Text);
			table->delete_by_index(group_index, richTextBox1);
		}
		catch (Exception^ ex) {
			richTextBox1->Text = "!!! ОШИБКА ВВОДА !!!";
		}
	}
	private: System::Void add_group_Click(System::Object^ sender, System::EventArgs^ e) {
		AddForm^ newForm = gcnew AddForm(0, table, richTextBox1, 0);
		newForm->Show();
	}
	private: System::Void add_night_group_Click(System::Object^ sender, System::EventArgs^ e) {
		AddForm^ newForm = gcnew AddForm(1, table, richTextBox1, 0);
		newForm->Show();
	}
	private: System::Void add_pay_group_Click(System::Object^ sender, System::EventArgs^ e) {
		AddForm^ newForm = gcnew AddForm(2, table, richTextBox1, 0);
		newForm->Show();
	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void price_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		// расчет прибыли от платных групп
		table->total_price(richTextBox1);
	}
	private: System::Void change_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		// изменение характеристики групп
		int group_index = int::Parse(change_index->Text);
		AddForm^ newForm;
		switch (table->find_by_index(group_index, richTextBox1)) {
		case 0:
			newForm = gcnew AddForm(0, table, richTextBox1, group_index);
			newForm->Show();
			break;
		case 1:
			newForm = gcnew AddForm(1, table, richTextBox1, group_index);
			newForm->Show();
			break;
		case 2:
			newForm = gcnew AddForm(2, table, richTextBox1, group_index);
			newForm->Show();
			break;
		case -1:
			richTextBox1->Text = "!!! Группы с таким индексом не существует !!!";
			break;
		}
	}
	private: System::Void find_by_cafedra_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int cafedra = int::Parse(textBox_cafedra->Text);
			richTextBox1->Text = "";
			table->find_by_cafedra(cafedra, richTextBox1);
		}
		catch (Exception^ ex) {
			richTextBox1->Text = "!!! ОШИБКА ВВОДА !!!";
		}
	}
	};
}
