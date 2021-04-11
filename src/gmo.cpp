//
// Created by root on 2021/3/10.
//

#include "gmo.h"

GMO::GMO(string id, string name, int department, int position, int salary) {
    this->w_Id = id;
    this->w_Name = std::move(name);
    this->w_Department = department;
    this->w_Position = position;
    this->w_Salary = salary;
}

void GMO::get_Info() {
    string deptName;
    string postName;
    deptName = this->get_Department();
    postName = this->get_Position();
    cout << this->w_Id
         << "\t" <<this->w_Name
         << "\t" << deptName << "\t"
         << "\t" << postName
         << "\t" << this->w_Salary << endl;
}

string GMO::get_Department() {
    return "GMO";
}

string GMO::get_Position() {
    switch (this->w_Position) {
        case 1:
            return "CEO\t";
        case 2:
            return "Secretary";
        default:
            return "None";
    }
}
