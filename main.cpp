#include <iostream>

/* ---------------------------
Laboratoire : 02
Auteur(s) :
Date :
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */

/**
 *
 * @return
 */

int main() {

    // entrées
    const double distance_dx = 3, distance_dy = 10; // dx, la distance(km) sur la route. dy, la distance (km) sur le terrain rocheux
    const double vitesse_s1 = 5, vitesse_s2 = 2; // s1 = la vitesse (km/h) sur la route. s2 = la vitesse (km/h) sur le terrain rocheux
    double distance_L1 = 6; // La distance parcourue par le robot sur la route

    // Début programme
    std::cout << "Bienvenue à mon programme de calcul du temps de trajet,"
                 " du robot pour aller chercher un objet.";

    // calcul du temps pour le segment 1 (L1)
    double temps_t1 = 0;
    temps_t1 = distance_L1 / vitesse_s1;

    // calcul du temps pour le segment 2 (L2)
    double distance_L2 = 0;
    double temps_t2 = 0;
    distance_L2 = distance_dy - distance_L1;
    temps_t2 = distance_L2 / vitesse_s2;

    // conversion du résultat au format heure, minutes


    // affichage du résultat final
    double temps_Total = 0;
    temps_Total = temps_t1 + temps_t2;

    std::cout << "temps_Total pour récupérer l'objet : " << temps_Total << " h ";





    return 0;
}