// Created by root on 2021/3/5.

#include "workerManagement.h"

workerManagement::workerManagement() {
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);

    char ch;
    if (!ifs.is_open()) {
        this->fileisEmpty = true;
    }
    ifs >> ch;
    if (ifs.eof()) {
        this->fileisEmpty = true;
    }
    if (this->fileisEmpty == true) {
        cout << "File is empty or not exist!" << endl;
        PAUSE
        this->currentNum = 0;
        this->workerArray = nullptr;
        ifs.close();
        return;
    }

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
    cout << "ID\tName\tDepartment\tPosition\tSalary\n"
         << "-------------------------------------------------------" << endl;
    string deptName;
    string postName;
    for (int i = 0; i < displayNum; i++) {
        switch (displayArray[i]->w_Department) {
        case 1:
            deptName = "GMO";
            if (displayArray[i]->w_Position == 1) {
                postName = "\tCEO\t";
            } else {
                postName = "\tSecretary";
            }
            break;
        case 2:
            deptName = "Personel";
            break;
        case 3:
            deptName = "Finance";
            break;
        case 4:
            deptName = "Sales\t";
            break;
        case 5:
            deptName = "Production";
            break;
        default:
            break;
        }
        if (displayArray[i]->w_Department != 1) {
            if (displayArray[i]->w_Position == 1) {
                postName = "Manager";
            } else {
                postName = "General Staff";
            }
        }
        cout << displayArray[i]->w_Id << "   " << displayArray[i]->w_Name
             << "  \t" << deptName << "  \t" << postName << "  \t"
             << displayArray[i]->w_Salary << endl;
    }
}

void workerManagement::sortById() {
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
    PAUSE
}

void workerManagement::sortByDept() {
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
    PAUSE
}

void workerManagement::sortBySalary() {
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
    PAUSE
}

void workerManagement::addWorker() {
    cout << "How many workers added ? : ";
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
            cout << "Enter worker's name :";
            cin >> tempName;
            cout << "Enter worker's ID :";
            cin >> tempId;
            cout << "Choose worker's department :\n"
                 << "1.GMO - 2.Personnel - 3.Finance - 4.Sales - 5.Production"
                 << endl;
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
    /*****  保存文件  *****/
    this->saveRecord();
    PAUSE
}

void workerManagement::showWorkers() {
    int select = 0;
    cout << "How to display ?\n"
         << "1.Sort by ID - 2.Srot by Department - 3.Sort by Salary\n_# ";
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
    } else {
        return;
    }
}

void workerManagement::editWorker() {}

void workerManagement::searchWorker() {
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
    PAUSE
}

void workerManagement::resetSystem() {}
