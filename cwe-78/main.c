#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    const char *cat = "cat ";
    char *command;
    size_t command_lenght;

    command_lenght = strlen(cat) + strlen(argv[1]) + 1;
    command = (char *)malloc(command_lenght);
    strncpy(command, cat, command_lenght);
    strncat(command, argv[1], command_lenght - strlen(cat));

    system(command);
    return 0;
}
