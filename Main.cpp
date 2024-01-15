#include <stdio.h>

// Definimos enumeraciones

enum OpcionMenu
{
	OPCION_MENU_ANYADIR,   // 0
	OPCION_MENU_MODIFICAR, // 1
	OPCION_MENU_ELIMINAR,  // 2
	OPCION_MENU_SALIR,     // 3
};

enum CodigoProducto
{
	CODIGO_PRODUCTO_ESPAGUETIS = 0,
	CODIGO_PRODUCTO_MACARRONES,     // 1
	CODIGO_PRODUCTO_LINGUINIS,		// 2
	CODIGO_PRODUCTO_LECHE = 100,	// 100
	CODIGO_PRODUCTO_YOGUR,		// 101
	CODIGO_PRODUCTO_QUESO,		// 102

};
void main()
{
	OpcionMenu opcion;
	CodigoProducto codigo;
	
	opcion = OPCION_MENU_ELIMINAR;
	codigo = CODIGO_PRODUCTO_YOGUR;
	
	printf("La opcion elegida es %d\n", opcion);
	printf("El codigo elegido es %d\n", codigo);
	
	if(opcion == OPCION_MENU_ANYADIR)
	{
		printf("Anyadiendo\n");
	}
	else if(opcion == OPCION_MENU_ELIMINAR)
	{
		printf("Eliminando\n");
	}
	
	// Convertir un numero en un enum
	// Es necesario un casting
	
	opcion = (OpcionMenu)0;
	
	switch(opcion)
	{
		case OPCION_MENU_ANYADIR:
			printf("Seleccionado anyadir (con switch)\n");
			break;
		case OPCION_MENU_MODIFICAR:
			printf("Seleccionado modificar (con switch)\n");
			break;
		case OPCION_MENU_ELIMINAR:
			printf("Seleccionado eliminar (con switch)\n");
			break;
		default:
			printf("Salimos si no es una de las anteriores\n");
			break;
			
	}

	
	
	
	
}