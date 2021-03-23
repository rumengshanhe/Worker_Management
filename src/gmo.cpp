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
    cout << "Worker ID: " << this->w_Id
         << "\tName: " << this->w_Name
         << "\tDepartment: " << this->get_Department()
         << "\tPosition: " << this->get_Position()
         << "\tSalary: " << this->w_Salary << endl;
}

string GMO::get_Department() {
    return "General Manager Office";
}

string GMO::get_Position() {
    switch (this->w_Position) {
        case 1:
            return "CEO";
        case 2:
            return "Secretary";
        default:
            return "None";
    }
}
