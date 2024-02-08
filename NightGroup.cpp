#include "NightGroup.h"

NightGroup::NightGroup() = default;

NightGroup::NightGroup(int size, int cafedra, std::string specialization, int duration, std::string contingent, std::string student_cvalification) {
    this->size = size;
    this->cafedra = cafedra;
    this->specialization = specialization;
    this->duration = duration;
    this->contingent = contingent;
    this->student_cvalification = student_cvalification;
}

int NightGroup::return_size() const {
    return size;
}

int NightGroup::return_cafedra() const {
    return cafedra;
}

std::string NightGroup::return_specialization() const {
    return specialization;
}

int NightGroup::return_duration() const {
    return duration;
}

std::string NightGroup::return_contingent() const {
    return contingent;
}

std::string NightGroup::return_student_cvalification() const {
    return student_cvalification;
}

NightGroup::~NightGroup() = default;

std::string NightGroup::return_lerning_form() const {
    return "Вечерняя бюджетная группа";
}

void NightGroup::set_size(int a) {
    this->size = a;
}

void NightGroup::info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {
    //std::cout << "\n" << " Форма обучения:" << return_lerning_form() << "\n";
    //std::cout << " Размер группы:" << return_size() << "\n";
    //std::cout << " Номер кафедры:" << return_cafedra() << "\n";
    //std::cout << " Специалиация:" << return_specialization() << "\n";
    //std::cout << " Срок обучения:" << return_duration() << "\n";
    //std::cout << " Контингент:" << return_contingent() << "\n";
    //std::cout << " Квалификация выпускника:" << return_student_cvalification() << "\n";

    std::string str = return_contingent();
    System::String^ s_str = gcnew System::String(str.c_str());

    rtb->Text = rtb->Text + "\n" + " Форма обучения: " + "Вечерняя бюджетная группа" + "\n";

    if (!check) {
        rtb->Text = rtb->Text + " Размер группы:" + return_size() + "\n";
        rtb->Text = rtb->Text + " Номер кафедры:" + return_cafedra() + "\n";
        rtb->Text = rtb->Text + " Специалиация:" + s_str + "\n";
        rtb->Text = rtb->Text + " Срок обучения:" + return_duration() + "\n";
        rtb->Text = rtb->Text + " Контингент:" + s_str + "\n";

        s_str = gcnew System::String(return_student_cvalification().c_str());

        rtb->Text = rtb->Text + " Квалификация выпускника:" + s_str + "\n";
    }
}