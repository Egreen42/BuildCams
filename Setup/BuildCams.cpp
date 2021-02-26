//
// Created by ethan on 2/26/2021.
//

#include "BuildCams.h"

bool BuildCams::build4Cams(std::string a, std::string b, std::string c, std::string d){
    std::string matrixCode;
    matrixCode = "#!/bin/bash \n"
                 "### BEGIN INIT INFO \n"
                 "# Provides: omxplayer \n"
                 "# Required-Start: \n"
                 "# Required-Stop: \n"
                 "# Default-Start: 2 3 4 5 \n"
                 "# Default-Stop: 0 1 6 \n"
                 "# Short-Description: Displays camera feeds for monitoring Description: \n"
                 "### END INIT INFO\n"
                 "\n"
                 "#Camera Feeds & Positions\n"
                 "top_left=screen -dmS top_left sh -c 'omxplayer --win \\0 21 640 501\\ " + a + " -b --live '; \n"
                 "top_right=screen -dmS top_right sh -c 'omxplayer --win \\640 21 1280 501\\ " + b  + " --live'; \n"
                 "bottom_left=screen -dmS bottom_left sh -c 'omxplayer --win \\0 522 640 1002\\ " + c + " --live'; \n"
                 "bottom_right=screen -dmS bottom_right sh -c 'omxplayer --win \\640 522 1280 1002\\ " + d + " --live';\n"
                 "\n"
                 "#Camera Feed Names \n"
                 "# (variable names from above, separated by a space)\n"
                 "camera_feeds=(top_left top_right bottom_left bottom_right)\n"
                 "\n"
                 "#---- There should be no need to edit anything below this line ---- \n"
                 "#Start displaying camera feeds\n"
                 "case $1 in \n"
                 "start) \n"
                 "for i in \"${camera_feeds[@]}\" \n"
                 "do \n"
                 "eval eval '$'$i \n"
                 "done \n"
                 "echo \"Camera Display Started\" \n"
                 ";;\n"
                 "\n"
                 "#Stop displaying camera feeds\n"
                 "stop) \n"
                 "sudo killall omxplayer.bin \n"
                 "echo \"Camera Display Ended\" \n"
                 ";;\n"
                 "\n"
                 "#Restart any camera feeds that have died\n"
                 "repair) \n"
                 "for i in \"${camera_feeds[@]}\" \n"
                 "do \n"
                 "if !(screen -list | grep -q $i)\n"
                 "then \n"
                 "eval eval '$'$i\n"
                 "echo \"$i is now running\"\n"
                 "fi \n"
                 "done \n"
                 ";;\n"
                 "\n"
                 "*) \n"
                 "echo \"Usage: /etc/init.d/displaycameras {start|stop|repair}\" \n"
                 "exit 1\n"
                 "\n"
                 ";;\n"
                 "esac";
    std::ofstream file;
    file.open("/etc/init.d/displayCameras");
    if(!file.is_open()) {
        std::cout << "ERROR: UNABLE TO OPEN FILE, TERMINATING PROGRAM";
        exit(EXIT_FAILURE);
    }
    file << matrixCode;
    file.close();
    return true;


}
bool BuildCams::build6Cams(std::string a, std::string b, std::string c, std::string d, std::string e, std::string f){
    std::string matrixCode; //will hold the matrix

    matrixCode = " #!/bin/bash\n"
                 "### BEGIN INIT INFO\n"
                 "# Provides: omxplayer\n"
                 "# Required-Start:\n"
                 "# Required-Stop:\n"
                 "# Default-Start: 2 3 4 5\n"
                 "# Default-Stop: 0 1 6\n"
                 "# Short-Description: Displays camera feeds for monitoring\n"
                 "# Description:\n"
                 "### END INIT INFO\n"
                 "\n"
                 "# Camera Feeds & Positions\n"
                 "\n"
                 "#First Colmn\n"
                 "large_left=\"screen -dmS large_left sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"0 0 1280 720\\\" " + a + " --live  -n -1'\";\n"
                 "mid_lcenter=\"screen -dmS mid_lcenter sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"640 720 1280 1080\\\" " + b + " --live -n -1'\";\n"
                 "bottom_left=\"screen -dmS bottom_left sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"0 720 640 1080\\\"  " + c + " --live -n -1'\";\n"
                 "\n"
                 "#Second Colmn\n"
                 "top_right=\"screen -dmS top_right sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"1280 0 1920 360\\\" " + d + " --live -n -1'\";\n"
                 "mid_rcenter=\"screen -dmS mid_rcenter sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"1280 360 1920 720\\\" " + e + " --live -n -1 '\";\n"
                 "bottom_right=\"screen -dmS bottom_right sh -c 'omxplayer --avdict rtsp_transport:tcp --win \\\"1280 720 1920 1080\\\" " + f + " --live -n -1'\";\n"
                 "\n"
                 "\n"
                 "# Camera Feed Names\n"
                 "# (variable names from above, separated by a space)\n"
                 "camera_feeds=(large_left mid_lcenter bottom_left top_right mid_rcenter bottom_right)\n"
                 "\n"
                 "#---- There should be no need to edit anything below this line ----\n"
                 "\n"
                 "# Start displaying camera feeds\n"
                 "case \"$1\" in\n"
                 "start)\n"
                 "for i in \"${camera_feeds[@]}\"\n"
                 "do\n"
                 "eval eval '$'$i\n"
                 "done\n"
                 "echo \"Camera Display Started\"\n"
                 ";;\n"
                 "\n"
                 "# Stop displaying camera feeds\n"
                 "stop)\n"
                 "sudo killall omxplayer.bin\n"
                 "echo \"Camera Display Ended\"\n"
                 ";;\n"
                 "\n"
                 "# Restart any camera feeds that have died\n"
                 "repair)\n"
                 "for i in \"${camera_feeds[@]}\"\n"
                 "do\n"
                 "if !(sudo screen -list | grep -q $i)\n"
                 "then\n"
                 "eval eval '$'$i\n"
                 "echo \"$i is now running\"\n"
                 "fi\n"
                 "done\n"
                 ";;\n"
                 "\n"
                 "*)\n"
                 "echo \"Usage: /etc/init.d/displaycameras {start|stop|repair}\"\n"
                 "exit 1\n"
                 "\n"
                 ";;\n"
                 "esac";

    std::ofstream file;
    file.open("/etc/init.d/displayCameras");
    if(!file.is_open()){
        std::cout << "ERROR: UNABLE TO OPEN FILE, TERMINATING PROGRAM";
        exit(EXIT_FAILURE);
    }
    file << matrixCode;
    file.close();
    return true;
}