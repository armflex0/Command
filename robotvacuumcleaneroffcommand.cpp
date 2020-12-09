#include "robotvacuumcleaneroffcommand.h"

RobotvacuumcleanerOffCommand::RobotvacuumcleanerOffCommand(Robotvacuumcleaner *ra9){

    this->cleaner = ra9;
    this->name = "RobotvacuumcleanerOffCommand";
}

void RobotvacuumcleanerOffCommand::execute() {

    cleaner->off();
}
