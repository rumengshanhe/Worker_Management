//
// Created by root on 2021/3/5.
//
#ifndef WORKER_MANAGEMENT_WORKERMANAGEMENT_H
#define WORKER_MANAGEMENT_WORKERMANAGEMENT_H

#include "finance.h"
#include "gmo.h"
#include "personnel.h"
#include "production.h"
#include "sales.h"
#include "worker.h"
#include <fstream>
#include <iostream>
#define PAUSE system("pause");
#define FILE_NAME "record.txt"

using namespace std;

class workerManagement {
  public:
    int currentNum = 0;
    Worker **workerArray;

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
    bool fileisEmpty = false;
    void saveRecord() const;
    int getWorkerNum();
    void initRecord() const;
    void sortById();
    void sortByDept();
    void sortBySalary();
    void displayWorker(Worker **, int);
};

#endif // WORKER_MANAGEMENT_WORKERMANAGEMENT_H
