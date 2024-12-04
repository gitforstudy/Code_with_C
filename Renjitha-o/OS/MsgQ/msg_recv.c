#include <stdio.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <fcntl.h>
#define SIZE 8192
int main(void)
{
		mqd_t mq_rec_open;
		char buf[SIZE];
		int ret_rec;
		mq_rec_open = mq_open("/mymq", O_RDONLY);
		ret_rec = mq_receive(mq_rec_open, buf, sizeof(buf), NULL);
		printf("message: %s\n", buf);
		return 0;
}
