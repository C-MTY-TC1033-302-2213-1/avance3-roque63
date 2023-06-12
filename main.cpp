//
//  main.cpp
//  Avance3
//
//  Created by Ma. Guadalupe Roque Díaz de León on 11/06/23.
//

#include <iostream>
#include "Video.h"
#include "Poliformismo.h"
#include "Episodio.h"
#include "Pelicula.h"
#include "Serie.h"

int main() {
    // Declaracion de objetos
    Video viernes{"100", "Computer", 100, "Ing.", 100};
    Episodio episodio_viernes{"Exito_2023", 100, 100};
    Pelicula peli{"008", "Tigres_Campeones_8*", 888, "Deportes", 100, 8};
    Poliformismo neflix;

    // Pruebas de la sobrecarga del operador <<
    cout << viernes << endl;
    cout << viernes.str() << endl;
    cout << peli << endl;
    cout << peli.str() << endl;
    cout << episodio_viernes << endl;
    cout << episodio_viernes.str() << endl;

    neflix.leerArchivo("InventarioFinal.csv");

    cout << neflix.getPtrVideo(0)->str() << endl;
    cout << *neflix.arrPtrPeliculas[0] << endl;
    cout << *neflix.getPtrVideo(0)<< endl;

    return 0;
}
