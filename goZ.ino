void goZ(int speed, int dir)
{
  // Moves Y-axis stepper motor according to
  // speed and direction given in function call
  // Speed is inversely proportional to delay

  if (dir == 1)
    digitalWrite(yDir, HIGH);
  if (dir == -1)
    digitalWrite(yDir, LOW);
  digitalWrite(zStep, HIGH);
  delayMicroseconds(speed);
  digitalWrite(zStep, LOW);
  delayMicroseconds(speed);
}
