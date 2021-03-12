#include "workerManagement.h"

using namespace std;

int main() {
    workerManagement management;
    int select = 9;
    while (true) {
        system("clear");
        workerManagement::drawMenu();
        cin >> select;
        switch (select) {
            case 1:
                management.addWorker();
                break;
            case 2:
                management.showWorkers();
                break;
            case 3:
                management.deleteWorker();
                break;
            case 4:
                management.editWorker();
                break;
            case 5:
                management.searchWorker();
                break;
            case 6:
                management.resetSystem();
                break;
            case 0:
            default:
                cout << "See You Next Time !" << endl;
                PAUSE
                return 0;
        }

    }

}
