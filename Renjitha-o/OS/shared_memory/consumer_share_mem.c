#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <fcntl.h>

int main(void)
{
		const int SIZE = 4096;
		const char *name = "OS";
		int shm_fd;
		void *ptr;
		shm_fd = shm_open(name,O_RDONLY,0600);
		ptr = mmap(0,SIZE,PROT_READ,MAP_SHARED,shm_fd,0);
		printf("%s",(char *)ptr);
		shm_unlink(name);
		return 0;
}
