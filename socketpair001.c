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
	z = socketpair(AF_LOCAL, SOCK_STREAM,0,s);

	printf("s[0] = %d;\n", s[0]);
	printf("s[1] = %d;\n", s[1]);

	system("netstat --unix -p");
}
