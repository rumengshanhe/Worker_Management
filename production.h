//
// Created by root on 2021/3/11.
//

#ifndef WOKER_MANAGEMENT_PRODUCTION_H
#define WOKER_MANAGEMENT_PRODUCTION_H

#include "worker.h"

using namespace std;

class Production : public Worker {
public:

    Production(int id, string name, int department, int position, int salary);

    virtual void get_Info();
    virtual string get_Department();
    virtual string get_Position();
};


#endif //WOKER_MANAGEMENT_PRODUCTION_H
