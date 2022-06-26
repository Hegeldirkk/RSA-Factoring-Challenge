#ifndef RSA_H
#define RSA_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/*Function that factorize and prints number*/
int factor(unsigned long long int number);

#endif
