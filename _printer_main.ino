// ATMN 251 0NA Microcomputers
// Final Project
// Instructor: Harshvadan Panchal
// 2+1 Axis Printer
// Jesse Sapirstein
// N01185396

// Definitions:

#define xStep 2
#define yStep 3
#define zStep 4
#define xDir 5
#define yDir 6
#define zDir 7
#define pb1 9
#define pb2 10
#define pb3 11
#define LED 13

// Global Variables:

int counter;
int sensorState;
int lastSensorState;

// Headers:

void allOutputsZero(void);
void count();
void goX(int speed, int dir);
void goY(int speed, int dir);
void goZ(int speed, int dir);
void zLift(int upOrDown);
void yMove(int cycles, int xUpDown, int zLiftDo);
void xMove(int cycles, int yUpDown, int zLiftDo);
void xyMove(int cycles, int xUpDown, int yUpDown, int zLiftDo);
void home(void);
void freedraw(void);
void print(String text);
void letterA(void);
void letterB(void);
void letterC(void);
void letterD(void);
void letterE(void);
void letterF(void);
void letterG(void);
void letterH(void);
void letterI(void);
void letterJ(void);
void letterK(void);
void letterL(void);
void letterM(void);
void letterN(void);
void letterO(void);
void letterP(void);
void letterQ(void);
void letterR(void);
void letterS(void);
void letterT(void);
void letterU(void);
void letterV(void);
void letterW(void);
void letterX(void);
void letterY(void);
void letterZ(void);
void space(void);

void setup()
{
  pinMode(pb1, INPUT_PULLUP);
  pinMode(pb2, INPUT_PULLUP);
  pinMode(pb3, INPUT_PULLUP);
  pinMode(xStep, OUTPUT);
  pinMode(xDir, OUTPUT);
  pinMode(yStep, OUTPUT);
  pinMode(yDir, OUTPUT);
  pinMode(zStep, OUTPUT);
  pinMode(zDir, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  // All outputs set to zero

  allOutputsZero();

  // Home position

  home();

  // If PB1 is pressed, enters printer tip calibration
  // mode to set height of printer tip relative to surface
  
  // PB1 raises tip by one zlift increment
  // PB2 lowers tip by one zlift increment
  // PB3 exits printer tip calibration mode
  
  if (digitalRead(pb1) == LOW)
    while (digitalRead(pb3) != LOW) {
      if (digitalRead(pb1) == LOW)
        zLift(1);
      if (digitalRead(pb2) == LOW)
        zLift(-1);
    }
    
  // If PB2 is pressed, enters freedraw mode
  
  // User can cycle between X, Y, and Z axis control
  
  // Reset board to exit freedraw mode
  
  if (digitalRead(pb2) == LOW)
    for (;;)
      freedraw();
      
  // If PB3 is pressed, enters print mode
  // Will print the string given in the print()
  // function call and return to top of loop()
  // Accepts A through Z (upper-case only) and space character
  
  if (digitalRead(pb3) == LOW)
    print("HELLO WORLD");
}
