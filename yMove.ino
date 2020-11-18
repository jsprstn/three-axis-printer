void yMove(int cycles, int yUpDown, int zLiftDo)
{
  // Moves the Y-axis stepper motor a given number of cycles
  // in a given direction using goY() at a fixed speed
  // Optionally, raises or lowers the printer tip by
  // one zLift() increment at end of cycle

  int i;
  for (i = 0; i < cycles; i++)
    goY(1000, yUpDown);
  zLift(zLiftDo);
}
