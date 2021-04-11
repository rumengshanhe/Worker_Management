//
// Created by root on 2021/3/11.
//

#ifndef WORKER_MANAGEMENT_SALES_H
#define WORKER_MANAGEMENT_SALES_H

#include "worker.h"

using namespace std;

class Sales : public Worker {
public:

    Sales(string id, string name, int department, int position, int salary);

    virtual void get_Info();
    virtual string get_Department();
    virtual string get_Position();
};


#endif //WORKER_MANAGEMENT_SALES_H
