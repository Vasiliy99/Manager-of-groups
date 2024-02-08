#include "Table.h"


Table::Table() {
    day_list = LinkedList<DayGroup>();
    night_list = LinkedList<NightGroup>();
    pay_list = LinkedList<PayGroup>();
}

void Table::insert(int index, DayGroup group) {
    if (day_list.find_by_index(index) < 0)
        day_list.push_back(index, group);
    else {
        throw std::exception("Группа с таким индексом уже существует!");
    }
}

void Table::insert(int index, NightGroup group) {
    if (night_list.find_by_index(index) < 0)
        night_list.push_back(index, group);
    else {
        throw std::exception("Группа с таким индексом уже существует!");
    }
}

void Table::insert(int index, PayGroup group) {
    if (pay_list.find_by_index(index) < 0)
        pay_list.push_back(index, group);
    else {
        throw std::exception("Группа с таким индексом уже существует!");
    }
}

void Table::info(System::Windows::Forms::RichTextBox^ rtb, bool check) const {
    rtb->Text = "";
    day_list.info(rtb, check);
    night_list.info(rtb, check);
    pay_list.info(rtb, check);
}

int Table::find_by_index(int index, System::Windows::Forms::RichTextBox^ rtb) {
    int n;
    rtb->Text = "";
    if (day_list.find_by_index(index) < 0) {
        if (night_list.find_by_index(index) < 0) {
            if (pay_list.find_by_index(index) < 0) {
                rtb->Text = rtb->Text + "Такого индекса не существует!\n";
                return -1;
            }
            else {
                n = pay_list.find_by_index(index);
                pay_list[n]->info(rtb, false);
                return 2;
            }
        }
        else {
            n = night_list.find_by_index(index);
            night_list[n]->info(rtb, false);
            return 1;
        }
    }
    else {
        n = day_list.find_by_index(index);
        day_list[n]->info(rtb, false);
        return 0;
    }
}

void Table::delete_by_index(int index, System::Windows::Forms::RichTextBox^ rtb) {
    int n;
    rtb->Text = "";
    if (day_list.find_by_index(index) < 0) {
        if (night_list.find_by_index(index) < 0) {
            if (pay_list.find_by_index(index) < 0) {
                rtb->Text = rtb->Text + "Группы с таким индексом нет!\n"; // добавить исключение

            }
            else {
                n = pay_list.find_by_index(index);
                pay_list.erase(n);
                rtb->Text = rtb->Text + "Платная группа " + index + " удалена!\n";
            }
        }
        else {
            n = night_list.find_by_index(index);
            night_list.erase(n);
            rtb->Text = rtb->Text + "Вечерняя группа " + index + " удалена!\n";
        }
    }
    else {
        n = day_list.find_by_index(index);
        day_list.erase(n);
        rtb->Text = rtb->Text + "Дневная группа " + index + " удалена!\n";
    }


}

int Table::total_price(System::Windows::Forms::RichTextBox^ rtb) {

    rtb->Text = "";
    int total = pay_list.total_price(rtb);

    rtb->Text = rtb->Text + "Итоговая прибыль: " + total;

    return total;
}

DayGroup Table::return_daygroup(int index) {
    int n;
    n = day_list.find_by_index(index);
    return day_list[n]->return_group();
}

NightGroup Table::return_nightgroup(int index) {
    int n;
    n = night_list.find_by_index(index);
    return night_list[n]->return_group();
}

PayGroup Table::return_paygroup(int index) {
    int n;
    n = pay_list.find_by_index(index);
    return pay_list[n]->return_group();
}

void Table::find_by_cafedra(int cafedra, System::Windows::Forms::RichTextBox^ rtb) {
    day_list.find_by_cafedra(cafedra, rtb);
    night_list.find_by_cafedra(cafedra, rtb);
    pay_list.find_by_cafedra(cafedra, rtb);
}