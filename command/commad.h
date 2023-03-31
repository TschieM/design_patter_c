#ifndef _COMMAND_H_
#define _COMMAND_H_

typedef struct CommandStruct Command;

struct CommandStruct {
    char* name;
    void (*execute)();
    char* help;
};

int SetCommand(char* name, char* params);

void ExecuteCommand();

#endif