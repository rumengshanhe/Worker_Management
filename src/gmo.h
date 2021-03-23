//
// Created by root on 2021/3/10.
//

#ifndef WOKER_MANAGEMENT_GMO_H
#define WOKER_MANAGEMENT_GMO_H

#include "worker.h"

using namespace std;

class GMO : public Worker {
public:

    GMO(string id, string name, int department, int position, int salary);

    virtual void get_Info();
    virtual string get_Department();
    virtual string get_Position();
};


#endif //WOKER_MANAGEMENT_GMO_H
