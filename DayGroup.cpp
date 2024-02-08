#include "DayGroup.h"


DayGroup::DayGroup() = default;

DayGroup::DayGroup(int size, int cafedra, std::string specialization, int duration, int scholarship, int scholarship_students) {
    if (scholarship_students > size)
        throw (std::string("Ошибка при создании вхдодных данных, число студентов, получающих степендию, больше, чем размер группы"));
    this->size = size;
    this->cafedra = cafedra;
    this->specialization = specialization;
    this->duration = duration;
    this->scholarship = scholarship;
    this->scholarship_students = scholarship_students;
}

DayGroup::DayGroup(const DayGroup& a) {
    this->size = a.size;
    this->cafedra = a.cafedra;
    this->specialization = a.specialization;
    this->duration = a.duration;
    this->scholarship = a.scholarship;
    this->scholarship_students = a.scholarship_students;
}

DayGroup::~DayGroup() = default;

int DayGroup::return_size() const {
    return size;
}

int DayGroup::return_cafedra() const {
    return cafedra;
}

std::string DayGroup::return_specialization() const {
    return specialization;
}

int DayGroup::return_duration() const {
    return duration;
}

int DayGroup::return_scholarship() const {
    return scholarship;
}

int DayGroup::return_scholarship_students() const {
    return scholarship_students;
}

std::string DayGroup::return_lerning_form() const {
    return "Дневная бюджетная группа";
}

void DayGroup::set_size(int a) {
    this->size = a;
}

void DayGroup::set_scholarship(int a) {
    this->scholarship = a;
}

void DayGroup::set_scholarship_students(int a) {
    this->scholarship_students = a;
}

void DayGroup::info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {
    //std::cout << "\n" << " Форма обучения:" << return_lerning_form() << "\n";
    //std::cout << " Размер группы:" << return_size() << "\n";
    //std::cout << " Номер кафедры:" << return_cafedra() << "\n";
    //std::cout << " Специалиация:" << return_specialization() << "\n";
    //std::cout << " Срок обучения:" << return_duration() << "\n";
    //std::cout << " Размер степендии:" << return_scholarship() << "\n";
    //std::cout << " Число студентов, получающих стипендию:" << return_scholarship_students() << "\n";

    std::string str = return_specialization();
    System::String^ s_str = gcnew System::String(str.c_str());

    rtb->Text = rtb->Text + "\n" + " Форма обучения: " + "Дневная бюджетная группа" + "\n";
    if (!check) {
        rtb->Text = rtb->Text + " Размер группы:" + return_size() + "\n";
        rtb->Text = rtb->Text + " Номер кафедры:" + return_cafedra() + "\n";
        rtb->Text = rtb->Text + " Специалиация:" + s_str + "\n";
        rtb->Text = rtb->Text + " Срок обучения:" + return_duration() + "\n";
        rtb->Text = rtb->Text + " Размер степендии:" + return_scholarship() + "\n";
        rtb->Text = rtb->Text + " Число студентов, получающих стипендию:" + return_scholarship_students() + "\n";
    }
}