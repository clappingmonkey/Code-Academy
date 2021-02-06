int foo (int *p);

int
main (void)
{
  int *p = NULL;   /* null pointer */
  return foo (p);
}

int
foo (int *p)
{
  int y = *p;
  return y;
}
