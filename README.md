# Proyecto 5. Guardar datos de alumnos de una escuela.
- Crea un programa que ingrese los datos de 20 alumnos, nombre, apellido, nombre de materia 1, calificación materia 1, nombre de materia 2, calificación materia 2, nombre de materia 3, calificación materia 3, nombre de materia 4, calificación materia 4, nombre de materia 5, calificación materia 5. Y después calcular el promedio general de cada alumno, y promedio final del grupo de 20 alumnos.

Mostrar en pantalla.
- Nombre con apellido del alumno.
- Promedio general de alumno.
- Materia con mayor calificación.
- Materia con menor calificación.
- Y al final el promedio general del grupo.

- Una vez que se muestre en pantalla, darle la opción al usuario si todos los datos están correctos, y de no ser así se pueda modificar el dato erróneo - y posteriormente mostrar de nuevo los datos en pantalla ya con los datos correctos.

# Programa de Cálculo de Promedios de Alumnos
Este programa en C++ permite ingresar los datos de alumnos, incluyendo su nombre, apellido, nombre de 5 materias y las calificaciones correspondientes a cada materia. Luego, calcula el promedio general de cada alumno y el promedio final del grupo de alumnos.

# Funcionamiento del Programa
 El programa solicitará ingresar los datos de cada alumno, en el siguiente orden:

* Nombre del alumno
* Apellido del alumno
* Nombre de la materia 1
* Calificación de la materia 1
* Nombre de la materia 2
* Calificación de la materia 2
* Nombre de la materia 3
* Calificación de la materia 3
* Nombre de la materia 4
* Calificación de la materia 4
* Nombre de la materia 5
* Calificación de la materia 5.

Después de ingresar los datos de ambos alumnos, el programa calculará el promedio general de cada alumno. El promedio se obtiene sumando las calificaciones de las 5 materias y dividiendo el resultado entre 5.

Finalmente, el programa mostrará en pantalla el promedio general de cada alumno, junto con su nombre y apellido. Además, se calculará el promedio final del grupo, que es el promedio de los dos alumnos.

# Requisitos del Entorno de Desarrollo
El programa está escrito en el lenguaje de programación C++.
Se recomienda utilizar un compilador de C++ compatible con el estándar C++11 o superior.
El programa utiliza las librerías estándar de C++, por lo que no requiere de ninguna librería externa adicional.
# Instrucciones para Compilar y Ejecutar el Programa
* Abre el archivo del programa en un entorno de desarrollo de C++ o un editor de texto.

* Compila el programa utilizando el compilador de C++ de tu elección. Por ejemplo, puedes usar el comando g++ en la línea de comandos:

g++ programa.cpp -o SavedataStudents

Ejecuta el programa compilado. En la línea de comandos, utiliza el siguiente comando:


./SavedataStudents
Asegúrate de reemplazar programa con el nombre del archivo ejecutable generado durante la compilación.

Sigue las instrucciones que aparecerán en la pantalla para ingresar los datos de los alumnos y obtener los resultados de los promedios.

No se realizan validaciones exhaustivas de los datos ingresados. Se asume que el usuario proporcionará los datos correctamente y en el formato esperado.
