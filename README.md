# examen-programacion-oficial
hecho por vitaliy perez garcia 

he utlizado copilot,chat gpt, los apuntes subidos, google, mis conociemtos, comits y otras diversas herramientas para poder resolver el examen propuesto 

https://github.com/vitaliy-pg/examen-programacion-oficial.git

parte 1 de teoria tipo text:

C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?: D

Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?: B

En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?: B

parte 3 te teoria a desarrollar :

La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:

¿Cómo la programación orientada a objetos difiere de la programación procedimental?
¿Cómo C++ brinda soporte para ambos paradigmas?

La programación orientada a objetos se enfoca en organizar el código alrededor de objetos que representan entidades del mundo real, promoviendo la encapsulación y la reutilización de código. Por otro lado, la programación procedimental se centra en dividir el programa en funciones que operan en datos, con una separación entre datos y funciones. C++ es un lenguaje que brinda soporte para ambos enfoques, permitiendo utilizar clases y objetos para la programación orientada a objetos, así como funciones para la programación procedimental, lo que lo convierte en un lenguaje versátil.

Las excepciones en C++ tienen un comportamiento específico. Describe:

¿Qué es la propagación de una excepción?
¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

En C++, las excepciones son eventos inusuales que interrumpen el flujo normal de un programa. La propagación de una excepción se refiere a la búsqueda de un bloque catch adecuado a lo largo de la pila de llamadas de funciones para manejarla. Si una excepción no se captura con un bloque catch, se produce un comportamiento no definido que puede llevar a la terminación incontrolada del programa. Por lo tanto, es esencial manejar adecuadamente las excepciones, utilizando bloques catch para capturar y gestionar excepciones donde puedan ocurrir, y considerar un bloque catch más general al final de la pila de llamadas de funciones para manejar excepciones imprevistas y tomar medidas de seguridad.

La gestión de recursos es un concepto crucial en la programación. Explica:

¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?
¿Por qué es importante y cómo se relaciona con la gestión de excepciones?

La "adquisición de recursos" en C++ se refiere a la obtención y asignación de recursos críticos, como memoria o archivos, dentro de un programa. Es crucial para el funcionamiento eficiente y correcto del programa. La gestión de recursos está estrechamente relacionada con la gestión de excepciones, ya que es fundamental liberar los recursos de manera adecuada incluso cuando se producen errores o excepciones. De lo contrario, podrían ocurrir problemas graves, como fugas de memoria. En C++, se utilizan constructores, destructores y objetos especiales como std::unique_ptr o std::shared_ptr para asegurarse de que los recursos se gestionen correctamente, incluso en el manejo de excepciones.


