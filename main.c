// Author: Jasmine Sandhu jps6818@psu.edu
// Collaborator: Brian Truong bqt5199@psu.edu
// Collaborator: Gabriel Charpentier gbc5202@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
printf("%f° in Celsius is equivlent to %f° Fahrenheit.\n", temp, 101.3);
}
