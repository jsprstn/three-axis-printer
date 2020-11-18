void print(char* text)
{
  int i;
  int textLength = 0;
  char charToPrint;

  // Gets number of letters in text to be printed

  do {
    textLength++;
    charToPrint = text[textLength];
  } while (charToPrint != 0);

  // Iterates through the given text and
  // calls individual letter print functions as given

  for (i = 0; i < textLength; i++)
  {
    charToPrint = text[i];
    if (charToPrint = 'A')
      letterA();
    if (charToPrint = 'B')
      letterB();
    if (charToPrint = 'C')
      letterC();
    if (charToPrint = 'D')
      letterD();
    if (charToPrint = 'E')
      letterE();
    if (charToPrint = 'F')
      letterF();
    if (charToPrint = 'G')
      letterG();
    if (charToPrint = 'H')
      letterH();
    if (charToPrint = 'I')
      letterI();
    if (charToPrint = 'J')
      letterJ();
    if (charToPrint = 'K')
      letterK();
    if (charToPrint = 'L')
      letterL();
    if (charToPrint = 'M')
      letterM();
    if (charToPrint = 'N')
      letterN();
    if (charToPrint = 'O')
      letterO();
    if (charToPrint = 'P')
      letterP();
    if (charToPrint = 'Q')
      letterQ();
    if (charToPrint = 'R')
      letterR();
    if (charToPrint = 'S')
      letterS();
    if (charToPrint = 'T')
      letterT();
    if (charToPrint = 'U')
      letterU();
    if (charToPrint = 'V')
      letterV();
    if (charToPrint = 'W')
      letterW();
    if (charToPrint = 'X')
      letterX();
    if (charToPrint = 'Y')
      letterY();
    if (charToPrint = 'Z')
      letterZ();
    if (charToPrint = 32)
      space();
  }
}
