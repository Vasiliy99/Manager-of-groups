#ifndef STUDENTS_NIGHTGROUP_H_
#define STUDENTS_NIGHTGROUP_H_

#include <iostream>
#include <string>

class NightGroup {

    int size = 0;
    int cafedra = 0;
    std::string specialization = "";
    int duration = 0;
    std::string contingent = "";
    std::string student_cvalification = "";

public:

    NightGroup();
    NightGroup(int, int, std::string, int, std::string, std::string);
    ~NightGroup();

    int return_size() const;
    int return_cafedra() const;
    std::string return_specialization() const;
    int return_duration() const;
    std::string return_contingent() const;
    std::string return_student_cvalification() const;
    std::string return_lerning_form() const;
    void set_size(int);
    void info(System::Windows::Forms::RichTextBox^, bool) const;
    
};

#endif // STUDENTS_NIGHTGROUP_H_