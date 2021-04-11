//
// Created by root on 2021/3/5.
//

#ifndef WORKER_MANAGEMENT_WORKER_H
#define WORKER_MANAGEMENT_WORKER_H

#include <IOSTREAM>
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


#endif //WORKER_MANAGEMENT_WORKER_H
