#include <iostream>

class Chassis   //establishes Chassis as a class (type)
{
    double longitude;   //establishes the "boxes" in which data is
    double latitude;    //stored within the class. In this example,
    double heading;     //each Chassis has a value for each of these 5.
    double speed;
    std::string name;
};

Chassis rob;    //rob is an instance of Chassis. Its type is Chassis.

rob.longitude = 83.5234;    //assigns rob's longitude the value 83.5234

double x = rob.heading; //assigns x the value from rob's heading.