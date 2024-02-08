#include "PayGroup.h"


PayGroup::PayGroup() = default;

PayGroup::PayGroup(int size, int cafedra, std::string specialization, int duration, int contract_number, int price) {
    this->size = size;
    this->cafedra = cafedra;
    this->specialization = specialization;
    this->duration = duration;
    this->contract_number = contract_number;
    this->price = price;
}

int PayGroup::return_size() const {
    return size;
}

int PayGroup::return_cafedra() const {
    return cafedra;
}

std::string PayGroup::return_specialization() const {
    return specialization;
}

int PayGroup::return_duration() const {
    return duration;
}

int PayGroup::return_contract_number() const {
    return contract_number;
}

int PayGroup::return_price() const{
    return price;
}

PayGroup::~PayGroup() = default;

std::string PayGroup::return_lerning_form() const {
    return "Платная группа";
}

void PayGroup::set_size(int a) {
    this->size = a;
}

void PayGroup::set_price(int a) {
    this->price = a;
}

void PayGroup::info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {
    //std::cout << "\n" << " Форма обучения:" << return_lerning_form() << "\n";
    //std::cout << " Размер группы:" << return_size() << "\n";
    //std::cout << " Номер кафедры:" << return_cafedra() << "\n";
    //std::cout << " Специалиация:" << return_specialization() << "\n";
    //std::cout << " Срок обучения:" << return_duration() << "\n";
    //std::cout << " Номер контракта:" << return_contract_number() << "\n";
    //std::cout << " Размер платы за семестр:" << return_price() << "\n";

    std::string str = return_specialization();
    System::String^ s_str = gcnew System::String(str.c_str());

    rtb->Text = rtb->Text + "\n" + " Форма обучения: " + "Платная группа" + "\n";
    if (!check) {
        rtb->Text = rtb->Text + " Размер группы:" + return_size() + "\n";
        rtb->Text = rtb->Text + " Номер кафедры:" + return_cafedra() + "\n";
        rtb->Text = rtb->Text + " Специалиация:" + s_str + "\n";
        rtb->Text = rtb->Text + " Срок обучения:" + return_duration() + "\n";
        rtb->Text = rtb->Text + " Номер контракта:" + return_contract_number() + "\n";
        rtb->Text = rtb->Text + " Размер платы за семестр:" + return_price() + "\n";
    }
}

int PayGroup::total_price() {
    return price * 2 * duration * size;
}
