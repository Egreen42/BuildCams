//
// Created by ethan on 2/26/2021.
//

#ifndef SETUP_BUILDCAMS_H
#define SETUP_BUILDCAMS_H

#include <iostream>
#include <string>
#include <fstream>


class BuildCams {
public:
    bool build4Cams(std::string, std::string, std::string, std::string); //will build a 4 camera matrix
    bool build6Cams(std::string, std::string, std::string, std::string, std::string, std::string); //Builds a 6 camera matrix
};


#endif //SETUP_BUILDCAMS_H
