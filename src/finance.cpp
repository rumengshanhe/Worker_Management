//
// Created by root on 2021/3/10.
//

#include "finance.h"

Finance::Finance(string id, string name, int department, int position, int salary) {
    this->w_Id = id;
    this->w_Name = std::move(name);
    this->w_Department = department;
    this->w_Position = position;
    this->w_Salary = salary;
}

void Finance::get_Info() {
    cout << "Worker ID: " << this->w_Id
         << "\tName: " << this->w_Name
         << "\tDepartment: " << this->get_Department()
         << "\tPosition: " << this->get_Position()
         << "\tSalary: " << this->w_Salary << endl;
}

string Finance::get_Department() {
    return "Finance";
}

string Finance::get_Position() {
    switch (this->w_Position) {
        case 1:
            return "Manager";
        case 2:
            return "General Staff";
        default:
            return "None";
    }
}

