void count()
{

  // Counter function for use in freedraw()
  Serial.print(counter);
  sensorState = digitalRead(pb3);
  if (sensorState == HIGH && sensorState != lastSensorState) {
    if (counter == 3)
      counter = 0;
    counter++;
    delay(50);
  }
  lastSensorState = sensorState;
}
