#include <iostream>
#include <cmath>

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
    const int nb_minutes_dans_une_heure = 60;

    double distance_L1 = 6; // La distance parcourue par le robot sur la route


    // Début programme
    std::cout << "Bienvenue à mon programme de calcul du temps de trajet,"
                 " du robot pour aller chercher un objet." << std::endl;

    // calcul du temps pour le segment 1 (L1)
    double temps_t1 = 0;
    temps_t1 = distance_L1 / vitesse_s1;

    std::cout << temps_t1 << std::endl;

    // calcul du temps pour le segment 2 (L2)
    double distance_L2 = 0;
    double temps_t2 = 0;

    // calcul de la distance_L2, soit l'hypoténuse du triangle rectangle dx=A, dy-L1=B, L2=C)
    double cote_B = 0;
    cote_B = distance_dy - distance_L1;

    distance_L2 = std::sqrt(distance_dx * distance_dx + cote_B * cote_B);
    std::cout << distance_L2 << std::endl;



    temps_t2 = distance_L2 / vitesse_s2;
    std::cout << temps_t2 << std::endl;

    // affichage du résultat final
    double temps_Total = 0;
    temps_Total = temps_t1 + temps_t2;
    std::cout << temps_Total << std::endl;

    // conversion du résultat au format heure, minutes
    double resultat_en_minutes = temps_Total * nb_minutes_dans_une_heure;
    std::cout << resultat_en_minutes << std::endl;

    // récupération des heures entières
    int heure_entieres = static_cast<int>(resultat_en_minutes) % nb_minutes_dans_une_heure;
    std::cout << heure_entieres << std::endl;


    return 0;
}