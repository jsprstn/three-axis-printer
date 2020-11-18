void home(void)
{
  // Returns X and Y axis stepper motors to top of motion range

  int i;
  for (i = 0; i < 2300; i++)
  {
    goX(1000, 1);
    goY(1000, 1);
  }
}
