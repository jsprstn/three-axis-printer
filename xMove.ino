void xMove(int cycles, int xUpDown, int zLiftDo)
{
  // Moves the X-axis stepper motor a given number of cycles
  // in a given direction using goX() at a fixed speed
  // Optionally, raises or lowers the printer tip by
  // one zLift() increment at end of cycle

  int i;
  for (i = 0; i < cycles; i++)
    goX(1000, xUpDown);
  zLift(zLiftDo);
}
