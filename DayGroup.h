#ifndef STUDENTS_DAYGROUP_H_
#define STUDENTS_DAYGROUP_H_

#include <iostream>
#include <string>

class DayGroup {

    int size = 0;
    int cafedra = 0;
    std::string specialization = "";
    int duration = 0;
    int scholarship = 0;
    int scholarship_students = 0;

public:

    DayGroup();
    DayGroup(int, int, std::string, int, int, int);
    DayGroup(const DayGroup&);
    ~DayGroup();

    int return_size() const;
    int return_cafedra() const;
    std::string return_specialization() const;
    int return_duration() const;
    int return_scholarship() const;
    int return_scholarship_students() const;
    std::string return_lerning_form() const;
    void set_size(int);
    void set_scholarship(int);
    void set_scholarship_students(int);
    void info(System::Windows::Forms::RichTextBox^, bool) const;
    //void info() const;

};

#endif // STUDENTS_DAYGROUP_H_