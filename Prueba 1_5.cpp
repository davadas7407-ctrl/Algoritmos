#include <stdio.h>

void calcPts(int ed[], char sx[], int edo[], int ej[], int inte[], int idi[],
             int pts[], int pos[], int n,
             int emi, int ema, char sb, int eb, int ejb, int ib, int idb);

void burbuja(int pts[], int pos[], int n);

void mostrarTop(char nom[][25], char edoNom[][30], int ed[], char sx[],
                int edo[], int ej[], int inte[], int idi[],
                int pts[], int pos[], int top, int n);

int main()
{
    int n = 300;

    char edoNom[33][30] = {
        "Nada",
        "Aguascalientes","Baja California","Baja California Sur","Campeche",
        "Chiapas","Chihuahua","CDMX","Coahuila","Colima",
        "Durango","Estado de Mexico","Guanajuato","Guerrero","Hidalgo",
        "Jalisco","Michoacan","Morelos","Nayarit","Nuevo Leon",
        "Oaxaca","Puebla","Queretaro","Quintana Roo","San Luis Potosi",
        "Sinaloa","Sonora","Tabasco","Tamaulipas","Tlaxcala",
        "Veracruz","Yucatan","Zacatecas"
    };

    char nom[300][25] = {
    "Ana","Luis","Martha","Carlos","Sofia","Diego","Elena","Jorge","Luisa","Raul",
    "Valeria","Andres","Fernanda","Miguel","Daniela","Jose","Paola","Fernando","Camila","Ricardo",
    "Ximena","Eduardo","Regina","Alejandro","Natalia","Sergio","Gabriela","Hector","Mariana","Arturo",
    "Lucia","Ivan","Renata","Oscar","Ariana","Julio","Diana","Emilio","Jimena","Alberto",
    "Montserrat","Ruben","Carolina","Tomas","Victoria","Alonso","Fabiola","Gerardo","Andrea","Manuel",
    "Patricia","Francisco","Adriana","Roberto","Beatriz","Javier","Cecilia","Martin","Alejandra","Esteban",
    "Lorena","Rodrigo","Melissa","Samuel","Vanessa","Cristian","Sandra","Felipe","Claudia","Pablo",
    "Isabel","Guillermo","Rosa","Mauricio","Silvia","Elias","Tatiana","Rafael","Brenda","Vicente",
    "Karla","Leonardo","Nadia","Adrian","Noemi","Enrique","Olga","Armando","Rocio","Gilberto",
    "Teresa","Jaime","Yolanda","Salvador","Angelica","Marco","Berenice","Israel","Selena","Cesar",
    "Alicia","Ernesto","Bianca","Kevin","Carmen","Joel","Debora","Matias","Erika","Saul",
    "Gloria","Bruno","Helena","Dario","Ines","Ulises","Janet","Fabian","Karen","Axel",
    "Laura","Nicolas","Miriam","Damian","Norma","Gael","Olivia","Hugo","Pamela","Iker",
    "Raquel","Joaquin","Susana","Kevin","Tamara","Lorenzo","Ursula","Maximiliano","Veronica","Nelson",
    "Wendy","Orlando","Yaretzi","Patricio","Zaira","Ramiro","Abril","Sebastian","Belinda","Teodoro",
    "Clarisa","Uriel","Denisse","Yahir","Esmeralda","Baltazar","Flor","Benito","Graciela","Rene",
    "Irma","Federico","Jessica","Efrain","Karenina","Horacio","Lilia","Ciro","Magdalena","Rogelio",
    "Nereida","Agustin","Ofelia","Braulio","Perla","Claudio","Rebeca","Domingo","Samanta","Edgar",
    "Tania","Fausto","Violeta","Gustavo","Xochitl","Heriberto","Yesenia","Ignacio","Zulema","Jonathan",
    "Alma","Kristian","Bertha","Leopoldo","Celeste","Moises","Dafne","Nestor","Estrella","Octavio",
    "Fatima","Pedro","Gema","Ramon","Hilda","Santiago","Ilse","Tristan","Joana","Ubaldo",
    "Kenia","Valentin","Leticia","Walter","Maribel","Xavier","Nadia","Yandel","Olivia","Zaid",
    "Priscila","Abel","Renata","Beto","Sara","Carmelo","Tamara","David","Uriana","Estuardo",
    "Viviana","Felix","Wanda","German","Xena","Homero","Yuliana","Ismael","Zoe","Kevin",
    "Ambar","Lazaro","Barbara","Marcos","Constanza","Noe","Dulce","Omar","Elisa","Pascual",
    "Frida","Quentin","Grecia","Rodolfo","Herminia","Santino","Ivette","Tadeo","Jacqueline","Ulberto",
    "Kassandra","Valerio","Liliana","William","Marisol","Ximeno","Nayeli","Yael","Oriana","Zacarias",
    "Paulina","Aarón","Queralt","Blas","Ruth","Camilo","Silvana","Dylan","Tabata","Elian",
    "Uma","Fabricio","Vanina","Genaro","Wilma","Harold","Xitlali","Ian","Yamileth","Jacobo"
};

    int ed[300] = {
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30,
        21, 24, 19, 26, 22, 25, 20, 23, 27, 21, 31, 35, 22, 28, 30, 21, 24, 19, 26, 22
    };

    char sx[300] = {
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H',
        'M','H','M','H','M','H','M','H','M','H'
		,'M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M',
        'H','M','H','M','H','M','H','M','H','M','H'
    };

    int edo[300] = {
       	21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 14, 17, 18, 25, 27, 29, 
		31, 4, 9, 10, 12, 16, 21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 14, 17, 18, 25, 27, 29, 31, 
		4, 9, 10, 12, 16, 1, 2, 3, 6, 8, 11, 21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 14, 17, 18, 
		25, 27, 29, 31, 4, 9, 10, 12, 16, 21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 14, 17, 18, 25, 
		27, 29, 31, 4, 9, 10, 12, 16, 1, 2, 3, 6, 8, 11, 21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 
		14, 17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 21, 7, 15, 19, 30, 20, 22, 5, 26, 13, 14, 
		17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 1, 2, 3, 6, 8, 11, 21, 7, 15, 19, 30, 20, 22, 
		5, 26, 13, 14, 17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 21, 7, 15, 19, 30, 20, 22, 5, 
		26, 13, 14, 17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 1, 2, 3, 6, 8, 11, 21, 7, 15, 19, 
		30, 20, 22, 5, 26, 13, 14, 17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 21, 7, 15, 19, 30, 
		20, 22, 5, 26, 13, 14, 17, 18, 25, 27, 29, 31, 4, 9, 10, 12, 16, 1, 2, 3, 6, 8, 11
    };

    int ej[300] = {
        1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
        0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,
        1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,
        1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,
        0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,
        0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,
        1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,
        1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,
        0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,
        0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,
        1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,
        1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,
        0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,
        0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,
        1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1
    };

    int inte[300] = {
    1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2,
	1, 2, 3, 1, 2, 3, 1, 2, 3, 2
    };

    int idi[300] = {
        1,2,1,2,1,2,1,2,1,2,2,1,2,1,2,1,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1,
        1,2,1,2,1,2,1,2,1,2,2,1,1,2,1,2,1,2,1,2,
        2,1,2,1,2,1,2,1,1,2,1,2,1,2,1,2,2,1,2,1
    };

    int pts[300]; // puntos para ordenar
    int pos[300]; // posiciones originales

    int emi, ema; // edad minima y maxima
    char sb; // sexo buscado
    int eb; // estado buscado
    int ejb; // ejercicio buscado
    int ib; // intencion buscada
    int idb; // idioma buscado

    int i;

    printf("========== MATCH.COM ==========\n");

    printf("\nEdad minima: ");
    scanf("%d", &emi);

    printf("Edad maxima: ");
    scanf("%d", &ema);

    printf("\nSexo buscado:\n");
    printf("M = Mujer\n");
    printf("H = Hombre\n");
    scanf(" %c", &sb);

    printf("\nEstado buscado:\n");
    for(i = 1; i <= 32; i++)
        printf("%d = %s\n", i, edoNom[i]);
    scanf("%d", &eb);

    printf("\nEjercicio:\n");
    printf("1 = Si\n");
    printf("0 = No\n");
    scanf("%d", &ejb);

    printf("\nIntencion:\n");
    printf("1 = Amistad\n");
    printf("2 = Relacion\n");
    printf("3 = Networking\n");
    scanf("%d", &ib);

    printf("\nIdioma:\n");
    printf("1 = Espanol\n");
    printf("2 = Ingles\n");
    scanf("%d", &idb);

    calcPts(ed, sx, edo, ej, inte, idi, pts, pos, n,
            emi, ema, sb, eb, ejb, ib, idb);

    burbuja(pts, pos, n);

    mostrarTop(nom, edoNom, ed, sx, edo, ej, inte, idi,
               pts, pos, 3, n);

    return 0;
}

void calcPts(int ed[], char sx[], int edo[], int ej[], int inte[], int idi[],
             int pts[], int pos[], int n,
             int emi, int ema, char sb, int eb, int ejb, int ib, int idb)
{
    int i;
    int cal;
    int medio;
    int dif;

    medio = (emi + ema) / 2;

    for(i = 0; i < n; i++)
    {
        cal = 0;
        pos[i] = i;

        if(sx[i] != sb)
        {
            pts[i] = -1000;
        }
        else
        {
            if(edo[i] == eb)
                cal += 20;
            else
                cal -= 10;

            if(ed[i] >= emi && ed[i] <= ema)
                cal += 30;
            else
                cal -= 20;

            if(ej[i] == ejb)
                cal += 10;
            else
                cal -= 5;

            if(inte[i] == ib)
                cal += 20;
            else
                cal -= 10;

            if(idi[i] == idb)
                cal += 15;
            else
                cal -= 5;

            dif = ed[i] - medio;

            if(dif < 0)
                dif = dif * -1;

            cal += 5 - dif;

            if(cal < 0)
                cal = 0;

            if(cal > 100)
                cal = 100;

            pts[i] = cal * 1000 + (999 - dif) + (300 - i);
        }
    }
}

void burbuja(int pts[], int pos[], int n)
{
    int i, j, aux;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(pts[pos[j]] < pts[pos[j + 1]])
            {
                aux = pos[j];
                pos[j] = pos[j + 1];
                pos[j + 1] = aux;
            }
        }
    }
}

void mostrarTop(char nom[][25], char edoNom[][30], int ed[], char sx[],
                int edo[], int ej[], int inte[], int idi[],
                int pts[], int pos[], int top, int n)
{
    int i, p, cont, cal;

    printf("\n========== TOP 3 RECOMENDADOS ==========\n");

    cont = 0;

    for(i = 0; i < n && cont < top; i++)
    {
        p = pos[i];

        if(pts[p] > 0)
        {
            cont++;

            cal = pts[p] / 1000;

            printf("\n%d. %s\n", cont, nom[p]);
            printf("Edad: %d\n", ed[p]);
            printf("Sexo: %c\n", sx[p]);
            printf("Estado: %s\n", edoNom[edo[p]]);

            printf("Ejercicio: ");
            if(ej[p] == 1)
                printf("Si\n");
            else
                printf("No\n");

            printf("Intencion: ");
            if(inte[p] == 1)
                printf("Amistad\n");
            else if(inte[p] == 2)
                printf("Relacion\n");
            else
                printf("Networking\n");

            printf("Idioma: ");
            if(idi[p] == 1)
                printf("Espanol\n");
            else
                printf("Ingles\n");

            printf("Calificacion: %d.%d/10\n", cal / 10, cal % 10);
        }
    }

    if(cont == 0)
    {
        printf("\nNo hay personas recomendadas en ese estado.\n");
    }
 else 
    {
        printf("\n=================================== POSIBLES ALTERNATIVAS =============================\n");
        printf("%-12s  %-4s  %-8s  %-20s  %-10s  %-12s\n", "Nombre", "Edad", "Sexo", "Estado", "Ejercicio", "Intencion");
        printf("---------------------------------------------------------------------------------------\n");
        
        for(; i < n && cont < 15; i++) { 
            p = pos[i];
            if(pts[p] > 0) {
                printf("%-12s  %-4d  %-8s  %-20s  %-10s  %-12s\n",
                    nom[p],
                    ed[p],
                    sx[p] == 'H' ? "Hombre" : "Mujer",
                    edoNom[edo[p]],
                    ej[p] == 1 ? "Si" : "No",
                    inte[p] == 1 ? "Amistad" : (inte[p] == 2 ? "Relacion" : "Networking")
                );
                
                cont++; 
            }
        }
        printf("=======================================================================================\n\n");
    }
}
    

