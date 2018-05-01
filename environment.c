/*
	This file will describe the thread that will simulate the
	environment and all the function / structures definitions
	needed
*/

#include "multithread_interface.h"

struct PACIENT {
    int room;
    int number;
}

struct PACIENT_DATA {
    int temp;
    int puls;
    bool urgenta;
}

struct ROOM_DATA {
    int temp;
    int lumin;
    PACIENT_DATA pacient[3];
};

struct ALARMS {
    bool alarm;
    char message[100];
    int room;
    int pacient;
};

void init_room_env(ROOM_DATA *room);
void change_room_params(ROOM_DATA *room);
void change_pacient_params(ROOM_DATA *room, int pacient_number);
