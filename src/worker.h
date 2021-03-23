//
// Created by root on 2021/3/5.
//

#ifndef WOKER_MANAGEMENT_WOKER_H
#define WOKER_MANAGEMENT_WOKER_H

#include <iostream>
#include <string>


using namespace std;

class Worker {
public:
    string w_Id;
    string w_Name;
    int w_Department;
    int w_Position;
    int w_Salary;

    virtual void get_Info() = 0;
    virtual string get_Department() = 0;
    virtual string get_Position() = 0;
};


#endif //WOKER_MANAGEMENT_WOKER_H
