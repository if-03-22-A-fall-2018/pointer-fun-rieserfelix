/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			PointerFun
 * Author:			Rieser Felix
 * ----------------------------------------------------------
 * Description:
 * There are two functions, one changes the value and the other
 * prints the value. Then you can see wich value is changed(or not).
 * ----------------------------------------------------------
 */

#include <stdio.h>

void print_integers(int value, int *pointer){

  printf("Got an integer value %d and an address to an integer with value %d \n", value, *pointer);
}

void change_integers(int value,int *pointer)
{
  value=8;
  *pointer=45;
}

int main(int argc, char const *argv[]) {

  int value = 7;
  int *pointer;

  pointer = &value;

  print_integers(value, pointer);

  change_integers(value, pointer);

  print_integers(value, pointer);







  return 0;
}
