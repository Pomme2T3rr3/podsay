#include <stdio.h>
#include <stdlib.h>

int check_command(const char *cmd) {
    char buffer[128];
    snprintf(buffer, sizeof(buffer), "command -v %s > /dev/null 2>&1", cmd);
    return system(buffer);
}

int main() {
    // Vérifie si fortune et cowsay sont installés
    if (check_command("fortune") != 0) {
        fprintf(stderr, "Erreur: 'fortune' n'est pas installé. Consultez le README pour l'installer.\n");
        return 1;
    }
    if (check_command("cowsay") != 0) {
        fprintf(stderr, "Erreur: 'cowsay' n'est pas installé. Consultez le README pour l'installer.\n");
        return 1;
    }

    // Exécute la commande
    system("fortune /usr/local/share/fortunes/pod | cowsay -f /usr/local/share/cowsay-files/cows/pod.cow");

    return 0;
}
