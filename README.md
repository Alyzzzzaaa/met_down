
## Diseño de un recurso didáctico basado en Arduino y Raspberry Pi que favorezca el aprendizaje lingüístico de estudiantes de primaria con síndrome de Down.

Este proyecto implementa un sistema interactivo de aprendizaje de palabras para personas con síndrome de Down, utilizando una combinación de hardware (Arduino, Raspberry Pi Pico) y una pantalla táctil ILI9341 para la retroalimentación visual.



## Deployment

✅ Este programa permite a un Arduino UNO interactuar con un lector RFID MFRC522, un rotary encoder y una pantalla OLED usando la librería U8g2. La funcionalidad principal es:

```bash
   codigo principal
```
✅ Este programa permite a una Raspberry Pi Pico comunicarse con el Arduino UNO mediante UART, procesar mensajes recibidos y mantener una palabra interna actualizada. La lógica principal incluye:
```bash
   metodologiapipico
```
✅Este código implementa una interfaz gráfica basada en Arduino y una pantalla ILI9341 para mostrar letras, guías visuales y un cursor de posición (flecha).
```bash
   pantalla
```
## Mapa de Pines
| **Placa**         | **Conexión**                | **Pinout**    |
| ----------------- | --------------------------- | ------------- |
| Raspberry Pi Pico | Arduino UNO                 | Rx → Pin 7    |
|                   |                             | Tx → Pin 6    |
| Arduino UNO       | Raspberry Pi Pico           | Rx → 1        |
|                   |                             | Tx → 0        |
|                   | Lector RFID RC522           | SDA → Pin 6   |
|                   |                             | SCK → Pin 13  |
|                   |                             | MOSI → Pin 11 |
|                   |                             | MISO → Pin 12 |
|                   |                             | GND → GND     |
|                   |                             | RST → Pin 9   |
|                   |                             | VCC → 3.3V    |
|                   | Codificador Rotativo KY-040 | CLK → Pin A2  |
|                   |                             | DT → Pin A3   |
|                   |                             | VCC → 5V      |
|                   |                             | GND → GND     |
|                   | OLED Display Module 0.91"   | SCL → SCL     |
|                   |                             | SDA → SDA     |
|                   |                             | VCC → 3.3V    |
|                   |                             | GND → GND     |

## Authors

- [@Alyzzzzaaa](https://github.com/Alyzzzzaaa)

- [@FoolishBishope](https://github.com/FoolishBishope)


