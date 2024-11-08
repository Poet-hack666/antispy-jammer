
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0
¿Desea recibir notificaciones de www.defensa.com?
Sí, activarlasX Becolve Digital
Estrategia de Defensa en profundidad en ciberseguridad industrial.
En entornos de automatización industrial e infraestructuras críticas la principal preocupación es mantener la disponibilidad de todos los componentes del sistema en contraposición de la confidenci...

Portada del blog
Comparte este artículo
Suscríbete ahora al newsletter! 
email
Enviar
Categorías
Alta disponibilidad
Ciberseguridad
Cloud
Comunicaciones
Control de Operaciones
Eficiencia Operativa
Formación
Gestión de datos
Integración IT-OT
Mantenimiento de activos
Noticias
Sin categorizar
Suscripción
Transformación Digital
Sectores
Aeropuertos
Aguas
Automoción
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0
Data Center
Energía
F&B
Facility Management
Farma
Ferroviario
OEM
Oil&Gas
Packaging
Puertos
Química y Cosmética
Smart City
Transporte y movilidad
Túneles
Se considera el término de ciberseguridad industrial como aquellos mecanismos para prevenir el acceso ilegal o no deseado, la interferencia intencional o no intencional con la operación adecuada y prevista, o el acceso inadecuado a información confidencial en sistemas de automatización y control industrial. La seguridad electrónica incluye computadoras, redes, sistemas operativos, aplicaciones y otros componentes configurables programables del sistema.

La seguridad de la información, tradicionalmente, se ha focalizado en conseguir 3 principales objetivos:

Confidencialidad de la información.
Integridad de los datos.
Disponibilidad.
Tradicionalmente, en entornos informáticos, se ha priorizado la confidencialidad de la información, pues es la propia información lo que tiene valor para la función.

En entornos de automatización industrial e infraestructuras críticas las prioridades son diferentes. En estos entornos, la principal preocupación es mantener la disponibilidad de todos los componentes del sistema en contraposición de la confidencialidad.

Modelo para estrategia de defensa en profundidad
Modelo CIA de IEC 62443

El modelo “CIA1” mostrado en la Figura 1 no es adecuado para una comprensión completa de los requisitos de seguridad de una infraestructura crítica. Para ello, hace falta considerar otros requisitos fundamentales como, por ejemplo, los especificados en la IEC62443:

Control de acceso: proteger los activos de accesos e información de accesos no autorizados.
Control de uso: proteger a los activos de operaciones no autorizadas.
Integridad de la información: proteger los canales de comunicación contra de cambios no autorizados de la información que transportan.
Confidencialidad de la información: asegurar que la información del espionaje.
Restringir los flujos de datos: proteger los canales de comunicación para evitar que la información llegue a destinos no autorizados.
Respuesta a incidentes: asegurar que se responde a incidentes de ciberseguridad de forma correcta. Implica: monitorización, reporting, alertas y la ejecución de acciones correctoras.
Disponibilidad de recursos: asegurar que todos los recursos del sistema están disponibles y protegerlos de denegaciones de servicio.
Cada vez más, las operaciones de los entornos ICS OT dependen de las tecnologías de la información para el correcto desarrollo de su función. Es, por tanto, necesario implementar controles de ciberseguridad que los proteja, asegure su disponibilidad y su correcto funcionamiento, tanto de las operaciones como de los equipos de la organización.

Contramedidas típicas a utilizar para minimizar amenazas externas son:

Autenticación de usuarios y equipos.
Controles de acceso.
IDS
Uso de cifrado.
Uso de firmas digitales
Aislamiento y/o segregación de redes/dispositivos.
Escáneres de vulnerabilidades.
Monitorización de la actividad de los equipos y de la red.
Seguridad física.
Para la mitigación de amenazas internas hace falta una aproximación diferente, dado que un posible atacante tendría la posibilidad de saltarse las contramedidas normales. En este caso, se requiere poner más énfasis en contramedidas como las políticas y procedimientos, separación de roles, monitorización de las actividades, cifrado y auditoría de sistemas.

Por tanto, una tecnología, producto o solución única no es suficiente para proteger adecuadamente los sistemas de control. Se requiere emplear una estrategia multi-capa que incluya dos o más mecanismos de seguridad que se superpongan, es decir, emplear estrategias de defensa en profundidad.

Una estrategia de defensa en profundidad incluye el uso de cortafuegos, creación de DMZ, el uso de soluciones para la detección de intrusiones, políticas de seguridad efectivas, programas de formación, respuesta ante incidentes, mecanismos para garantizar la seguridad física y mecanismos para la monitorización y alerta de incidentes. De esta manera, si una salvaguarda en particular falla, existirán otras en las capas inferiores que mantendrán el riesgo en niveles aceptables.

estrategia defensa en profundidad en ciberseguridad industrial
Estrategia de defensa en profundidad

 
Defensa en profundidad
1. Políticas y procedimientos de seguridad: Reglas, obligaciones y procedimientos que definan el enfoque de la organización para la protección y seguridad de la información. Las políticas deben comunicarse a toda la organización en una forma apropiada, entendible y accesible.

2. Seguridad física y del entorno: Objetivo: evitar que un posible atacante disponga de acceso físico a los equipos e infraestructuras de red industrial (al Hardware). Las barreras, mecanismos de control de acceso físico y de vigilancia son los pilares para incrementar la seguridad de esta dimensión.

3. Defensa perimetral: El perímetro es el punto o conjunto de puntos de la red interna de confianza, gestionada por la propia organización, entra en contacto con otras redes externas o no fiables, cómo puede ser Internet o redes gestionadas por terceros. El atacante puede tener acceso a los servicios ofrecidos o accesibles desde el exterior y aprovecharse de ellos para realizar una actividad maliciosa. Las medidas en esta capa se centran en el aseguramiento de los accesos remotos a la red.

4. Defensa de red: Si el atacante tiene acceso a la red, puede monitorizar el tráfico que circula por ésta, de forma pasiva (solo lectura) o activa (modificación posible). Para proteger la red de estas amenazas suelen utilizarse sistemas de detección de intrusiones y sistemas de prevención de intrusiones.

5. Defensa de equipos: La seguridad de equipos, tanto servidores como clientes, se basa en la implementación de las siguientes salvaguardas:

 Instalar parches de seguridad para eliminar vulnerabilidades conocidas.
Desactivar todos los servicios innecesarios para minimizar el factor de exposición del equipo
Disponer de un anti-malware activo.
Controlar las comunicaciones entrantes mediante un cortafuegos
Restringir la ejecución de aplicaciones
6. Defensa de aplicaciones: Las aplicaciones se protegen realizando un control de acceso mediante la sólida implantación de mecanismos de autenticación y autorización.

7. Defensa de datos: Si un atacante ha conseguido traspasar todas las protecciones anteriores y tiene acceso a la aplicación, la autenticación y autorización, así como el cifrado, constituyen las tecnologías más empleadas para proteger los datos.

8. Se recomienda el uso de mecanismos automatizados para realizar copias de seguridad de los sistemas de control que permita disponer de un control de versiones.

9. Se recomienda redundar el almacenamiento de las copias.

Links relacionados con defensa en profundidad

Cómo Logitek implementa la defensa perimetral.
Cómo Logitek implementa la defensa de la red interna.
Defensa en profundidad.
Cómo Logitek implementa la defensa de los equipos.
Cómo Logitek implementa la defensa de los datos.
 

Artículos relacionados

Impulsamos la Transformación Digital en la industria y las infraestructuras. Empoderamos a personas y organizaciones para que sean más competitivas, eficientes y sostenibles.
DIRECCIÓN:
Carretera Sant
Cugat, 63,
Edf. B 2a Planta
08191 – Rubí
Barcelona (España)
CONTACTO
+34 93 588 67 67
Email
Síguenos
Linkedin
Twitter
Youtube
Newsletter
+34 93 588 67 67
SOLUCIONES
Industria
Infraestructuras
RECURSOS
E-books
Webinars
Demos
Tech Pills
Casos de Éxito
PRODUCTOS
Alta disponibilidad
Ciberseguridad
Cloud
Comunicaciones
Control de Operaciones
Eficiencia Operativa
Gestión de Datos
Integración IT-OT
Mantenimiento de Activos
Transformación Digital
INDUSTRIA
Automoción
Food & Beverage
Farma
OEM
Packaging
Química y Cosmética
INFRAESTRUCTURAS
Data Center
Aeropuertos
Ciclo del Agua
Energía
Puertos
Smart Cities
Transporte y Movilidad
Túneles
Facility Management
FORMACIÓN
Formación
Certificados
Webinars
PARTNERS
Expert Partner Program
Directorio de Partners
Becolve Digital Lab
AVEVA SELECT
EVENTOS
BLOG
CONTACTO


Becolve 2024
Condiciones de venta
Política de corresponsabilidad
Política de calidad
Código ético
Canal ético
Política de privacidad
Política de cookies
Aviso legal


Viernes, 8 de noviembre de 2024 Iniciar Sesión Suscríbase
inicio

Defensa
Industria

El MBDA “Brimstone” es capaz de destruir simultáneamente en salva múltiples naves de ataque
defensa.com, 25 de junio de 2013



(defensa.com) El misil MBDA Brimstone, probado en combate, llevó a cavo la primera acción del mundo de salva superficie-superficie contra múltiples amenazas de naves rápidas de ataque en la costa FIAC (Fast In-shore Attack Craft) con solo pulsar un botón. El éxito de la prueba demostró su capacidad para destruir numerosos navíos sin necesidad de una laboriosa designación de cada uno de ellos y su habilidad de disparar y olvidar armas de ataque de superficie. Tres Brimstone operando en banda milimétrica se lanzaron en una salva rápida de menos de un segundo contra una formación de ataque simulada de 5 FIAC, adquiriendo independientemente y enganchando sus respectivos blancos a distancias de 4 a 5 km. (alcance restringido por seguridad).

Los impactos directos representaron daños estructurales extensivos de los 3 navíos líderes, incluyendo uno que se desplazaba a 20 nudos. Los misiles se lanzaron desde una plataforma de ensayos de superficie con un triple raíl, en condiciones de mar de fuerza 3. El programa lo ha desarrollado MBDA UK en Stevenage (Hertfordshire) y las pruebas se han llevado a cabo en la costa Oeste de Escocia, con apoyo de QinetiQ. Se ha propuesto para desplegarlo con el programa Sea Spear contra FIAC y otras pequeñas amenazas de superficie en todos los ambientes meteorológicos. El Dual Mode Brimstone (banda milimétrica/buscador SAL) ha probado sus capacidades en ataques de precisión contra blancos fijos y móviles durantes operaciones de combate de la RAF en Afganistán y Libia y el milimétrico se ha utilizado en Libia mediante aviones Tornado GR4.
Fotografía: Disparo de un “Brimstone”.


Copyright © Grupo Edefa S.A. defensa.com ISSN: 3045-5170. Prohibida la reproducción total o parcial de este artículo sin permiso y autorización previa por parte de la empresa editora.








LO MÁS VISTO
La Guardia Nacional y la Policía Nacional de Venezuela reciben camionetas Mitsubishi, motos Morini y equipo...
Tucanos de la Fuerza Aérea Argentina interceptan un vuelo narco pilotado por un ex alto oficial de la Fuerza Aérea de...
El proyectil de artillería de 120 km. de alcance de General Atomics podría estar listo el año que viene
Misiles Iskander rusos en el norte de África, un giro estratégico que altera el equilibrio de fuerzas regionales
El atípico navío USS Hershel “Woody” Williams en la base española de Rota




Quienes somos
Aviso legal
Publicidad
Grupo Edefa SA - Clara del Rey nº 12-8º B4 28002 MADRID (ESPAÑA)
© 2024 . Todos los derechos reservados     © Gestor de contenidos Gestor de contenidos HagaClic

 noticia
Lotería Nacional
DANA
Donald Trump
Muere Ama María Lajusticia
Elon Musk
Stephen Hawking
José Elías
Estopa
Forbes España
Ángel Gaitán
Audiencias TV
Ayudas Cultura Joven
Yolanda Ramos
Alertas DANA
Silvia Intxaurrondo
Mike Tyson
Pasapalabra
Nico Williams
Entradas Dellafuente
UNESCO
Estados Unidos
Whatsapp
Thriller
Barrio Sevilla
Pompeya
Comercio Girona
Detergente
Ejército Ucrania
Fórmula 1
Andaluz Forbes
Alcaraz
Colombia
Lotería Navidad
Últimas noticias
Noticias
Últimas noticias
España
Opinión
Cotizalia
Inmobiliario
Jurídico
Planeta A
Europa
Mundo
Cultura
Deportes
Comunicación
Teknautas
Televisión
ACV
Motor
De Compras
Interactivos
El tiempo
Multimedia
Verticales
Área de usuario
Suscríbete
Iniciar sesión
Newsletters
Podcasts
Otros
Fotos Viñetas Escaparate El tiempo Obituarios Servicios Blogs
© TITANIA COMPAÑÍA EDITORIAL, S.L. 2024. España. Todos los derechos reservados
Condiciones
Política de privacidad
Transparencia
Auditado por GFK
Canal Interno de Información
Suscríbete
España
Cotizalia
Opinión
Salud
Internacional
Cultura
Teknautas
Deportes
ACyV
Televisión
Vanitatis
España
foro desafíos defensa 2024
La tecnología multidominio y la amenaza híbrida: el enemigo invisible ya está aquí
El Confidencial organizó la primera edición del foro Desafíos Defensa en Córdoba, centrada en el reto para la base industrial y tecnológica. Estas fueron las claves de un evento que dio cita a líderes industriales, militares y políticos
Foto: Foro Desafíos Defensa 2024. (El Confidencial)
Foro Desafíos Defensa 2024. (El Confidencial)
Por Juanjo Fernández. Córdoba
04/02/2024 - 05:00
Ya en el siglo III A.C., el brahmán hindú llamado Chanakia disertaba en sus escritos sobre cómo cualquier país vecino era, por definición, un potencial enemigo y describía con detalle qué estrategias y acciones tomar para restarles poder antes de que pudieran convertirse en una amenaza.
Ante un rival fuerte, propugnaba el pensador indio, es mejor evitar un ataque directo y optar, en cambio, por desacreditar a sus gobernantes y sembrar la alarma en el pueblo. Espías, asesinos, agitadores, propagadores de rumores o agentes para promover la corrupción. En definitiva, cualquier operación que se pueda ejecutar sin dejar rastro y evitar así una escalada bélica contraproducente para tus intereses. Durante milenios, estas han sido las bases de la guerra híbrida. Ahora, la tecnología está cambiando las reglas del juego. Los desafíos que plantean las nuevas tecnologías, las amenazas híbridas y la guerra multidominio fueron algunos de los ejes centrales del foro Desafíos en la Industria de la Defensa, organizado por El Confidencial en la ciudad de Córdoba y donde pudimos escuchar una amplia gama de análisis, datos y opiniones de expertos militares, industriales e institucionales. Fuimos con muchas expectativas y hemos vuelto con nuestros cuadernos de notas, los que todavía apuntamos a mano, a rebosar de información. Repasamos a continuación ahora algunas de las claves.
Amenazas híbridas
Si bien la esencia del conflicto híbrido y las operaciones en la zona gris son centenarias, fue en los años 90, durante las guerras de Chechenia y de Líbano cuando este tipo de acciones comienzan a ganar intensidad. Pero no es hasta 2006, con el conflicto entre Israel y Hezbolá, cuando se empieza hablar generalizadamente de guerra híbrida. Como concepto, no es más que la unión de capacidades regulares e irregulares: acciones militares convencionales junto a actuaciones no militares, ambas en pos del mismo fin. Dicho de otra manera, conseguir objetivos militares utilizando no solo medios militares. Pero mientras muchos de los países de nuestro entorno llevan décadas preparándose para estos nuevos escenarios, España llegó más bien tarde y no sin dificultades.
Foto: Mesa redonda 'Desafío industrial'. (El Confidencial)
TE PUEDE INTERESAR
Cumbre de la industria de defensa en Córdoba: ambición para cumplir con España y la OTAN
Tomás Muñoz M.
"Las Fuerzas Armadas afrontaron esta amenaza con mucho más interés y esfuerzo que apoyo y medios", aseguró el general Fernando Alejandre, ex jefe de Estado Mayor de la Defensa (JEMAD) y asesor de RETI España. Prueba de ello es que apenas se hizo nada en ese terreno hasta que el almirante Fernando García Sánchez ocupó el cargo de JEMAD entre 2011 y 2017, siendo el antecesor del general Alejandre (2017-2020).
Es un desafío en el que hay que esperar todo tipo de acciones, convencionales e irregulares, "donde el principal apoyo del enemigo va a estar en el desarrollo tecnológico, la globalización y la polarización de nuestra sociedad", decía el ex-JEMAD. La importancia de estas operaciones "híbridas" es tal que el general ruso Valeri Gerasimov, quien trabajó mucho en este campo creando doctrina al respecto, llegó a decir que las fuerzas armadas eran más eficaces cumpliendo sus objetivos con el mínimo empleo de fuerza militar.
Las operaciones secretas cibernéticas, campañas de desinformación masiva y tácticas de presión geopolítica pueden llegar a ser armas tan efectivas como las convencionales. No produce bajas, pero socavan la moral, generan dudas, dividen y allanan el camino hacia los objetivos militares. Al creciente desafío generado por esta evolución de la guerra híbrida se ha tenido que responder con una orgánica específica en los ejércitos para afrontar estos retos en el ciberespacio o en la seguridad de las comunicaciones.
Sin embargo, proseguía Alejandre, la sociedad española interpreta muy mal las amenazas, no las interioriza. Se piensa que, o bien en realidad no existen, o son tenues y lejanas. Esto deja carta blanca a nuestros rivales estratégicos para explotar nuestras propias debilidades, lo que es muy difícil de admitir por parte de la ciudadanía. Como conclusión, el general Alejandre nos dejaba un mensaje preocupante: "En los próximos 15 o 20 años, en España nos enfrentaremos a algún tipo de amenaza híbrida que pondrá en peligro la seguridad de toda la sociedad. La única solución será afrontar esta cuestión desde una perspectiva nacional".
Ciberespacio y nuevas tecnologías
Afrontar estos nuevos desafíos requiere nuevos medios y métodos. Las mismas tecnologías convertidas en arma de ataque son las mismas con las que tratamos de defendernos. Pero, si bien la adaptación tecnológica esto puede tener sus dificultades, el teniente general José María Millán Martínez, jefe del CESTIC (Centro de Sistemas y Tecnologías de la Información y las Comunicaciones) apuntaba que el auténtico desafío yace en el cambio cultural necesario para afrontar esta nueva situación.
Renovar equipos e incluso métodos de trabajo tiene su coste y dificultad, pero es factible. El cambio cultural implica hacer cambiar a las personas y eso, añadía, es muchas veces lo más difícil. "No sé qué es más difícil si meter una idea nueva en la cabeza de alguien o sacar una idea vieja". El ciberespacio, reconocido por la OTAN desde 2016 como un "espacio de operaciones" —es decir, otro dominio de batalla— es de una complejidad tremenda y con la dificultad añadida de que evoluciona con gran rapidez. Aquí, explicaba el teniente coronel Francisco Marín Gutiérrez, del Mando Conjunto del Ciberespacio, hay tres factores fundamentales: el tecnológico, el de los agentes de la amenaza y el de los usuarios.
Foto: Ponentes de la mesa 'Desafío híbrido'.
TE PUEDE INTERESAR
España se quita el complejo: más inversión en defensa para dejar atrás "la edad de la inocencia"
Tomás Muñoz M.
La tecnología ha traído un incremento exponencial de potenciales ataques, con más capacidades para el atacante y más flancos expuestos por el defensor en sociedades altamente digitalizadas.
Los agentes son de todo tipo. Los hay que son gobiernos, otros son organizaciones terroristas y los hay que directamente son grupos criminales. Pero también ha surgido un "activismo híbrido" donde tienen cabida desde hackers antisistema hasta otros actores que trabajan de manera más o menos organizada para defender determinadas políticas nacionales o posiciones ideológicas. En este último caso tenemos el ejemplo de la enorme cantidad de activistas prorrusos en redes sociales y foros. Los usuarios representan, por un lado, el objetivo de muchas de las actuaciones y, a la vez, suponen el 80% de los puntos de entrada de ciberataques, con tácticas tan sencillas como el envío de correos o mensajes de apariencia inocente.
El espacio: un entorno clave y disputado
Hasta hace unos años el espacio era cosa de las grandes potencias. A día de hoy, más de 65 países tienen satélites en órbita, a los que hay que añadir otros de capital privado e incluso de individuos particulares.
El espacio se ha democratizado y esto ha hecho que pase de ser algo transversal que daba apoyo a los ejércitos (comunicaciones e inteligencia, sobre todo) a convertirse en un verdadero campo de batalla, como muestra el hecho de que China y Rusia hayan incorporado las operaciones espaciales a su doctrina militar. Con esto, Miguel Ángel Panduro, CEO de Hispasat, dejaba meridianamente clara la importancia del espacio ultraterrestre en la defensa nacional y cómo no va a hacer más que creer en un futuro próximo.
Foto: Feria Feindef 2023. (Sergio Beleña)
TE PUEDE INTERESAR
Desafíos Defensa 24 | Las amenazas invisibles y el nudo gordiano de la soberanía estratégica
K.A.P.
Una necesidad tan estratégica como esta no puede depender de las decisiones de países, empresas o personas ajenas al interés nacional. El ejemplo es claro y no hay más que pensar en Elon Musk y su sistema Starlink y en el papel que ha jugado en el conflicto ucraniano, cuando tuvo en sus manos el facilitar o no información vital a las tropas de Kiev. En cuanto a la guerra híbrida, es fácil deducir el potencial de capacidades y el interés en poder actuar sobre satélites, cuando estos nos proporcionan, a menudo sin que seamos conscientes, servicios hoy tan esenciales como internet, comunicaciones o navegación.
Respecto a la situación de nuestro país, el CEO de Hispasat nos dejó unos mensajes muy positivos. España está acometiendo la renovación de sus satélites estratégicos entre 2024 y 2028 y, con ellos, tendrá los sistemas más avanzados de Europa. "Son activos que hacen que España forme parte de un club muy selecto, que nos permite un importante intercambio de información e inteligencia".
Agilidad o nada
La tecnología fue otro de los grandes temas a debate, en el que se hablaron de tres grandes temas: la capacidad de adaptación a las tecnologías disruptivas (de las Fuerzas Armadas y de la industria), la necesidad de cooperación (nacional y europea) para los proyectos del sector y potenciar el factor dual de la tecnología de defensa. "Las tendencias 2024-2043 definen ocho grandes tecnologías: big data, inteligencia artificial, sistemas autónomos, tecnologías espaciales, tecnologías cuánticas, hipersónica, biotecnología, nuevos materiales y nuevas formas de producción", especificó el general de división Enrique Campo Loarte, subdirector general de Planificación, Tecnología e Innovación del Ministerio de Defensa, quien comentó el ejemplo del programa Coincidente como "de colaboración público-privada, donde se cofinancian proyectos maduros de aplicación civil para introducirlos en el ámbito militar".
Pero además, el general Campo Loarte hizo una importante salvedad: "La disrupción no siempre viene por una o varias nuevas tecnologías. En defensa sabemos que el uso innovador de tecnologías existentes también pueden tener un efecto disrutpor [...] como los drones comerciales". Tener claras las prioridades es solo el comienzo. Pero es igual de importante la capacidad para asumir esas tecnologías de forma efectiva en tu defensa nacional. "La agilidad. Las innovaciones tienen que ser ágiles y resueltas en el momento que se necesitan para enfrentar a las amenazas. Aquí quiero romper una lanza por las pymes y las midcaps, que tienen muchas veces la capacidad de tomar decisiones rápidas sin que existan unos condicionantes complejos. Tenemos que llegar a tiempo cuando la tecnología se necesita", explicó Justo Sierra, consejero delegado de la gallega Urovesa, fabricante de referencia de vehículos de grado militar para el Ejército.
Foto: El ministro de Industria y Turismo, Jordi Hereu. (El Confidencial)
TE PUEDE INTERESAR
Hereu: "Queremos ser socios estratégicos de Defensa para la reindustrialización del país"
José Luis Losa
Pero una vez en marcha, el ejecutivo explicó la complejidad y tamaño de los proyectos de alta carga tecnológica, donde cooperan expertos industriales, militares y académicos, de la esfera pública y privada. "El reto es la financiación, ya que se necesitan grandes programas liderados por empresas tractoras que permeen hacia otras más pequeñas. Estas son fundamentales, porque tienen capacidad y agilidad, y en su esencia está la innovación", agregó Sierra. Esa agilidad tiene mucho que ver con la capacidad de las empresas para captar y retener el talento, otro de los desafíos compartidos de los que se debatió en el foro. Entre las múltiples ideas expuestas, destacó la necesidad de ampliar las capacidades de entrenamiento y formación.
"En GAM el foco lo tenemos puesto en la constante formación de nuestros técnicos. Creemos que más que traer de fuera, nosotros nos focalizamos más en el desarrollo y capacitación de nuestros empleados", explicó Diego García Pastor, director corporativo de Desarrollo de Negocio de GAM.
Esta empresa de alquiler y venta de maquinaria lanzó en 2017 una escuela de oficios virtual llamada Kirleo, que solo el año pasado impartió cursos para casi 30.000 alumnos.
La respuesta es... Europa
Además, se analizaron estos desafíos entendiendo que la competencia tecnológica es global. A las grandes potencias con Estados Unidos o China y sus enormes presupuestos de defensa (y su I+D asociada), se han sumado países con industrias de defensa cada vez más pujantes, de Corea del Sur a Turquía pasando por Israel, gracias a sus productos innovadores. La respuesta, coinciden en el sector, es Europa. "Hemos pasado de la edad de la inocencia a la edad de la responsabilidad. Esto es un cambio de período que no afecta solo a España, es el cambio de paradigma en Europa. Hemos invertido fondos estructurales en muchas políticas públicas, transporte, agrícolas, medioambientales. Pero no nos hemos dado cuenta de que una política esencial es la seguridad", consideró Pablo García-Berdoy, responsable de Asuntos Públicos para Europa de LLYC.
"Hay que aprovechar todas las oportunidades de financiación y estudiarlas con detalle y cómo se ajustan a los proyectos y el perfil de nuestras empresas. Segundo, ver las complementariedades con otras empresas para presentar proyectos que aporten valor a los actores que están participante. Tercero, experiencia de diálogo en el ecosistema de defensa europeo con una presencia activa. Y por último, ensayo y error. No siempre va a salir el proyecto que queremos. Pero hay que repetir el intento".
window.ECCO.emit('ec:import:outbrain');
Última hora
Comprobar Lotería Nacional jueves: resultado del sorteo y números premiados 7 de noviembre, hoy en directo
DANA en España última hora | Descienden a 78 los desaparecidos activos y hallan en Catarroja el cadáver de un hombre que fue arrastrado por el agua
Quién es Ángel Gaitán, el héroe y villano de la DANA que se declaró públicamente "facha" en el programa de Iker Jiménez
Ni Cataluña ni Galicia: esta es la región de España con más ricos, según la Lista Forbes
Muere a los 100 años Ana María Lajusticia, fundadora de la marca que lleva su nombre
Harris: "Acepto la derrota, pero la lucha de mi campaña no ha acabado"
Niño Becerra se pronuncia sobre las consecuencias económicas de la DANA: “la dimensión económica es terrorífica”
Izan y Neizan, los niños voluntarios que han sembrado la esperanza tras la DANA: "Repartimos lo que la gente necesita"
Fue la primera catedral española declarada Patrimonio de la Humanidad por la UNESCO y este año ha celebrado su 40 aniversario
El sistema de alertas de Japón contra las inundaciones que podría inspirar a España tras la DANA
Lista de todas las páginas web que ofrecen servicios en la zona de la Dana en Valencia
Si eres amante de la F1 esto te interesa: Hamilton ofrece un millón de dólares al que descubra por qué su Mercedes no rinde al máximo
Las becas de 13.000 euros del CIS para estudiantes en 2025: estos son los requisitos que debes cumplir
El gran ascenso de José Elías en la Lista Forbes: cuánto dinero tiene y puesto en el ranking
Conciertos de Duki en España: cómo y
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0 dónde comprar las entradas y precios
¿Dónde está Ribera? El ministerio de obras hidráulicas, fuera de los grupos DANA de Sánchez y Mazón
Los pueblos de Canarias que correrían peligro ante una DANA tan extrema como la de Valencia
Ayudas para el comercio de proximidad en Girona: en busca de ciudades sostenibles y resilientes
Exposiciones, danza o ciclos de artes: la ayuda destinada a jóvenes en Cataluña para disfrutar de la cultura
El pueblo de Zaragoza que esconde una de las murallas más espectaculares de España: es ideal para los amantes de la naturaleza
El exentrenador de Djokovic dispara contra Alcaraz: "Puede pasar de golpes increíbles a..."
"He sufrido": Nico Williams revela en 'La revuelta' su hartazgo de las críticas en España
Esta psicóloga explica qué es el trauma vicario, lo que están viviendo muchos españoles a causa de la DANA
La lección de estilo de Rania de Jordania: un dos piezas blanco con falda y original estampado y zapatos de tacón azules
Este es el país europeo que se ha convertido en el paraíso de los jubilados británicos
Uno de los presuntos correos humanos de Sito Miñanco cambia su versión y dice que el dinero incautado no era del 'narco'
El TS da la razón a Pérez de los Cobos y anula otro nombramiento en la Guardia Civil
El PP, sobre el retraso de Mazón en la reunión de crisis: "Le corresponde a él explicar su agenda ese día"
Sánchez y Ribera se borran del Congreso y el PP ve "mala fe" en la gestión de la DANA
El Supremo subraya el papel de Ábalos en la trama como número dos del PSOE
Ver más
Defensa Fuerzas Armadas Tecnología militar Militar Sector industrial Ministerio de Industria Eventos EC
El redactor recomienda
Foto: El ministro de Industria y Turismo, Jordi Hereu. (El Confidencial)
Hereu: "Queremos ser socios estratégicos de Defensa para la reindustrialización del país"
José Luis Losa
Foto: La secretaria de Estado de Defensa, María Amparo Valcarce García. (El Confidencial)
Valcarce García: "El objetivo es alcanzar una inversión en defensa del 2% del PIB en 2029"
Lino Vargas
Foto: Mesa redonda 'Desafío industrial'. (El Confidencial)
Cumbre de la industria de defensa en Córdoba: ambición para cumplir con España y la OTAN
Tomás Muñoz M.
 privado bloquear atodos los usuarios que intenten integrarse o editar está política y privacidad es privado y así se mantendrá privado.Es noticia
Lotería Nacional
DANA
Donald Trump
Muere Ama María Lajusticia
Elon Musk
Stephen Hawking
José Elías
Estopa
Forbes España
Ángel Gaitán
Audiencias TV
Ayudas Cultura Joven
Yolanda Ramos
Alertas DANA
Silvia Intxaurrondo
Mike Tyson
Pasapalabra
Nico Williams
Entradas Dellafuente
UNESCO
Estados Unidos
Whatsapp
Thriller
Barrio Sevilla
Pompeya
Comercio Girona
Detergente
Ejército Ucrania
Fórmula 1
Andaluz Forbes
Alcaraz
Colombia
Lotería Navidad
Últimas noticias
Noticias
Últimas noticias
España
Opinión
Cotizalia
Inmobiliario
Jurídico
Planeta A
Europa
Mundo
Cultura
Deportes
Comunicación
Teknautas
Televisión
ACV
Motor
De Compras
Interactivos
El tiempo
Multimedia
Verticales
Área de usuario
Suscríbete
Iniciar sesión
Newsletters
Podcasts
Otros
Fotos Viñetas Escaparate El tiempo Obituarios Servicios Blogs
© TITANIA COMPAÑÍA EDITORIAL, S.L. 2024. España. Todos los derechos reservados
Condiciones
Política de privacidad
Transparencia
Auditado por GFK
Canal Interno de Información
Suscríbete
España
Cotizalia
Opinión
Salud
Internacional
Cultura
Teknautas
Deportes
ACyV
Televisión
Vanitatis
España
foro desafíos defensa 2024
La tecnología multidominio y la amenaza híbrida: el enemigo invisible ya está aquí
El Confidencial organizó la primera edición del foro Desafíos Defensa en Córdoba, centrada en el reto para la base industrial y tecnológica. Estas fueron las claves de un evento que dio cita a líderes industriales, militares y políticos
Foto: Foro Desafíos Defensa 2024. (El Confidencial)
Foro Desafíos Defensa 2024. (El Confidencial)
Por Juanjo Fernández. Córdoba
04/02/2024 - 05:00
Ya en el siglo III A.C., el brahmán hindú llamado Chanakia disertaba en sus escritos sobre cómo cualquier país vecino era, por definición, un potencial enemigo y describía con detalle qué estrategias y acciones tomar para restarles poder antes de que pudieran convertirse en una amenaza.
Ante un rival fuerte, propugnaba el pensador indio, es mejor evitar un ataque directo y optar, en cambio, por desacreditar a sus gobernantes y sembrar la alarma en el pueblo. Espías, asesinos, agitadores, propagadores de rumores o agentes para promover la corrupción. En definitiva, cualquier operación que se pueda ejecutar sin dejar rastro y evitar así una escalada bélica contraproducente para tus intereses. Durante milenios, estas han sido las bases de la guerra híbrida. Ahora, la tecnología está cambiando las reglas del juego. Los desafíos que plantean las nuevas tecnologías, las amenazas híbridas y la guerra multidominio fueron algunos de los ejes centrales del foro Desafíos en la Industria de la Defensa, organizado por El Confidencial en la ciudad de Córdoba y donde pudimos escuchar una amplia gama de análisis, datos y opiniones de expertos militares, industriales e institucionales. Fuimos con muchas expectativas y hemos vuelto con nuestros cuadernos de notas, los que todavía apuntamos a mano, a rebosar de información. Repasamos a continuación ahora algunas de las claves.
Amenazas híbridas
Si bien la esencia del conflicto híbrido y las operaciones en la zona gris son centenarias, fue en los años 90, durante las guerras de Chechenia y de Líbano cuando este tipo de acciones comienzan a ganar intensidad. Pero no es hasta 2006, con el conflicto entre Israel y Hezbolá, cuando se empieza hablar generalizadamente de guerra híbrida. Como concepto, no es más que la unión de capacidades regulares e irregulares: acciones militares convencionales junto a actuaciones no militares, ambas en pos del mismo fin. Dicho de otra manera, conseguir objetivos militares utilizando no solo medios militares. Pero mientras muchos de los países de nuestro entorno llevan décadas preparándose para estos nuevos escenarios, España llegó más bien tarde y no sin dificultades.
Foto: Mesa redonda 'Desafío industrial'. (El Confidencial)
TE PUEDE INTERESAR
Cumbre de la industria de defensa en Córdoba: ambición para cumplir con España y la OTAN
Tomás Muñoz M.
"Las Fuerzas Armadas afrontaron esta amenaza con mucho más interés y esfuerzo que apoyo y medios", aseguró el general Fernando Alejandre, ex jefe de Estado Mayor de la Defensa (JEMAD) y asesor de RETI España. Prueba de ello es que apenas se hizo nada en ese terreno hasta que el almirante Fernando García Sánchez ocupó el cargo de JEMAD entre 2011 y 2017, siendo el antecesor del general Alejandre (2017-2020).
Es un desafío en el que hay que esperar todo tipo de acciones, convencionales e irregulares, "donde el principal apoyo del enemigo va a estar en el desarrollo tecnológico, la globalización y la polarización de nuestra sociedad", decía el ex-JEMAD. La importancia de estas operaciones "híbridas" es tal que el general ruso Valeri Gerasimov, quien trabajó mucho en este campo creando doctrina al respecto, llegó a decir que las fuerzas armadas eran más eficaces cumpliendo sus objetivos con el mínimo empleo de fuerza militar.
Las operaciones secretas cibernéticas, campañas de desinformación masiva y tácticas de presión geopolítica pueden llegar a ser armas tan efectivas como las convencionales. No produce bajas, pero socavan la moral, generan dudas, dividen y allanan el camino hacia los objetivos militares. Al creciente desafío generado por esta evolución de la guerra híbrida se ha tenido que responder con una orgánica específica en los ejércitos para afrontar estos retos en el ciberespacio o en la seguridad de las comunicaciones.
Sin embargo, proseguía Alejandre, la sociedad española interpreta muy mal las amenazas, no las interioriza. Se piensa que, o bien en realidad no existen, o son tenues y lejanas. Esto deja carta blanca a nuestros rivales estratégicos para explotar nuestras propias debilidades, lo que es muy difícil de admitir por parte de la ciudadanía. Como conclusión, el general Alejandre nos dejaba un mensaje preocupante: "En los próximos 15 o 20 años, en España nos enfrentaremos a algún tipo de amenaza híbrida que pondrá en peligro la seguridad de toda la sociedad. La única solución será afrontar esta cuestión desde una perspectiva nacional".
Ciberespacio y nuevas tecnologías
Afrontar estos nuevos desafíos requiere nuevos medios y métodos. Las mismas tecnologías convertidas en arma de ataque son las mismas con las que tratamos de defendernos. Pero, si bien la adaptación tecnológica esto puede tener sus dificultades, el teniente general José María Millán Martínez, jefe del CESTIC (Centro de Sistemas y Tecnologías de la Información y las Comunicaciones) apuntaba que el auténtico desafío yace en el cambio cultural necesario para afrontar esta nueva situación.
Renovar equipos e incluso métodos de trabajo tiene su coste y dificultad, pero es factible. El cambio cultural implica hacer cambiar a las personas y eso, añadía, es muchas veces lo más difícil. "No sé qué es más difícil si meter una idea nueva en la cabeza de alguien o sacar una idea vieja". El ciberespacio, reconocido por la OTAN desde 2016 como un "espacio de operaciones" —es decir, otro dominio de batalla— es de una complejidad tremenda y con la dificultad añadida de que evoluciona con gran rapidez. Aquí, explicaba el teniente coronel Francisco Marín Gutiérrez, del Mando Conjunto del Ciberespacio, hay tres factores fundamentales: el tecnológico, el de los agentes de la amenaza y el de los usuarios.
Foto: Ponentes de la mesa 'Desafío híbrido'.
TE PUEDE INTERESAR
España se quita el complejo: más inversión en defensa para dejar atrás "la edad de la inocencia"
Tomás Muñoz M.
Portales
- Webinar -
Empleo
Robotica
Mantenimiento
Industria 4.0
IIoT
Ciberseguridad
Cloud & Big Data
Vision Artificial
Controladores y Reguladores
5G Industrial

Menú
Python en la Automatización Industrial
27 Septiembre 2021
Blog Automatas
Leído
 23577 
veces
PLC PAC Controladores

Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras de Python para IIoT

Python en la Automatización Industrial
Cuando comenzamos la conversación sobre qué lenguajes de programación usar en aplicaciones de automatización industrial, generalmente comenzamos hablando de lenguajes IEC 61131-3 para PLC, como el clásico diagrama de contactos (LD) o el texto estructurado (ST). Para aplicaciones como la robótica, a menudo vemos lenguajes de programación compilados de bajo nivel como los que se encuentran en la familia C.

Hasta hace muy poco, nadie hablaba de usar Python en la fábrica. ¿Qué ha cambiado para que un lenguaje interpretado de alto nivel se vuelva atractivo de repente? El código Python normalmente se ejecuta más lento que un lenguaje compilado que está más cerca del código de máquina, y ciertamente no está a la altura de la tarea del control en tiempo real, que es un gran obstáculo al desarrollar sistemas industriales.

Sin embargo, ahora estamos viendo una confluencia de factores que están destacando a Python. Primero, la Industria 4.0 está cambiando el paradigma de cómo pensamos sobre la automatización industrial; a saber, su énfasis en la maquinaria “inteligente” con una autonomía mejorada, un rico panorama de big data y una integración completa con tecnologías de próxima generación como la fabricación aditiva y la computación en la nube.

Otra implicación de la Industria 4.0 es la Internet industrial de las cosas (IIoT), que conecta la maquinaria industrial en una red local para la comunicación de máquina a máquina (M2M) en tiempo real y para proporcionar un flujo constante de datos de sensores para análisis. Como resultado, estamos siendo testigos de una convergencia de TI / OT, ​​una ruptura de los silos que durante mucho tiempo separaron a los profesionales de tecnología de la información de sus contrapartes de tecnología operativa. Después de todo, los dispositivos IIoT utilizan información para optimizar sus operaciones.

Esto nos devuelve a Python. Cuando miramos las fortalezas del lenguaje de programación más popular del mundo, vemos algunas ventajas claras para IIoT. Ante todo, Python es conocido por su capacidad para manejar grandes conjuntos de datos. En segundo lugar, Guido Van Rossum, el inventor de Python, lo diseñó para una alta legibilidad, un rasgo clave cuando varios ingenieros trabajarán o mantendrán el mismo código y una característica que alimenta el fuego de la iteración innovadora. Y, finalmente, Python es de código abierto, tiene una comunidad increíble y es la opción preferida para muchas de las aplicaciones más atractivas de la actualidad.

Machine Learning
Sin lugar a dudas, el campo donde Python ejerce su mayor influencia es en el aprendizaje automático (Machine Learning ML), una rama de la inteligencia artificial (IA) donde los algoritmos aprenden de los datos sin que nadie codifique explícitamente ninguna regla. Las aplicaciones industriales comunes incluyen el mantenimiento predictivo y la robótica autónoma. La mayor parte del ML actual está escrito en Python. Los marcos como PyTorch y TensorFlow de código abierto de Google usan Python. AWS SageMaker, el servicio de inteligencia artificial en la nube de Amazon, viene con un kit de desarrollo de software (SDK) de Python integrado. En pocas palabras, Python es la mejor herramienta para el trabajo.

Así es como se ve una configuración de ML industrial común. Los datos de las máquinas y los sensores se envían a la nube, donde tenemos fácil acceso a recursos de alto rendimiento que podemos usar para entrenar un modelo de aprendizaje automático. Una vez que tenemos un modelo entrenado, por ejemplo, uno que puede analizar datos para decir qué tan pronto es probable que una máquina se rompa, podemos enviar ese modelo de regreso a la planta.

Al ejecutar la edge computing incorporando GPU en los propios dispositivos de producción o utilizando los recursos de una puerta de enlace IIoT local para fog computing, podemos usar nuestro modelo entrenado en el sitio. Si miramos a un robot autónomo, el código Python interpretará los objetivos de alto nivel, y esto, a su vez, es interpretado en movimientos por el código compilado de bajo nivel que interactúa directamente con el hardware.

Una analogía fácil es mover el brazo: su cerebro establece la intención de alto nivel y el sistema nervioso de bajo nivel mueve sus músculos. A medida que avanzamos en la Industria 4.0 y los fabricantes encuentran usos más innovadores para la IA, esperamos que las habilidades de ingeniería de Python sean un activo cada vez más crucial.

Visión por computadora
Para que un brazo robótico levante algo, primero necesita saber qué está mirando. Ingrese a la visión por computadora (CV), un campo de inteligencia artificial que permite a las máquinas usar sus cámaras como ojos y, lo que es más importante, reconocer los objetos que ven. Simplemente considerando el papel descomunal de Python en ML, no es difícil ver cómo Python es útil para CV.

Desarrollado originalmente por Intel a finales de los 90, OpenCV es ahora una de las mejores opciones para el desarrollo de CV de código abierto. Aunque la biblioteca todavía está escrita en C ++, la envoltura de Python, opencv-python, es ideal para aplicaciones de aprendizaje automático como el deep learning para CV porque conserva la velocidad del código C ++ original y, al mismo tiempo, desbloquea los beneficios de Python.

Además, dado que opencv-python crea matrices NumPy como salida, podemos transferir inmediatamente nuestros datos a otras herramientas de Python como SciPy, Matplotlib o la plataforma ML que elijas. El resultado es una máquina que ve mucho más que píxeles, una que puede distinguir productos, realizar comprobaciones de control de calidad y manipular sus entornos con intrincados detalles.

Creando un puente para un ecosistema conectado
DSC2509 Cuando los fabricantes de máquinas envían dispositivos, no suelen priorizar la capacidad de comunicarse con otra cosa que no sea la interfaz hombre-máquina (HMI). Cuando agregamos el hecho de que muchas máquinas ejecutan código propietario o código G, que se ejecuta increíblemente cerca del hardware, el lado de TI de la convergencia de TI / OT se vuelve aún más difícil. ¿Cómo conseguimos que las máquinas se hablen entre sí si no son capaces de hablar el mismo idioma?

Bueno, necesitamos un traductor, y Python está a la altura. Los programas como OpenMTC actúan como middleware, o "pegamento de software", para aplicaciones M2M e IoT. Por ejemplo, si colocamos este middleware en un dispositivo tan simple como una Raspberry Pi, el script de Python toma los datos de una fuente, los convierte y los envía a una máquina diferente en un formato que pueda leer.

Un ejemplo simple es cualquier proceso de fabricación sensible a la temperatura. Si bien es posible que la maquinaria no pueda ajustar la temperatura por sí misma, su termómetro puede tomar lecturas y, si cruza un cierto umbral, hace ping al middleware, que puede decirle al calentador que baje el termostato.

Podemos aplicar esta misma lógica a cualquier máquina que dependa de la salida de otra máquina. Además, no solo podemos utilizar este método para integrar maquinaria actual para impulsar el rendimiento, sino que también abre la puerta a un mundo de nuevas posibilidades. Uno de esos dominios del horizonte son los automóviles sin conductor; al comunicarse con otros vehículos en la carretera, optimizarán los patrones de tráfico, acortarán los desplazamientos y reducirán los accidentes. Si tuviéramos que apostar, diríamos que Python será un componente clave de este futuro interconectado.

 Conclusión
Si bien es posible que no terminemos usando Python para controlar el hardware robótico o interactuar directamente con la maquinaria de fabricación, eso no significa que este lenguaje de programación no tenga aplicaciones industriales. Cuando tomamos una visión general de la Industria 4.0, vemos que los datos son su característica definitoria. Estamos superponiendo directamente el mundo digital al mundo físico. Y es por eso que necesitamos Python: para cerrar la brecha entre ellos, para manejar los volúmenes de datos sin precedentes que estamos generando y para admitir el control macroscópico.

Autor: Yuri Chamarelli Lead Product Marketing Specialist en Phoenix Contact

Fuente: https://www.plcnext-community.net/







Artículos relacionados

TIA Portal V20 Rendimiento y eficiencia máxima para la Automatización

TIA Portal V20: Ingeniería eficiente e integración con módulos MTP

Impulso al open source industrial
Descargas
Pantallas HMI
Vincular variables entre Vijeo Designer y SoMachine Basic
Visión & Deteccion
Presentacion Cámara inteligente Omron MicroHAWK F440-F (En)
Motion Control y Servos
Puesta en marcha de un variador de frecuencia para bombeo solar
Kuka
Gemelo VIrtual de Robot KUKA con Tecnomatix Process Simulate
Motion Control
Sinamics G120 Integración en TIA Portal

 


 

Partners




              
Newsletter infoPLC
Apúntate
Contacto
Sobre nosotros
Publicidad / Advertise
Empleo
Política de privacidad
 
 
 
©2024 infoPLC.net
Automatizacion Industrial, Robótica e Industria 4.0
La tecnología ha traído un incremento exponencial de potenciales ataques, con más capacidades para el atacante y más flancos expuestos por el defensor en sociedades altamente digitalizadas.
Los agentes son de todo tipo. Los hay que son gobiernos, otros son organizaciones terroristas y los hay que directamente son grupos criminales. Pero también ha surgido un "activismo híbrido" donde tienen cabida desde hackers antisistema hasta otros actores que trabajan de manera más o menos organizada para defender determinadas políticas nacionales o posiciones ideológicas. En este último caso tenemos el ejemplo de la enorme cantidad de activistas prorrusos en redes sociales y foros. Los usuarios representan, por un lado, el objetivo de muchas de las actuaciones y, a la vez, suponen el 80% de los puntos de entrada de ciberataques, con tácticas tan sencillas como el envío de correos o mensajes de apariencia inocente.
El espacio: un entorno clave y disputado
Hasta hace unos años el espacio era cosa de las grandes potencias. A día de hoy, más de 65 países tienen satélites en órbita, a los que hay que añadir otros de capital privado e incluso de individuos particulares.
El espacio se ha democratizado y esto ha hecho que pase de ser algo transversal que daba apoyo a los ejércitos (comunicaciones e inteligencia, sobre todo) a convertirse en un verdadero campo de batalla, como muestra el hecho de que China y Rusia hayan incorporado las operaciones espaciales a su doctrina militar. Con esto, Miguel Ángel Panduro, CEO de Hispasat, dejaba meridianamente clara la importancia del espacio ultraterrestre en la defensa nacional y cómo no va a hacer más que creer en un futuro próximo.
Foto: Feria Feindef 2023. (Sergio Beleña)
TE PUEDE INTERESAR
Desafíos Defensa 24 | Las amenazas invisibles y el nudo gordiano de la soberanía estratégica
K.A.P.
Una necesidad tan estratégica como esta no puede depender de las decisiones de países, empresas o personas ajenas al interés nacional. El ejemplo es claro y no hay más que pensar en Elon Musk y su sistema Starlink y en el papel que ha jugado en el conflicto ucraniano, cuando tuvo en sus manos el facilitar o no información vital a las tropas de Kiev. En cuanto a la guerra híbrida, es fácil deducir el potencial de capacidades y el interés en poder actuar sobre satélites, cuando estos nos proporcionan, a menudo sin que seamos conscientes, servicios hoy tan esenciales como internet, comunicaciones o navegación.
Respecto a la situación de nuestro país, el CEO de Hispasat nos dejó unos mensajes muy positivos. España está acometiendo la renovación de sus satélites estratégicos entre 2024 y 2028 y, con ellos, tendrá los sistemas más avanzados de Europa. "Son activos que hacen que España forme parte de un club muy selecto, que nos permite un importante intercambio de información e inteligencia".
Agilidad o nada
La tecnología fue otro de los grandes temas a debate, en el que se hablaron de tres grandes temas: la capacidad de adaptación a las tecnologías disruptivas (de las Fuerzas Armadas y de la industria), la necesidad de cooperación (nacional y europea) para los proyectos del sector y potenciar el factor dual de la tecnología de defensa. "Las tendencias 2024-2043 definen ocho grandes tecnologías: big data, inteligencia artificial, sistemas autónomos, tecnologías espaciales, tecnologías cuánticas, hipersónica, biotecnología, nuevos materiales y nuevas formas de producción", especificó el general de división Enrique Campo Loarte, subdirector general de Planificación, Tecnología e Innovación del Ministerio de Defensa, quien comentó el ejemplo del programa Coincidente como "de colaboración público-privada, donde se cofinancian proyectos maduros de aplicación civil para introducirlos en el ámbito militar".
Pero además, el general Campo Loarte hizo una importante salvedad: "La disrupción no siempre viene por una o varias nuevas tecnologías. En defensa sabemos que el uso innovador de tecnologías existentes también pueden tener un efecto disrutpor [...] como los drones comerciales". Tener claras las prioridades es solo el comienzo. Pero es igual de importante la capacidad para asumir esas tecnologías de forma efectiva en tu defensa nacional. "La agilidad. Las innovaciones tienen que ser ágiles y resueltas en el momento que se necesitan para enfrentar a las amenazas. Aquí quiero romper una lanza por las pymes y las midcaps, que tienen muchas veces la capacidad de tomar decisiones rápidas sin que existan unos condicionantes complejos. Tenemos que llegar a tiempo cuando la tecnología se necesita", explicó Justo Sierra, consejero delegado de la gallega Urovesa, fabricante de referencia de vehículos de grado militar para el Ejército.
Foto: El ministro de Industria y Turismo, Jordi Hereu. (El Confidencial)
TE PUEDE INTERESAR
Hereu: "Queremos ser socios estratégicos de Defensa para la reindustrialización del país"
José Luis Losa
Pero una vez en marcha, el ejecutivo explicó la complejidad y tamaño de los proyectos de alta carga tecnológica, donde cooperan expertos industriales, militares y académicos, de la esfera pública y privada. "El reto es la financiación, ya que se necesitan grandes programas liderados por empresas tractoras que permeen hacia otras más pequeñas. Estas son fundamentales, porque tienen capacidad y agilidad, y en su esencia está la innovación", agregó Sierra. Esa agilidad tiene mucho que ver con la capacidad de las empresas para captar y retener el talento, otro de los desafíos compartidos de los que se debatió en el foro. Entre las múltiples ideas expuestas, destacó la necesidad de ampliar las capacidades de entrenamiento y formación.
"En GAM el foco lo tenemos puesto en la constante formación de nuestros técnicos. Creemos que más que traer de fuera, nosotros nos focalizamos más en el desarrollo y capacitación de nuestros empleados", explicó Diego García Pastor, director corporativo de Desarrollo de Negocio de GAM.
Esta empresa de alquiler y venta de maquinaria lanzó en 2017 una escuela de oficios virtual llamada Kirleo, que solo el año pasado impartió cursos para casi 30.000 alumnos.
La respuesta es... Europa
Además, se analizaron estos desafíos entendiendo que la competencia tecnológica es global. A las grandes potencias con Estados Unidos o China y sus enormes presupuestos de defensa (y su I+D asociada), se han sumado países con industrias de defensa cada vez más pujantes, de Corea del Sur a Turquía pasando por Israel, gracias a sus productos innovadores. La respuesta, coinciden en el sector, es Europa. "Hemos pasado de la edad de la inocencia a la edad de la responsabilidad. Esto es un cambio de período que no afecta solo a España, es el cambio de paradigma en Europa. Hemos invertido fondos estructurales en muchas políticas públicas, transporte, agrícolas, medioambientales. Pero no nos hemos dado cuenta de que una política esencial es la seguridad", consideró Pablo García-Berdoy, responsable de Asuntos Públicos para Europa de LLYC.
"Hay que aprovechar todas las oportunidades de financiación y estudiarlas con detalle y cómo se ajustan a los proyectos y el perfil de nuestras empresas. Segundo, ver las complementariedades con otras empresas para presentar proyectos que aporten valor a los actores que están participante. Tercero, experiencia de diálogo en el ecosistema de defensa europeo con una presencia activa. Y por último, ensayo y error. No siempre va a salir el proyecto que queremos. Pero hay que repetir el intento".
window.ECCO.emit('ec:import:outbrain');
Última hora
Comprobar Lotería Nacional jueves: resultado del sorteo y números premiados 7 de noviembre, hoy en directo
DANA en España última hora | Descienden a 78 los desaparecidos activos y hallan en Catarroja el cadáver de un hombre que fue arrastrado por el agua
Quién es Ángel Gaitán, el héroe y villano de la DANA que se declaró públicamente "facha" en el programa de Iker Jiménez
Ni Cataluña ni Galicia: esta es la región de España con más ricos, según la Lista Forbes
Muere a los 100 años Ana María Lajusticia, fundadora de la marca que lleva su nombre
Harris: "Acepto la derrota, pero la lucha de mi campaña no ha acabado"
Niño Becerra se pronuncia sobre las consecuencias económicas de la DANA: “la dimensión económica es terrorífica”
Izan y Neizan, los niños voluntarios que han sembrado la esperanza tras la DANA: "Repartimos lo que la gente necesita"
Fue la primera catedral española declarada Patrimonio de la Humanidad por la UNESCO y este año ha celebrado su 40 aniversario
El sistema de alertas de Japón contra las inundaciones que podría inspirar a España tras la DANA
Lista de todas las páginas web que ofrecen servicios en la zona de la Dana en Valencia
Si eres amante de la F1 esto te interesa: Hamilton ofrece un millón de dólares al que descubra por qué su Mercedes no rinde al máximo
Las becas de 13.000 euros del CIS para estudiantes en 2025: estos son los requisitos que debes cumplir
El gran ascenso de José Elías en la Lista Forbes: cuánto dinero tiene y puesto en el ranking
Conciertos de Duki en España: cómo y dónde comprar las entradas y precios
¿Dónde está Ribera? El ministerio de obras hidráulicas, fuera de los grupos DANA de Sánchez y Mazón
Los pueblos de Canarias que correrían peligro ante una DANA tan extrema como la de Valencia
Ayudas para el comercio de proximidad en Girona: en busca de ciudades sostenibles y resilientes
Exposiciones, danza o ciclos de artes: la ayuda destinada a jóvenes en Cataluña para disfrutar de la cultura
El pueblo de Zaragoza que esconde una de las murallas más espectaculares de España: es ideal para los amantes de la naturaleza
El exentrenador de Djokovic dispara contra Alcaraz: "Puede pasar de golpes increíbles a..."
"He sufrido": Nico Williams revela en 'La revuelta' su hartazgo de las críticas en España
Esta psicóloga explica qué es el trauma vicario, lo que están viviendo muchos españoles a causa de la DANA
La lección de estilo de Rania de Jordania: un dos piezas blanco con falda y original estampado y zapatos de tacón azules
Este es el país europeo que se ha convertido en el paraíso de los jubilados británicos
Uno de los presuntos correos humanos de Sito Miñanco cambia su versión y dice que el dinero incautado no era del 'narco'
El TS da la razón a Pérez de los Cobos y anula otro nombramiento en la Guardia Civil
El PP, sobre el retraso de Mazón en la reunión de crisis: "Le corresponde a él explicar su agenda ese día"
Sánchez y Ribera se borran del Congreso y el PP ve "mala fe" en la gestión de la DANA
El Supremo subraya el papel de Ábalos en la trama como número dos del PSOE
Ver más
Defensa Fuerzas Armadas Tecnología militar Militar Sector industrial Ministerio de Industria Eventos EC
El redactor recomienda
Foto: El ministro de Industria y Turismo, Jordi Hereu. (El Confidencial)
Hereu: "Queremos ser socios estratégicos de Defensa para la reindustrialización del país"
José Luis Losa
Foto: La secretaria de Estado de Defensa, María Amparo Valcarce García. (El Confidencial)
Valcarce García: "El objetivo es alcanzar una inversión en defensa del 2% del PIB en 2029"
Lino Vargas
Foto: Mesa redonda 'Desafío industrial'. (El Confidencial)
Cumbre de la industria de defensa en Córdoba: ambición para cumplir con España y la OTAN
Tomás Muñoz M.
