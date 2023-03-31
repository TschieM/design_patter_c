#include <stdio.h>
#include "commad.h"

int main() {
    char cmd[10], param[10];

    printf("Enter the command:\n");
    scanf("%s %s", cmd, param);

    int err = SetCommand(cmd, param);
    if(err) {
        printf("command undefined! \n");
    } else {
        ExecuteCommand();
    }

    return 0;
}