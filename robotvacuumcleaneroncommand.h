#ifndef ROBOTVACUUMCLEANERONCOMMAND_H
#define ROBOTVACUUMCLEANERONCOMMAND_H

#include "command.h"
#include "robotvacuumcleaner.h"

class RobotvacuumcleanerOnCommand : public Command{

protected:
    Robotvacuumcleaner *cleaner;
public:
    RobotvacuumcleanerOnCommand(Robotvacuumcleaner*);
    virtual void execute();

};

#endif // FIREPLACEONCOMMAND_H
