//
// Created by root on 2021/3/5.
//

#ifndef WORKER_MANAGEMENT_PERSONNEL_H
#define WORKER_MANAGEMENT_PERSONNEL_H

#include "worker.h"

using namespace std;

class Personnel : public Worker {
public:

    Personnel(int id, string name, int department, int position, int salary);

    virtual void get_Info();
    virtual string get_Department();
    virtual string get_Position();
};


#endif //WORKER_MANAGEMENT_PERSONNEL_H
