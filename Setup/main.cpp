#include <iostream>
#include <cstdlib>
#include <string>

#include "BuildCams.h"

int main() {
    std::string cam1, cam2, cam3, cam4, cam5, cam6; //cam strings
    BuildCams cams;
    //determine if 4 of 6 cameras are wanted
    int numCams;
    std::cout << "Do you want 4 or 6 cameras? ";
    std::cin >> numCams;

    if(numCams == 4){ //CODE TO SETUP 4 CAMERAS
        std::cout << "Enter the rtsp for the top left camera\n";
        getline(std::cin, cam1);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the top right camera\n";
        getline(std::cin, cam2);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the bottom left camera\n";
        getline(std::cin, cam3);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the bottom right camera\n";
        getline(std::cin, cam4);
        std::cin.ignore();

        if(cams.build4Cams(cam1, cam2, cam3, cam4)){
            std::cout << "SUCCESS";
        }

    } else if (numCams == 6){ //CODE TO SETUP 6 CAMERAS
        std::cout << "Enter the rtsp for the big camera\n";
        getline(std::cin, cam1);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the 2nd camera\n";
        getline(std::cin, cam2);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the 3rd camera\n";
        getline(std::cin, cam3);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the 4th camera\n";
        getline(std::cin, cam4);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the 5th camera\n";
        getline(std::cin, cam5);
        std::cin.ignore();
        std::cout << "Enter the rtsp for the 6th camera\n";
        getline(std::cin, cam6);
        std::cin.ignore();
        if(cams.build6Cams(cam1, cam2, cam3, cam4, cam5, cam6)){
            std::cout << "SUCCESS";
        }

    } else { //RESTART ERROR
        std::cout << "ERROR: INVALID NUMBER";
        exit(EXIT_FAILURE); //TERMINATE THE PROGRAM
    }

    std::cout << "press enter to set the premissions\n";
    std::cin.ignore();
    system("sudo chmod -755 /etc/init.d/displaycameras");
    system("sudo update rc.d displaycameras defaults");
    return 0;
}
