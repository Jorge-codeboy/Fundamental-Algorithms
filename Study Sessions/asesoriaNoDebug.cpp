# include <stdio.h>
# include <string.h>






main() {
	char nombre[10]; 
	
	int contador0simple = 0; // '\0'
    int contador0triple = 0; // '\000'
    int contador0entero = 0; // 0
    int contadorNULL = 0; // NULL
    
    //strcpy(nombre, "Hola Mundo");
    //printf("%s", nombre);
    
	for (int i = 0; i < sizeof(nombre); i++) {
    	
        if (nombre[i] == '\0') {
        	getchar();
        	printf("\a");
        	fflush(stdin);
        	
        	
            printf("\nEncontre 0 simple en posicion %d \0. \n", i, (nombre[i]));
            contador0simple++;
        }
        if (nombre[i] == 0) {
            printf(" Encontre 0 entero en posicion %d (%d). \n", i, nombre[i]);
            contador0entero++;
        }
        if (nombre[i] == '\000') {
            printf(" Encontre 0 triple en posicion %d (%c). \n", i, nombre[i]);
            contador0triple++;
        }
        if (nombre[i] == NULL) {
            printf(" Encontre NULL en posicion %d (%c). \n", i, nombre[i]);
            contadorNULL++;
        }
    }
    
    // \0 Se comporta igual que \000 y que 0:
	// Pregunta 1: �Es lo mismo? 
	// Pregunta 2: �Con qu� seguridad puedo implementar cualquiera de ellos sabiendo que no habr� problemas?
	// Pregunta 2.1 : �Es lo mismo \00000000?
	// Pregunta 3: �NULL es entonces 0?
	// Pregunta 4: �Por qu� no puedo hacer print de nombre[i] pero s� compararlo? OK
	
	// Pregunta 5: �Porqu� VS Code lo rellena de basura? �Ser� cosa del compilador? OK
	
}
