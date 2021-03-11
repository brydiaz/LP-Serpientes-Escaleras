typedef struct SerpienteOEscalera{

    int *posA;
    int *posB;   
    struct SerpienteOEscalera *sig;

}SerpienteOEscalera;

typedef struct ListaSerpienteOEscalera{

    SerpienteOEscalera *primero;
    SerpienteOEscalera *ultimo;

}ListaSerpienteOEscalera;

typedef struct Jugador{

    int *posicionJugador;
    int turno;
    struct Jugador *sig;

}Jugador;

typedef struct ListaJugadores{

    Jugador *primero;
    Jugador *ultimo;

}ListaJugadores;

typedef struct Posicion{

    int pos;
    struct Posicion *sig;

}Posicion;

typedef struct ListaPosiciones{

    Posicion *primero;
    Posicion *ultimo;

}ListaPosiciones;

typedef struct Tablero{

    ListaSerpienteOEscalera *escaleras;
    ListaSerpienteOEscalera *serpientes;
    ListaJugadores *jugadores;
    ListaPosiciones *posiciones;

}Tablero;


void insertarListaPosicion(ListaPosiciones *lista, Posicion *pos);
void imprimirLista(ListaPosiciones *lista);
void crearSerpientesEscaleras(ListaSerpienteOEscalera *escaleras, ListaSerpienteOEscalera *serpientes, int cantidadEscalerasYSerpientes, int limite, int lenTablero);
