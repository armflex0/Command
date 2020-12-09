#ifndef ROBOTVACUUMCLEANEROFFCOMMAND_H
#define ROBOTVACUUMCLEANEROFFCOMMAND_H

#include "command.h"
#include "robotvacuumcleaner.h"

class RobotvacuumcleanerOffCommand : public Command{

protected:
    Robotvacuumcleaner *cleaner;
public:
    RobotvacuumcleanerOffCommand(Robotvacuumcleaner*);
    virtual void execute();
};

#endif // FIREPLACEOFFCOMMAND_H
