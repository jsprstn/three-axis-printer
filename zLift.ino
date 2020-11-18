void zLift(int upOrDown)
{
  // Lifts or lowers printer tip 40 cycles of
  // goZ @ delay of 1000 microseconds
  // Roughly ~5mm up or down as specified

  int i;
  if (upOrDown == 1)
    for (i = 0; i < 40; i++)
      goZ(1000, 1);
  if (upOrDown == -1)
    for (i = 0; i < 40; i++)
      goZ(1000, -1);
}
