//
//  main.cpp
//  Cansat 2013 function set
//
//  Created by FRANCIS PAPINEAU on 12-06-16.
//  Copyright (c) 2012 carleton university. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    /* --------------------------------------------------------------------------------------------------------------------------------------------------------
     Possible Commands:
     
        - i2c_tool
     
            - init                                                          // init the service
            - start                                                         // start the handler app
            - stop                                                          // stop the handler
            - kill_i2c                                                      // kill the service
     
            - all, <timeout value>                                          // read all values with devices
            - read, <device number>, <timeout value>                        // read only specific device
            - list                                                          // list all devices and addresses
            - set, <device number>, <threshold value>                       // set an alarm fora  specific value, and device
            - interval, <device number>, <timeout value>, <time interval>   // set a timer to read values from the i2c bus
                                                                            // set a timeout value and the device number to read from, and time interval
            - write, <device number>                                        // write to an i2c device
            - interrupt, <device number>                                    // sets an interrupt for a specific device  
     
    -------------------------------------------------------------------------------------------------------------------------------------------------------- */
     
    do{
        
        
    }while(argv != 0);
    
    return 0;
}

