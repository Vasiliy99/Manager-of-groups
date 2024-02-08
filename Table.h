#ifndef STUDENTS_TABLE_H_
#define STUDENTS_TABLE_H_

#include <iostream>
#include "LinkedList.h"

class Table
{
    LinkedList<DayGroup> day_list;
    LinkedList<NightGroup> night_list;
    LinkedList<PayGroup> pay_list;

public:

    Table();
    void insert(int index, DayGroup group);
    void insert(int index, NightGroup group);
    void insert(int index, PayGroup group);
    void info(System::Windows::Forms::RichTextBox^, bool) const;
    int find_by_index(int, System::Windows::Forms::RichTextBox^);
    void delete_by_index(int, System::Windows::Forms::RichTextBox^);
    int total_price(System::Windows::Forms::RichTextBox^);
    DayGroup return_daygroup(int index);
    NightGroup return_nightgroup(int index);
    PayGroup return_paygroup(int index);
    void find_by_cafedra(int, System::Windows::Forms::RichTextBox^);
};

#endif // STUDENTS_PAYGROUP_H_