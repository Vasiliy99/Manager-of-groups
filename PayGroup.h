#ifndef STUDENTS_PAYGROUP_H_
#define STUDENTS_PAYGROUP_H_

#include <iostream>
#include <string>

class PayGroup {

    int size = 0;
    int cafedra = 0;
    std::string specialization = "";
    int duration = 0;
    int contract_number = 0;
    int price = 0;

public:

    PayGroup();
    PayGroup(int, int, std::string, int, int, int);
    ~PayGroup();

    int return_size() const;
    int return_cafedra() const;
    std::string return_specialization() const;
    int return_duration() const;
    int return_contract_number() const;
    int return_price() const;
    std::string return_lerning_form() const;
    void set_size(int);
    void set_price(int);
    void info(System::Windows::Forms::RichTextBox^, bool) const;
    int total_price();

};

#endif // STUDENTS_PAYGROUP_H_