/*
                                        TRABAJO PROGRAMACIÓN CONTROL DE HORAS
Integrantes:
 Ricardo David Villamar Monroy.
 Alejandro González Cortijo.

La empresa Gavicu_Paga es una pequeña empresa que quiere instaurar un sistema de
control horario del trabajo de sus empleados.

 Requisitos:
 * Los trabajadores tendrán que introducir su código a la entrada y a la salida.
 * El sistema deberá guardar:
    * Los datos personales (nombre, apellido y DNI).
    * Horas de entrada y salida de cada uno de los días del mes.
    * Total acumulado de horas trabajadas durante ese mes.
    * Total acumulado de horas trabajadas durante ese año.
    * Al final de cada mes, Calculará las horas trabajadas del empleado y calculará el sueldo del mes.

 * El programa dispondrá de un menú tal que:
    * 1. Dar de alta un nuevo empleado.
    * 2. Registrar hora de entrada.
    * 3. Registrar hora de salida.
    * 4. Calcular salario mensual.
    * 5. Dar de baja un empleado.
    * 6. Salir del programa.

 Cada opción realizará:
    1. Deberá permitir registrar en el sistema los datos personales de un nuevo empleado.
    No pueden haber más de 20 empleados.
    2. El trabajador deberá identificarse con su código y la fecha, deberá almacenar la hora
    correspondiente en el día del mes que indica la fecha. (La hora será proporcionada por el
    sistema mediante la llamada a la función creada al efecto y que ya se os proporciona.)
    3. El trabajador deberá identificarse con su código y la fecha, deberá almacenar la hora
    correspondiente en el día del mes que indica la fecha. (La hora será proporcionada por el
    sistema mediante la llamada a la función creada al efecto y que ya se os proporciona.)
    Cuando se introduzca la hora de salida deberá mostrarse en pantalla el número de horas
    trabajadas ese día y actualizar el total del mes.
    4. El sistema calculará, teniendo en cuenta las horas trabajadas en el mismo, el salario
    de cada uno de los empleados, de acuerdo con la siguiente tabla:
        * Horas Trabajadas              Precio/hora
        * <120                          8€
        * 120 - 135                     12.45€
        * 135 - 145                     14.00€
        * >145                          15€
    Deberá mostrar en pantalla el nombre y apellidos de cada empleado junto al salario que
    recibirá.
    Deberá actualizar el total de horas trabajadas durante el año y deberá
    resetear el registro horario mensual.
    5. deberá calcular el salario correspondiente al mes en que se da de baja. En este caso se le
    pagará a 8 €/hora y se le dará un plus del 3% del salario en concepto de finiquito.
    Deberán borrarse sus datos del sistema.


 */

#include <stdio.h>
#include "library.h"

int main() {

    int opcion,habilitador = 1;

    while(habilitador == 1){
        scanf("%d",opcion);
        switch (opcion) {
            case 1:
                printf("Dar de alta a un nuevo empleado.\n");
                break;
            case 2:
                printf("Registrar hora de entrada.\n");
                break;
            case 3:
                printf("Registrar hora de salida.\n");
                break;
            case 4:
                printf("Calcular salario mensual.\n");
                break;
            case 5:
                printf("Dar de baja a un empleado.\n");
                break;
            case 6:
                printf("Salir del programa.\n");
                habilitador = -1;
                break;
            default:
                printf("Introduzca de nuevo un valor aceptable:\n");
        }
    }

}

