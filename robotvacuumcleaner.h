#ifndef ROBOTVACUUMCLEANER_H
#define ROBOTVACUUMCLEANER_H

#include <QString>
#include <iostream>

using namespace std;

class Robotvacuumcleaner
{
public:
    Robotvacuumcleaner(QString);
    QString location;
    void on();
    void off();
};

#endif // FIREPLACE_H
