
#include<stdio.h>
#include<pthread.h>

void* func(void* tid);

int main(){
	pthread_t td[5];
        int num[] = {1,2,3,4,5};

        for(int i = 0; i < 5; i++)
                func(&num[i]);
//              pthread_create(&td[i],NULL,func,(void*)&num[i]);

//      for(int i = 0; i < 5; i++)
//              pthread_join(td[i],NULL);
        return 0;
}

void* func(void* tid){
        int* p = (int*)tid;
        long num = 1;
        for(long i = 0; i < 1000000000; i++)
                num++;
//      printf("Hello from thread %d\n",*p);
        return NULL;
}
