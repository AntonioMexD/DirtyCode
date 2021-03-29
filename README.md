1. **Naming matters**

- original linea 7 -> cambio de nombre n1 y n2 a primerNumero y segundoNumero
- original linea 8 -> cambio de nombre x1 y x2 a primerDecimal y segundoDecimal

> Los nombres de las variables no son descriptivos y a la vez no se entienden 

2. **Codigo repetido**

- 26,36,46,56
> Existen funciones repetidas propias del sistema las cuales hacen que no sea legible el código además de ser cansador la abstracción.

3. **Método largo**

- metodo largo linea 5 se cambio de la linea 12 extracción de los cout del menu y llevarlos a un metodo
- metodo largo linea 33,42 se extrajeron a un metodo en la linea 17
- metodo largo linea 46,62 se extrajeron a un metodo en la linea 25
> Existen métodos largos las cuales hacen que el código no sea legible además de tener baja cohesion y alta dependencia.

4. **Muchas condicionales (if)**

- Reemplazar los if por case 41,47,53,59 por switch a la linea 41
> Viola claramente el principio de responsabilidad única. SRP defiende que una clase debe tener una responsabilidad, pero claramente viola esto al poseer comportamientos o responsabilidades.

5. **Funcion larga**

- Mover logica a funciones 47,54,61,68 a las lineas 33,38,43,48
- Extraer mostrar título de los switch lineas 56,63,70,77 a linea 45 y llamado del mismo en linea 80
- Extracion de swich linea 84 a un metodo en la línea 72
> Presenta mucha responsabilidad entre funciones, además de no ser legible y mantenible

6. **Complejidad artificiosa**

- Eliminar complejidad innecesaria de lineas 67,73,80,87 cambio en las lineas 35,37 ,40,42
> Uso forzado de patrones de diseño demasiado complicados, donde uno más simple sería suficiente. Identificadores excesivamente largos: en particular, el uso de convenciones de nombres para proporcionar desambiguación que debería estar implícita.

7. **Clase larga**

- Extracion de métodos con switch de las lineas 17,25,30,35,40,45,72 a sus propias clases refenciadas en sus .h
- Extraccion las funciones del main a su propia clase
- Extraer clase menu de calculadora
> La clase intenta tomar demasiadas responsabilidades, por lo que debería seguir el principio de single responsibility, o sea, cumplir solamente con una de las funcionalidades del software y estar bien encapsulada. Generalmente, muestran demasiadas variables de instancia y código duplicado entre métodos.