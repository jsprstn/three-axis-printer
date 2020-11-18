void goX(int delay, int dir)
{
  // Moves X-axis stepper motor according to
  // speed and direction given in function call
  // Speed is inversely proportional to delay

  if (dir == 1)
    digitalWrite(xDir, HIGH);
  if (dir == -1)
    digitalWrite(xDir, LOW);
  digitalWrite(xStep, HIGH);
  delayMicroseconds(delay);
  digitalWrite(xStep, LOW);
  delayMicroseconds(delay);
}
