#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>

int main(int argc,char **argv) {
	int z;
	int s[2];
	char *cp;
	char buf[80];

	z = socketpair(AF_LOCAL, SOCK_STREAM,0,s);
	z = write(s[1], cp="Hello World",6);

	printf("Wrote Message '%s' on s[1]\n", cp);

	z = read(s[0], buf, sizeof buf);
	buf[z] = 0;
	printf("Received Message '%s' from socket s[0]\n", buf);

	z = write(s[0], cp="Go away!", 8);
	printf("Wrote Message '%s' on s[0]\n", cp);

	z = read(s[1], buf, sizeof buf);

	buf[z] = 0;
	printf("Received Message '%s' from socket s[1]\n", buf);

	close(s[0]);
	close(s[1]);

	puts("Done.");
	return 0;
}
