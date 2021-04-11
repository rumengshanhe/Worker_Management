// Created by root on 2021/3/5.

#include "workerManagement.h"

workerManagement::workerManagement() {
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);
    /* 判断文件是否存在或是否为空*/
    char ch;
    if (!ifs.is_open()) {
        this->fileisEmpty = true;
    }
    ifs >> ch;
    if (ifs.eof()) {
        this->fileisEmpty = true;
    }
    if (this->fileisEmpty) {
        cout << "File is empty or not exist!" << endl;
        PAUSE
        this->currentNum = 0;
        this->workerArray = nullptr;
        ifs.close();
        return;
    }
    /* 输出当前员工个数 */
    int num = this->getWorkerNum();
    if (num == 1)
        cout << "There is 1 worker record." << endl;
    else
        cout << "These are " << num << " workers record." << endl;
    this->currentNum = num;
    this->workerArray = new Worker *[this->currentNum];
    this->initRecord();
    PAUSE
}

workerManagement::~workerManagement() {
    /* 清除堆区 */
    if (this->workerArray != nullptr) {
        delete[] this->workerArray;
        this->workerArray = nullptr;
    }
}

void workerManagement::drawMenu() {
    cout << " ________________________________\n"
         << "|########     Menu      #########|\n"
         << "|######   1.Add Worker     ######|\n"
         << "|######   2.Show Worker    ######|\n"
         << "|######   3.Delete Worker  ######|\n"
         << "|######   4.Edit Worker    ######|\n"
         << "|######   5.Find Worker    ######|\n"
         << "|######   6.Reset          ######|\n"
         << "|######   0.Exit          #######|\n"
         << "|________________________________|" << endl;
    cout << "_User_# ";
}

void workerManagement::saveRecord() const {
    //输出流对象
    ofstream ofs;
    //打开文件
    ofs.open(FILE_NAME, ios::out);
    //逐个写入
    for (int i = 0; i < this->currentNum; ++i) {
        ofs << this->workerArray[i]->w_Id << "  "
            << this->workerArray[i]->w_Name << "  "
            << this->workerArray[i]->w_Department << "  "
            << this->workerArray[i]->w_Position << "  "
            << this->workerArray[i]->w_Salary << endl;
    }
    //关闭文件
    ofs.close();
}

int workerManagement::getWorkerNum() {
    /* 获取文件中员工个数 */
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);
    string id1;
    string name1;
    int dept1;
    int post1;
    int salary1;
    int num = 0;
    while (ifs >> id1 && ifs >> name1 && ifs >> dept1 && ifs >> post1 &&
           ifs >> salary1) {
        num++;
    }
    ifs.close();
    return num;
}

void workerManagement::initRecord() const {
    /* 把文件的记录读到结构数组中，完成初始化 */
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);
    string id2;
    string name2;
    int dept2;
    int post2;
    int salary2;
    int index = 0;

    while (ifs >> id2 && ifs >> name2 && ifs >> dept2 && ifs >> post2 &&
           ifs >> salary2) {
        Worker *initWorker = nullptr;
        switch (dept2) {
        case 1:
            initWorker = new GMO(id2, name2, dept2, post2, salary2);
            break;
        case 2:
            initWorker = new Personnel(id2, name2, dept2, post2, salary2);
            break;
        case 3:
            initWorker = new Finance(id2, name2, dept2, post2, salary2);
            break;
        case 4:
            initWorker = new Sales(id2, name2, dept2, post2, salary2);
            break;
        case 5:
            initWorker = new Production(id2, name2, dept2, post2, salary2);
            break;
        default:
            break;
        }
        this->workerArray[index++] = initWorker;
    }
}

void workerManagement::displayWorker(Worker **displayArray, int displayNum) {
    /* 打印函数 */
    cout << "ID\tName\tDepartment\tPosition\tSalary\n"
         << "-------------------------------------------------------" << endl;
    for (int i = 0; i < displayNum; i++) {
        displayArray[i]->get_Info();
    }
}

void workerManagement::sortById() {
    /* 按ID排序输出 */
    Worker **sortArray = new Worker *[this->currentNum];
    for (int i = 0; i < this->currentNum; i++) {
        sortArray[i] = this->workerArray[i];
    }
    Worker *temp = nullptr;
    for (int i = 0; i < this->currentNum; i++) {
        for (int j = this->currentNum - 1; j > i; j--) {
            if (sortArray[i]->w_Id > sortArray[j]->w_Id) {
                temp = sortArray[i];
                sortArray[i] = sortArray[j];
                sortArray[j] = temp;
            }
        }
    }
    this->displayWorker(sortArray, this->currentNum);
    delete[] sortArray;
    PAUSE
}

void workerManagement::sortByDept() {
    /* 按部门排序输出 */
    Worker **sortArray = new Worker *[this->currentNum];
    for (int i = 0; i < this->currentNum; i++) {
        sortArray[i] = this->workerArray[i];
    }
    int k = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < this->currentNum; j++) {
            if (this->workerArray[j]->w_Department == i) {
                sortArray[k++] = this->workerArray[j];
            }
        }
    }
    this->displayWorker(sortArray, this->currentNum);
    delete[] sortArray;
    PAUSE
}

void workerManagement::sortBySalary() {
    /* 按薪资排序输出 */
    Worker **sortArray = new Worker *[this->currentNum];
    for (int i = 0; i < this->currentNum; i++) {
        sortArray[i] = this->workerArray[i];
    }
    Worker *temp = nullptr;
    for (int i = 0; i < this->currentNum; i++) {
        for (int j = this->currentNum - 1; j > i; j--) {
            if (sortArray[i]->w_Salary < sortArray[j]->w_Salary) {
                temp = sortArray[i];
                sortArray[i] = sortArray[j];
                sortArray[j] = temp;
            }
        }
    }
    this->displayWorker(sortArray, this->currentNum);
    delete[] sortArray;
    PAUSE
}

void workerManagement::addWorker() {
    /* 添加员工 */
    cout << "How many workers added ?\n_# ";
    int addNum = 0;
    int newNum;
    cin >> addNum;
    if (addNum <= 0) {
        cout << "Positive Integer expected !" << endl;
        PAUSE
        return;
    } else {
        newNum = this->currentNum + addNum;
        auto **addSpace = new Worker *[newNum];
        if (this->workerArray != nullptr) {
            for (int i = 0; i < this->currentNum; ++i) {
                addSpace[i] = this->workerArray[i];
            }
        }
        for (int j = 0; j < addNum; ++j) {
            string tempId;
            string tempName;
            int tempDept;
            int tempPost;
            int tempSalary;

            cout << "Begin to add No." << j + 1 << " worker." << endl;
            cout << "Enter worker's name :\n_# ";
            cin >> tempName;
            cout << "Enter worker's ID :\n_# ";
            cin >> tempId;
            cout << "Choose worker's department :\n"
                 << "1.GMO - 2.Personnel - 3.Finance - 4.Sales - "
                    "5.Production\n_# "
                 << endl;
            cin >> tempDept;
            if (tempDept == 1) {
                cout << "Choose worker's position :\n"
                     << "1.CEO - 2.Secretary \n_# " << endl;
            } else {
                cout << "Choose worker's position :\n"
                     << "1.Manager - 2.General Staff \n_# " << endl;
            }
            cin >> tempPost;
            cout << "Enter worker's salary :\n_# ";
            cin >> tempSalary;

            Worker *newWorker = nullptr;
            switch (tempDept) {
            case 1:
                newWorker =
                    new GMO(tempId, tempName, tempDept, tempPost, tempSalary);
                break;
            case 2:
                newWorker = new Personnel(tempId, tempName, tempDept, tempPost,
                                          tempSalary);
                break;
            case 3:
                newWorker = new Finance(tempId, tempName, tempDept, tempPost,
                                        tempSalary);
                break;
            case 4:
                newWorker =
                    new Sales(tempId, tempName, tempDept, tempPost, tempSalary);
                break;
            case 5:
                newWorker = new Production(tempId, tempName, tempDept, tempPost,
                                           tempSalary);
                break;
            default:
                break;
            }
            addSpace[this->currentNum + j] = newWorker;
        }
        delete[] this->workerArray;
        this->workerArray = addSpace;
        this->currentNum = newNum;
        if (addNum == 1)
            cout << "Successfully add " << addNum << " worker" << endl;
        else
            cout << "Successfully add " << addNum << " workers" << endl;
    }
    this->fileisEmpty = false;
    //  保存文件
    this->saveRecord();
    PAUSE
}

void workerManagement::showWorkers() {
    /* 显示员工信息 */
    int select = 0;
    cout << "How to display ?\n"
         << "1.Sort by ID - 2.Sort by Department - 3.Sort by Salary\n_# ";
    cin >> select;
    switch (select) {
    case 1:
        this->sortById();
        break;
    case 2:
        this->sortByDept();
        break;
    case 3:
        this->sortBySalary();
        break;
    default:
        break;
    }
}

void workerManagement::deleteWorker() {
    /* 删除员工 */
    string deleteStr;
    int num = 0;
    int *index = new int[this->currentNum];
    Worker **searchArray = new Worker *[this->currentNum];

    while (num != 1) {
        num = 0;
        cout << "Enter ID or Name to delete.\n_# ";
        cin >> deleteStr;
        for (int i = 0; i < this->currentNum; i++) {
            if (this->workerArray[i]->w_Name == deleteStr ||
                this->workerArray[i]->w_Id == deleteStr) {
                searchArray[num] = this->workerArray[i];
                index[num++] = i;
            }
        }
        this->displayWorker(searchArray, num);
        if (num > 1) {
            cout << "Please specify one worker by ID !" << endl;
            PAUSE
        }
    }
    cout << "Confirm ?(y/n)\n_# ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y') {
        for (int i = index[0]; i < this->currentNum - 1; i++) {
            this->workerArray[i] = this->workerArray[i + 1];
        }
        this->currentNum--;
        cout << "Successfully delete." << endl;
        this->saveRecord();
        PAUSE
    }
    delete[] index;
    delete[] searchArray;
    return;
}

void workerManagement::editWorker() {
    /* 编辑员工信息 */
    string editStr;
    int num = 0;
    int *index = new int[this->currentNum];
    Worker **searchArray = new Worker *[this->currentNum];

    while (num != 1) {
        num = 0;
        cout << "Enter ID or Name to edit.\n_# ";
        cin >> editStr;
        for (int i = 0; i < this->currentNum; i++) {
            if (this->workerArray[i]->w_Name == editStr ||
                this->workerArray[i]->w_Id == editStr) {
                searchArray[num] = this->workerArray[i];
                index[num++] = i;
            }
        }
        this->displayWorker(searchArray, num);
        if (num > 1) {
            cout << "Please specify one worker by ID !" << endl;
            PAUSE
        }
    }
    int select = 9;
    while (select != 0) {
        cout << "Select to edit :\n1.ID - 2.Name - 3.Department - 4.Position - "
                "5.Salary - 0.exit\n_# ";
        cin >> select;
        string str;
        int temp;
        switch (select) {
        case 1:
            cout << "Enter new ID :\n_# ";
            cin >> str;
            this->workerArray[index[0]]->w_Id = str;
            break;
        case 2:
            cout << "Enter new Name :\n_# ";
            cin >> str;
            this->workerArray[index[0]]->w_Name = str;
            break;
        case 3:
            cout << "Choose new Department :\n1.GMO - 2.Personnel - 3.Finance "
                    "- 4.Sales - 5.Production_# ";
            cin >> temp;
            this->workerArray[index[0]]->w_Department = temp;
            break;
        case 4:
            if (this->workerArray[index[0]]->w_Department == 1) {
                cout << "Choose new position :\n"
                     << "1.CEO - 2.Secretary " << endl;
            } else {
                cout << "Choose new position :\n"
                     << "1.Manager - 2.General Staff " << endl;
            }
            cin >> temp;
            this->workerArray[index[0]]->w_Position = temp;
            break;
        case 5:
            cout << "Enter new Salary :\n_# ";
            cin >> temp;
            this->workerArray[index[0]]->w_Salary = temp;
            break;
        case 0:
        default:
            break;
        }
    }
    this->saveRecord();
    delete[] searchArray;
    delete[] index;
    return;
}

void workerManagement::searchWorker() {
    /* 检索员工信息 */
    string searchStr;
    int index = 0;
    Worker **searchArray = new Worker *[this->currentNum];
    cout << "Please enter ID or Name to search.\n_# ";
    cin >> searchStr;
    for (int i = 0; i < this->currentNum; i++) {
        if (this->workerArray[i]->w_Name == searchStr ||
            this->workerArray[i]->w_Id == searchStr) {
            searchArray[index++] = this->workerArray[i];
        }
    }
    this->displayWorker(searchArray, index);
    delete[] searchArray;
    PAUSE
}

void workerManagement::resetSystem() {
    /***重置，抹除所有数据***/
    cout << "Confirm to Delete All Record !!! (y/n)\n_# ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y') {
        delete[] this->workerArray;
        this->workerArray = nullptr;
        this->currentNum = 0;
        this->saveRecord();
    }
}
