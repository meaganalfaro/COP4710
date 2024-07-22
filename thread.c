#include<stdio.h>
#include<pthread.h>

void* func(void* ptr);

int main(){
	pthread_t tid;
        long num = 1;
        pthread_create(&tid,NULL,func, (void*)&num); //<- setting void* from function
        pthread_join(tid,NULL);

        return 0;
}

void* func(void* ptr){
        long* num_ptr = (long*)ptr;
        printf("Num = %ld\n", *num_ptr);
        return NULL;
}
