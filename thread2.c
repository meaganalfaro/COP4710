#include<stdio.h>
#include<pthread.h>

void* func(void* ptr);

int main(){
	pthread_t tid1, tid2;
        long x = 1, y = 2;

        pthread_create(&tid1, NULL, func, (void*)&x);
        pthread_create(&tid2,NULL, func, (void*)&y);

        pthread_join(tid1, NULL); // making the code wait for tid to complete
        pthread_join(tid2, NULL);

        return 0;

}

void* func(void* ptr){
        long* num_ptr = (long*)ptr;
        printf("Num = %ld \n", *num_ptr);
        return NULL;
}
