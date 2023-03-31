#include <stdlib.h>
#include <string.h>
#include "commad.h"
#include "receiver.h"

static Command activeCmd;
static char* param;

const int NumCmds = 2;

static void CmdVersion() {
    GetVersion();
}

static void CmdToggleLED() {
    ToggleLED(atoi(param));
}

const Command cmds[NumCmds] = {
    {"version", &CmdVersion, "print version"},
    {"toggleLED", &CmdToggleLED, "toggle led for n times (parameter: n)"},
};

int SetCommand(char* name, char* params) {
    int err = 1;

    for(int i=0; i<NumCmds; i++) {
        if(strcmp(name, cmds[i].name) == 0) {
            activeCmd = cmds[i];
            param = params;
            err = 0;
        }
    }

    return err;
}

void ExecuteCommand() {
    activeCmd.execute();
}