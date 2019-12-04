#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc != 3) {
	fprintf(stderr, "Usage: %s decimal-port hexadecimal-address\n", argv[0]);
	exit(1);
  }

  char *end;
  long int port = strtol(argv[1], &end, 10);
  if(!(argv[1][0] != '\0' && end[0] == '\0')) {
	fprintf(stderr, "Invalid port '%s' (must be decimal)\n", argv[1]);
	exit(1);
  }

  long int address = strtol(argv[2], &end, 16);
  if(!(argv[2][0] != '\0' && end[0] == '\0')) {
	fprintf(stderr, "Invalid address '%s' (must be hexadecimal)\n", argv[2]);
	exit(1);
  }

  /* construct request, connect to server at port, and send it */

}
