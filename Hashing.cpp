unsigned int stringToInt(char *key)
{
  int number = 0;
  while (*key)
  number += *key++;
  return number;
}
