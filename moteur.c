#include <stdio.h>

int main() {
    float vitesse = 0;
    int i;

    // Boucle d'accélération : on augmente la vitesse 5 fois
    for(i = 0; i < 5; i++) {
        vitesse = vitesse + 5;
    }

    printf("Vitesse finale = %.2f\n", vitesse);

    return 0;
}
