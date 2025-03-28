#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define POD_FORTUNE "./utils/pod"
#define POD_COW "./utils/pod.cow"

int check_command(const char *cmd) {
    char buffer[128];
    snprintf(buffer, sizeof(buffer), "command -v %s > /dev/null 2>&1", cmd);
    return system(buffer);
}

int check_file(const char *filepath) {
    return access(filepath, F_OK) == 0;
}

int main() {
    // Vérifie si fortune et cowsay sont installés
    if (check_command("fortune") != 0) {
        fprintf(stderr, "Error: 'fortune' is not installed. Check the README for installation instructions.\n");
        return 1;
    }
    if (check_command("cowsay") != 0) {
        fprintf(stderr, "Error: 'cowsay' is not installed. Check the README for installation instructions.\n");
        return 1;
    }

    // Vérifie si les fichiers locaux existent
    if (!check_file(POD_FORTUNE)) {
        fprintf(stderr, "Error: The file '%s' is missing.\n", POD_FORTUNE);
        return 1;
    }
    if (!check_file(POD_COW)) {
        fprintf(stderr, "Error: The file '%s' is missing.\n", POD_COW);
        return 1;
    }

    // Exécute la commande avec les fichiers locaux
    char command[256];
    snprintf(command, sizeof(command), "fortune %s | cowsay -f %s", POD_FORTUNE, POD_COW);
    system(command);

    return 0;
}
