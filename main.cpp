#include <iostream> // std::cout, std::boolalpha, std::noboolalpha
#include <cmath>

using namespace std;

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
    const double distance_dx = 3.0, distance_dy = 10.0;     /* dx, la distance(km) sur la route.
                                                           dy, la distance (km) sur le terrain rocheux */
    const double vitesse_s1 = 5.0, vitesse_s2 = 2.0;        /* s1 = la vitesse (km/h) sur la route.
                                                           s2 = la vitesse (km/h) sur le terrain rocheux */
    double distance_L1 = 6.0;                             // La distance parcourue par le robot sur la route


    // Début programme
    cout << "Ce programme calcule le temps que met un robot\n"
                 "pour récupérer un objet distant." << endl << endl;

    // calculs
    //////////////////////////////////////////////////////////
    // calcul du temps pour le segment 1 (L1)
    double temps_t1 = distance_L1 / vitesse_s1;

    // calcul de la distance_L2,
    // soit l'hypoténuse du triangle rectangle dx=A, dy-L1=B, L2=C)
    double cote_B = distance_dy - distance_L1;

    // CODE POUR LE BONUS
    /*double saisie_cote_B = 0.0; // POUR BONUS
    cout << "Maintenant, devinons quelle distance permettra d'atteindre l'objet le plus vite possible !" << endl;
    cout <<"Entrez un nombre entre 0 et " << cote_B << " : " << endl;
    cin >> saisie_cote_B;*/

    //CODE POUR LE BONUS test de la saisie : il doit être compris entre 0 et le résultat de cote_B
    //(Pas trouvé comment faire, sans boucle)
    /*double bon_cote_B = (saisie_cote_B >= 0) && (saisie_cote_B < cote_B);
    cout << boolalpha << bon_cote_B << endl; // Mon boolalpha ne fonctionne pas ici: J'ai la valeur "1" au lieu "true" !*/

    const double distance_L2 = hypot(cote_B, distance_dx);
    // cout << distance_L2 << endl;//test
    // const double distance_L2 = std::sqrt(distance_dx * distance_dx + saisie_cote_B * saisie_cote_B); //CODE POUR LE BONUS
    const double temps_t2 = distance_L2 / vitesse_s2;
    // cout << temps_t2 << endl;//test

    // calcul du temps total
    double temps_Total = 0.0;
    temps_Total = temps_t1 + temps_t2;
    // cout << temps_Total << endl; //test

    // conversion du résultat au format heure, minutes
    // récupération des heures complètes
    int heures_entieres = static_cast<int>(temps_Total);

    // récupération des minutes restantes
    double conversion_temps_Total_en_int = temps_Total * nb_minutes_dans_une_heure; // 3.7 * 60 = 222 minutes
    // cout << conversion_temps_Total_en_int << endl;
    int minutes_restantes = static_cast<int>(conversion_temps_Total_en_int) % nb_minutes_dans_une_heure;
    // cout << minutes_restantes << endl;

    // affichage du résultat
    /////////////////////////////////////////////////////////////////

    cout << "Temps total : "
    << heures_entieres << " h " << minutes_restantes << endl << endl;
    cout << "Merci d'avoir utiliser mon programme.\nÀ bientôt!" << endl;

    return EXIT_SUCCESS;
    // Fin du programme
}