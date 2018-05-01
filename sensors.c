/* 	
	This file will describe the sensors implemented as threads
	that will receive data from the environment and send that
	data to the controller
*/

#include "multithread_interface.h"
#include "environment.h"

extern ROOM_DATA data;

TASK temp_sensor(){
    // ceva de genu
    _p_send(data[0].temp, controller);
}

TASK smoke_sensor() {
    
}

TASK pacient_temp_sensor() {
    
}

// ETC
