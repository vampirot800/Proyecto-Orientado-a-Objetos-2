# Proyecto-Kerbal-Space-Program-VAB-2

## Proyecto Orientado a Objetos 2

## Diagrama de clases

![Diagrama de clases](UML.png)

### Descripción

El Proyecto Kerbal Space Program VAB, se basa en un simulador del VAB (Vehicle-Assembly-Building) de el juego original, el cual consiste en una version simplificada que permite al usuario crear un cohete y escoger sus componentes, ya sean los motores, los Pods, y los tanques de combustible.
Una vez que el usuario escoja sus componenntes, y en caso de no salir del menu, podra re-escoger diferentes componentes y las estadisticas seran modificadas.-

Cada objeto tiene sus estadisticas base las cuales cambiaran y seran afectadas dependiendo de los componentes seleccionados.
Uno de los atributos de los objetos son los costos de cada uno, los cuales se sumaran y desplegaran el costo total del cohete en la moneda de Kerbal (funds).

***Este proyecto es una optimización del codigo completo anterior, haciendo uso de apuntadores, polimorfismo, clases asbtractas, etc. Sin embargo para hacer esta implementación, se opto por hacer solo una parte especifica del codigo, (Engines), por lo que el codigo no es el VAB completo, y solo cuenta con el menu de implementación de motores para el cohete, el cual imprime las estadisticas dependiendo de la selección.***

### Funcionalidad

Al iniciar el programa se le dara una bienvenida al usuario con dialogos sacados del KSP original, una vez ingresado su nombre, se desplegara un menu, del cual el usuario elegira los motores que desea agregar al cohete y finalmente podra desplegar las estadisticas finales de este, las cuales se mostraran en pantalla.
