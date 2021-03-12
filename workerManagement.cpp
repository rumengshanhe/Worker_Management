// Created by root on 2021/3/5.

#include "workerManagement.h"

workerManagement::workerManagement() {
    this->currentNum = 0;
    this->workerArray = nullptr;
}
workerManagement::~workerManagement() {
    if (this->workerArray != nullptr) {
        delete[] this->workerArray;
        this->workerArray = nullptr;
    }
}

void workerManagement::drawMenu() {
    cout << "-----------------------------\n"
         << "########   主菜单     ########\n"
         << "######  1.增加职工信息  #######\n"
         << "######  2.显示职工信息  #######\n"
         << "######  3.删除离职员工  #######\n"
         << "######  4.编辑职工信息  #######\n"
         << "######  5.查找职工信息  #######\n"
         << "######  6.重置系统     #######\n"
         << "######  0.退出系统     #######\n"
         << "-----------------------------" << endl;
    cout << "_User_# ";
}

void workerManagement::saveRecord() const {
    ofstream ofs;
    ofs.open(FILE_NAME,ios::out);

    for (int i = 0; i < this->currentNum; ++i) {
        ofs << this->workerArray[i]->w_Id << "  "
            << this->workerArray[i]->w_Name << "  "
            << this->workerArray[i]->w_Department << "  "
            << this->workerArray[i]->w_Position << "  "
            << this->workerArray[i]->w_Salary << endl;
    }
    ofs.close();
}

void workerManagement::addWorker() {
    cout << "How many workers added ? : ";
    int addNum = 0;
    unsigned int newNum;
    cin >> addNum;
    if (addNum <= 0) {
        cout << "Positive Integer expected !" << endl;
        PAUSE
        return;
    } else {
        newNum = this->currentNum + addNum;
        auto ** addSpace = new Worker*[newNum];
        if (this->workerArray != nullptr) {
            for (int i = 0; i < this->currentNum ; ++i) {
                addSpace[i] = this->workerArray[i];
            }
        }
        for (int j = 0; j < addNum; ++j) {
            int tempId;
            string tempName;
            int tempDept;
            int tempPost;
            int tempSalary;

            cout << "Begin to add No." << j + 1 << " worker." << endl;
            cout << "Enter worker's name :";
            cin >> tempName;
            cout << "Enter worker's ID :";
            cin >> tempId;
            cout << "Choose worker's department :\n"
                << "1.GMO - 2.Personnel - 3.Finance - 4.Sales - 5.Production" << endl;
            cin >> tempDept;
            if (tempDept == 1) {
                cout << "Choose worker's position :\n"
                     << "1.CEO - 2.Secretary " << endl;
            } else {
                cout << "Choose worker's position :\n"
                     << "1.Manager - 2.General Staff " << endl;
            }
            cin >> tempPost;
            cout << "Enter worker's salary :";
            cin >> tempSalary;

            Worker * newWorker = nullptr;
            switch (tempDept) {
                case 1:
                    newWorker = (Worker*) new GMO(tempId, tempName, tempDept, tempPost, tempSalary);
                    break;
                case 2:
                    newWorker = (Worker*) new Personnel(tempId, tempName, tempDept, tempPost, tempSalary);
                    break;
                case 3:
                    newWorker = (Worker*) new Finance(tempId, tempName, tempDept, tempPost, tempSalary);
                    break;
                case 4:
                    newWorker = (Worker*) new Sales(tempId, tempName, tempDept, tempPost, tempSalary);
                    break;
                case 5:
                    newWorker = (Worker*) new Production(tempId, tempName, tempDept, tempPost, tempSalary);
                    break;
                default:
                    break;
            }
            addSpace[this->currentNum + j] = newWorker;
        }
        delete [] this->workerArray;
        this->workerArray = addSpace;
        this->currentNum  = newNum;
        if (addNum == 1)
            cout << "Successfully add " << addNum << " worker" << endl;
        else
            cout << "Successfully add " << addNum << " workers" << endl;
    }
    /*****  写文件  *****/
    this->saveRecord();
}

void workerManagement::showWorkers() {
    ifstream ifs;
    ifs.open(FILE_NAME,ios::in);
    

}

void workerManagement::deleteWorker() {

}

void workerManagement::editWorker() {

}

void workerManagement::searchWorker() {

}

void workerManagement::resetSystem() {

}


