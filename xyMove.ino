void xyMove(int cycles, int xUpDown, int yUpDown, int zLiftDo)
{
  // Combination of xMove and YMove functions
  // Used for drawing diagonals
  // As above, optionally raises or lowers the printer tip
  // by one zLift() increment at end of cycle

  int i;
  for (i = 0; i < cycles; i++) {
    goX(1000, yUpDown);
    goY(1000, yUpDown);
  }
  zLift(zLiftDo);
}
