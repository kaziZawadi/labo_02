#include <iostream>
#include <cmath>

/* ---------------------------
Laboratoire : 02
Auteur(s) : Joseph Maro
Date : 26.09.2026
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */

int main() {

    // entrées
    /////////////////////////////////////////////////////////////
    const int nb_minutes_dans_une_heure = 60;
    const double distance_dx = 3, distance_dy = 10;     /* dx, la distance(km) sur la route.
                                                           dy, la distance (km) sur le terrain rocheux */
    const double vitesse_s1 = 5, vitesse_s2 = 2;        /* s1 = la vitesse (km/h) sur la route.
                                                           s2 = la vitesse (km/h) sur le terrain rocheux */
    double distance_L1 = 6;                             // La distance parcourue par le robot sur la route


    // Début programme
    std::cout << "Ce programme calcule le temps que met un robot "
                 "pour récupérer un objet distant." << std::endl << std::endl;

    // calculs
    //////////////////////////////////////////////////////////
    // calcul du temps pour le segment 1 (L1)
    double temps_t1 = 0;
    temps_t1 = distance_L1 / vitesse_s1;

    // calcul du temps pour le segment 2 (L2)
    double distance_L2 = 0;
    double temps_t2 = 0;

    // calcul de la distance_L2,
    // soit l'hypoténuse du triangle rectangle dx=A, dy-L1=B, L2=C)
    double cote_B = 0;
    double saisie_cote_B = 0; // POUR BONUS

    cote_B = distance_dy - distance_L1;
    // POUR LE BONUS
    /*std::cout << "Maintenant, devinons quelle distance permettra d'atteindre l'objet le plus vite possible !" << std::endl;
    std::cout <<"Entrez un nombre entre 0 et " << cote_B << " : " << std::endl;
    std::cin >> saisie_cote_B;*/

    //POUR LE BONUS test de la saisie : il doit être compris entre 0 et le résultat de cote_B (Pas trouvé comment faire, sans boucle)
    /*double bon_cote_B = 0;
    bon_cote_B = (saisie_cote_B >= 0) && (saisie_cote_B < cote_B);
    std::cout << bon_cote_B << std::endl;*/

    distance_L2 = std::sqrt(distance_dx * distance_dx + cote_B * cote_B);
    // distance_L2 = std::sqrt(distance_dx * distance_dx + saisie_cote_B * saisie_cote_B); // POUR LE BONUS
    temps_t2 = distance_L2 / vitesse_s2;

    // calcul du temps total
    double temps_Total = 0;
    temps_Total = temps_t1 + temps_t2;

    // conversion du résultat au format heure, minutes
    int heures_entieres = 0;
    heures_entieres = static_cast<int>(temps_Total);

    double resultat_en_minutes = temps_Total * nb_minutes_dans_une_heure;
    int minutes_restantes = static_cast<int>(resultat_en_minutes) % nb_minutes_dans_une_heure;

    // affichage du résultat
    /////////////////////////////////////////////////////////////////
    std::cout << "Temps total : "
    << heures_entieres << " h " << minutes_restantes << std::endl << std::endl;

    std::cout << "Merci d'avoir utiliser mon programme. À bientôt!" << std::endl;

    return 0;
    // Fin du programme
}