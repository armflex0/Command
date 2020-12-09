#include "robotvacuumcleaner.h"

Robotvacuumcleaner::Robotvacuumcleaner(QString location){

    this->location = location;
}

void Robotvacuumcleaner::on() {

        cout << location.toStdString() << " slave is on" << endl;
}

void Robotvacuumcleaner::off() {

    cout << location.toStdString() << " slave is off" << endl;
}
