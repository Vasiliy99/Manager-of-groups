#include "DayGroup.h"


DayGroup::DayGroup() = default;

DayGroup::DayGroup(int size, int cafedra, std::string specialization, int duration, int scholarship, int scholarship_students) {
    if (scholarship_students > size)
        throw (std::string("������ ��� �������� �������� ������, ����� ���������, ���������� ���������, ������, ��� ������ ������"));
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
    return "������� ��������� ������";
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
    //std::cout << "\n" << " ����� ��������:" << return_lerning_form() << "\n";
    //std::cout << " ������ ������:" << return_size() << "\n";
    //std::cout << " ����� �������:" << return_cafedra() << "\n";
    //std::cout << " ������������:" << return_specialization() << "\n";
    //std::cout << " ���� ��������:" << return_duration() << "\n";
    //std::cout << " ������ ���������:" << return_scholarship() << "\n";
    //std::cout << " ����� ���������, ���������� ���������:" << return_scholarship_students() << "\n";

    std::string str = return_specialization();
    System::String^ s_str = gcnew System::String(str.c_str());

    rtb->Text = rtb->Text + "\n" + " ����� ��������: " + "������� ��������� ������" + "\n";
    if (!check) {
        rtb->Text = rtb->Text + " ������ ������:" + return_size() + "\n";
        rtb->Text = rtb->Text + " ����� �������:" + return_cafedra() + "\n";
        rtb->Text = rtb->Text + " ������������:" + s_str + "\n";
        rtb->Text = rtb->Text + " ���� ��������:" + return_duration() + "\n";
        rtb->Text = rtb->Text + " ������ ���������:" + return_scholarship() + "\n";
        rtb->Text = rtb->Text + " ����� ���������, ���������� ���������:" + return_scholarship_students() + "\n";
    }
}