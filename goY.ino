void goY(int delay, int dir)
{
  // Moves Y-axis stepper motor according to
  // speed and direction given in function call
  // Speed is inversely proportional to delay

  if (dir == 1)
    digitalWrite(yDir, HIGH);
  if (dir == -1)
    digitalWrite(yDir, LOW);
  digitalWrite(yStep, HIGH);
  delayMicroseconds(delay);
  digitalWrite(yStep, LOW);
  delayMicroseconds(delay);
}
