//
//  main_xbee.cpp
//  Cansat 2013 function set
//
//  Created by FRANCIS PAPINEAU on 12-06-17.
//  Copyright 2012 carleton university. All rights reserved.
//

#include <iostream>

/* --------------------------------------------------------------------------------------------------------------------------------------------------------
 Possible Commands:
 
 
 
 - xbee_tool
 
    - init                                                          // init the service
    - start                                                         // start the handler app
    - stop                                                          // stop the handler
    - kill_xbee                                                     // kill the service
 
    - set_baud, <baud rate>                                         // set the UART BAUD rate for the xbee stream
    - set_SH, <SH number>                                           // set dest high address
    - set_SL, <SL number>                                           // set dest low address
    - loopback_test                                                 // do a loop back test
    - pair                                                          // loopback tests on both sides
 
 -------------------------------------------------------------------------------------------------------------------------------------------------------- */