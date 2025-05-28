#include <UTFT.h>
#include <UTFT_Geometry.h>

// Configuración de la pantalla ILI9341
UTFT myGLCD(ILI9341_16, 38, 39, 40, 41);

extern uint8_t BigFont[];
// Variables de posición para la flecha
int variables[] = {20, 40, 60, 80};
int currentIndex = 0; // Índice de la variable actual para la flecha

void drawLines() {
    myGLCD.clrScr();  // Limpia la pantalla

    int screenWidth = myGLCD.getDisplayXSize();  // Ancho de la pantalla
    int screenHeight = myGLCD.getDisplayYSize();  // Alto de la pantalla

    int lineLength = 50;  // Longitud de las líneas
    int spaceX = 25;  // Espaciado entre líneas

    int startX = (screenWidth - (lineLength * 4 + spaceX * 3)) / 2;
    int startY = screenHeight / 2;  // Centrar verticalmente

    int colors[][3] = {{255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}; // Rojo, Verde, Azul, Amarillo

    for (int i = 0; i < 4; i++) {
        myGLCD.setColor(colors[i][0], colors[i][1], colors[i][2]);

        int x1 = startX + i * (lineLength + spaceX);
        int x2 = x1 + lineLength;
        myGLCD.drawLine(x1, startY, x2, startY);

        //myGLCD.setColor(255, 255, 255); // Blanco para el texto
        //myGLCD.printNumI(variables[i], x1 + lineLength / 2 - 5, startY - 20);
    }

    // Dibujar la flecha centrada en la línea actual
    //int arrowX = startX + currentIndex * (lineLength + spaceX) + lineLength / 2;
    //drawArrow(arrowX, startY - 10);
}

void drawArrow(int index) {
    //drawArrow(48+74*index, 110);
    int x = 48+74*index;
    int y = 110;
    myGLCD.setColor(0, 0, 0); // bloque negro
    myGLCD.fillRect(0,125,300,140); // Draw a filled rectangle

    int arrowSize = 5;
    myGLCD.setColor(255, 255, 255); // Flecha blanca
    myGLCD.drawLine(x, y+20, x - arrowSize, y + arrowSize+20);
    myGLCD.drawLine(x, y+20, x + arrowSize, y + arrowSize+20);
}

void showLetter(int index, String letter) {
    myGLCD.setColor(0, 0, 0); // bloque negro
    myGLCD.fillRect(20+74*index,90,70+74*index,119); // Draw a filled rectangle    


    myGLCD.setColor(255, 255, 255); // Color blanco para la letra
    myGLCD.setFont(BigFont);
    myGLCD.print(String(letter), 40+74*index, 100);
}

//void showLetter(int x, int y, str letter) {
//}

void setup() {
    myGLCD.InitLCD();
    myGLCD.clrScr();

    drawLines();
    
}

void loop() {
  showLetter(0, "c");
  drawArrow(0);
  delay(500);
  showLetter(1, "a");
  drawArrow(1);
  delay(500);
  showLetter(2, "s");
  drawArrow(2);
  delay(500);
  showLetter(3, "a");
  drawArrow(3);
  delay(500);
  showLetter(0, "");
  drawArrow(0);
  delay(500);
  showLetter(1, "");
  drawArrow(1);
  delay(500);
  showLetter(2, "");
  drawArrow(2);
  delay(500);
  showLetter(3, "");
  drawArrow(3);
  delay(500);
}

