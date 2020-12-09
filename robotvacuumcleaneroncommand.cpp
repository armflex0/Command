#include "robotvacuumcleaneroncommand.h"

RobotvacuumcleanerOnCommand::RobotvacuumcleanerOnCommand(Robotvacuumcleaner *ra9){
    this->cleaner = ra9;
    this->name = "RobotvacuumcleanerOnCommand";
}

void RobotvacuumcleanerOnCommand::execute() {
    cleaner->on();
}

