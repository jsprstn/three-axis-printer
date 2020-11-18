void freedraw(void)
{
  // Allows user to individually manipulate X, Y, and Z stepper motors
  // PB3 cycles between axes
  // PB1 and PB2 control forward/reverse motion
  count();
  
  if (counter == 1) {
    digitalWrite(LED, LOW);
    if (digitalRead(pb1) == LOW)
      goX(1000, 1);
    if (digitalRead(pb2) == LOW)
      goX(1000, -1);
  }
  if (counter == 2) {
    digitalWrite(LED, LOW);
    if (digitalRead(pb1) == LOW)
      goY(1000, 1);
    if (digitalRead(pb2) == LOW)
      goY(1000, -1);
  }
  if (counter == 3) {
    // zMode/counter indicator light
    digitalWrite(LED, HIGH);
    if (digitalRead(pb1) == LOW)
      goZ(1000, 1);
    if (digitalRead(pb2) == LOW)
      goZ(1000, 1);
  }
}
