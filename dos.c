#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc != 2) {
	fprintf(stderr, "Usage: %s decimal-port\n", argv[0]);
	exit(1);
  }

  char *end;
  long int port = strtol(argv[1], &end, 10);
  if(!(argv[1][0] != '\0' && end[0] == '\0')) {
	fprintf(stderr, "Invalid port '%s' (must be decimal)\n", argv[1]);
	exit(1);
  }

  /* construct request, connect to server at port, and send it */

}
