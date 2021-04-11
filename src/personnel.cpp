//
// Created by root on 2021/3/5.
//

#include "personnel.h"
#include <utility>

Personnel::Personnel(string id, string name, int department, int position, int salary) {
    this->w_Id = id;
    this->w_Name = std::move(name);
    this->w_Department = department;
    this->w_Position = position;
    this->w_Salary = salary;
}

void Personnel::get_Info() {
    string deptName;
    string postName;
    deptName = this->get_Department();
    postName = this->get_Position();
    cout << this->w_Id
         << "\t" <<this->w_Name
         << "\t" << deptName
         << "\t" << postName
         << "\t" << this->w_Salary << endl;
}
string Personnel::get_Department() {
    return "Personnel";
}

string Personnel::get_Position() {
    switch (this->w_Position) {
        case 1:
            return "Manager\t";
        case 2:
            return "General Staff";
        default:
            return "None";
    }
}
