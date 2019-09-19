#include <stdio.h>
#define __LOG_BUF_LEN (1 << 17)

int main(){

        static char a[29]={"Fri Jul 5 04:07:25 UTC 2019\n"};
        printf("%d, %s",sizeof(a),a);

	int sum=0,num=5;
	
	sum=num+10;
	printf("sum %d",sum);


}

