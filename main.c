
#include <stdio.h>

// Déclaration des fonctions prototypes
void afficherNomPilote();
void afficherStatsCourse();

int main() {
    printf("Bienvenue dans le projet Formule 1 !\n");
    
    // Appel des fonctions exemple
    afficherNomPilote();
    afficherStatsCourse();

    return 0;
}

// Définition des fonctions
void afficherNomPilote() {
    printf("Nom du pilote: Lewis Hamilton\n");
}

void afficherStatsCourse() {
    printf("Statistiques de la course: 10 victoires, 5 pole positions\n");
}
