//Estructuras Anidadas
#include<stdio.h>
#include<stdlib.h>

struct infoDireccion{
    char direccion[30];
    char ciudad[20];
    char municipio[20];
};

struct empleado{
    char nombre[20];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados1[2];

struct infoFamiliar{
	char estadoCivil[20];
	int cantHijos;
	char tipoVivienda[15];
}empleados2[2];

struct serviciosPublicos{
	char agua[2];
	char luz[2];
	char telefono[2];
}empleados3[2];


int main(){

    for(int i=0;i<2;i++){
        fflush(stdin);
        
        printf("\nEMPLEADO %d",i+1);
        printf("\n\nDigita tu Nombre: ",i+1);
        gets(empleados1[i].nombre);
        
        printf("Digita tu Direccion: ",i+1);
        gets(empleados1[i].dirEmpleado.direccion);
        
        printf("Digita tu Ciudad: ",i+1);
        gets(empleados1[i].dirEmpleado.ciudad);
        
        printf("Digita tu Municipio: ",i+1);
        gets(empleados1[i].dirEmpleado.municipio);
        
        printf("Digita tu Salario: ",i+1);
        scanf("%lf", &empleados1[i].salario);
        
        fflush(stdin);
        
        printf("Digite su estado civil: ",i+1);
        gets(empleados2[i].estadoCivil);
        
        printf("Digite su tipo de vivienda: ",i+1);
        gets(empleados2[i].tipoVivienda);
        
        printf("Digite la cantidad de hijos: ",i+1);
        scanf("%d", &empleados2[i].cantHijos);
        
        fflush(stdin);
        
        printf("Posee agua en su vivienda?: ");
        gets(empleados3[i].agua);
        
        printf("Posee luz en su vivienda?:  ");
        gets(empleados3[i].luz);
        
        printf("Posee telefono en su vivienda?: ");
        gets(empleados3[i].telefono);

        printf("\n");
    }
    
    for(int i=0;i<2;i++){
        printf("\n\nDatos del empleado num: %d",i+1);
        printf("\nNombre: %s", empleados1[i].nombre);
        printf("\nDireccion: %s", empleados1[i].dirEmpleado.direccion);
        printf("\nCiudad: %s", empleados1[i].dirEmpleado.ciudad);
        printf("\nMunicipio: %s", empleados1[i].dirEmpleado.municipio);
        printf("\nSalario: %.2lf", empleados1[i].salario);
        printf("\nEstado Civil: %s", empleados2[i].estadoCivil);
        printf("\nCantidad de hijos: %d", empleados2[i].cantHijos);
        printf("\nTipo de vivienda: %s", empleados2[i].tipoVivienda);
        printf("\nAgua: %s", empleados3[i].agua);
        printf("\nLuz: %s", empleados3[i].luz);
        printf("\nTelefono: %s", empleados3[i].telefono);
    }

    printf("\n");
    system("pause");
    return 0;
}
