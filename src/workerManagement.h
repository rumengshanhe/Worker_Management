//
// Created by root on 2021/3/5.
//
#ifndef WORKER_MANAGEMENT_WORKERMANAGEMENT_H
#define WORKER_MANAGEMENT_WORKERMANAGEMENT_H

#include <iostream>
#include <fstream>
#include "worker.h"
#include "personnel.h"
#include "finance.h"
#include "gmo.h"
#include "sales.h"
#include "production.h"
#define PAUSE system("pause");
#define FILE_NAME "record.txt"

using namespace std;

class workerManagement {
public:
    unsigned int currentNum;
    Worker ** workerArray;

    workerManagement();
    ~workerManagement();

    static void drawMenu();
    void addWorker();
    void showWorkers();
    void deleteWorker();
    void editWorker();
    void searchWorker();
    void resetSystem();

private:
    void saveRecord() const;

};


#endif //WORKER_MANAGEMENT_WORKERMANAGEMENT_H
