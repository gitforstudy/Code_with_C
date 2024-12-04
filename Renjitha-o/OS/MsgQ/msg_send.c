#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#define SIZE 1000

int main(void)
{
		mqd_t mq_snd_open;
		int mq_attr;
		int mq_ret;
		long int len;
		char buf[SIZE];
		struct mq_attr attr;
		mq_snd_open = mq_open("/mymq", O_CREAT|O_RDWR, 0744, NULL);
		mq_attr = mq_getattr(mq_snd_open,&attr);
		if(mq_attr == 0) {
				printf("success\n");
		}else {
				printf("Not success\n");
		}
		printf("flag:%ld\n",attr.mq_flags);
		printf("msgsize:%ld\n",attr.mq_msgsize);
		printf("maxmsg:%ld\n",attr.mq_maxmsg);
		printf("curmsg:%ld\n",attr.mq_curmsgs);
		printf("Please enter the message: ");
		fgets(buf, 1000, stdin);
		len = strlen(buf);
		mq_ret = mq_send(mq_snd_open, buf, len+1, 0);
		if(mq_ret == 0) {
				printf("msg is sent successfully\n");
		}
		else {
				printf("msg is not sent\n");
		}
		return 0;
}
