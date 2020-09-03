// Author: Jasmine Sandhu jps6818@psu.edu
// Collaborator: Brian Truong bqt5199@psu.edu
// Collaborator: Gabriel Charpentier gbc5202@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double cel = atof(temp);
  double fahr = 1.8*cel + 32;
printf("%f° in Celsius is equivalent to %f° Fahrenheit." cel,fahr); \n
}
