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
    return "�������� ��������� ������";
}

void NightGroup::set_size(int a) {
    this->size = a;
}

void NightGroup::info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {
    //std::cout << "\n" << " ����� ��������:" << return_lerning_form() << "\n";
    //std::cout << " ������ ������:" << return_size() << "\n";
    //std::cout << " ����� �������:" << return_cafedra() << "\n";
    //std::cout << " ������������:" << return_specialization() << "\n";
    //std::cout << " ���� ��������:" << return_duration() << "\n";
    //std::cout << " ����������:" << return_contingent() << "\n";
    //std::cout << " ������������ ����������:" << return_student_cvalification() << "\n";

    std::string str = return_contingent();
    System::String^ s_str = gcnew System::String(str.c_str());

    rtb->Text = rtb->Text + "\n" + " ����� ��������: " + "�������� ��������� ������" + "\n";

    if (!check) {
        rtb->Text = rtb->Text + " ������ ������:" + return_size() + "\n";
        rtb->Text = rtb->Text + " ����� �������:" + return_cafedra() + "\n";
        rtb->Text = rtb->Text + " ������������:" + s_str + "\n";
        rtb->Text = rtb->Text + " ���� ��������:" + return_duration() + "\n";
        rtb->Text = rtb->Text + " ����������:" + s_str + "\n";

        s_str = gcnew System::String(return_student_cvalification().c_str());

        rtb->Text = rtb->Text + " ������������ ����������:" + s_str + "\n";
    }
}