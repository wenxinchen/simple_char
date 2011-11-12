#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	int fd;
	fd = open("/dev/my_dev", O_RDWR);
	if(fd < 0) 
	{
		printf("open failed.\n");
		return -1;
	}

	ioctl(fd, 0);

	close(fd);

	return 0;
}
