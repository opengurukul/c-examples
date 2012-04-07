main()
{
  int i;
  int j;
 
  i = 5;
  j = 15;
 
  { /* unnamed block begin */
    int i;
    double j;
 
    i = 10;
    j = 20.0;
 
    printf("i = %d, j = %f\n",i,j);
 
  } /* unnamed block end */
 
  printf("i = %d, j = %d\n",i,j);
}
