
char * defangIPaddr(char * address)
{
  address = "1.1.1.1";
  int x = 0;
  while(x != 10)
  {
    x++;
    printf(&address);
    if(address[x] == '.')
    {
      printf("2");   
    }
return 0;
}