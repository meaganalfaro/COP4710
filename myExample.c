#include<stdio.h>
#include<pthread.h>

void* add();
void* multiply();
void* hello(void*);

//main is the process that will create threads
int main(){
	pthread_t td1;
        //look up parameters
        pthread_create(&td1,NULL,add,NULL);
//      pthread_join(td1,NULL);
        pthread_t td2;
        pthread_create(&td2,NULL,multiply,NULL);

        pthread_join(td1,NULL);
        pthread_join(td2,NULL);

        int num = 5;
        pthread_t td3;
        pthread_create(&td3,NULL,hello,(void*)&num);
        pthread_join(td3,NULL);
        return 0;
}

void* add(){
	int a = 5;
        int b = 7;
        int c = a + b;
        printf("Sum = %d\n",c);
        return NULL;
}

void* multiply(){
        int x = 9;
        int y = 3;
        int z = x * y;
        printf("Product = %d\n",z);
        return NULL;
}

void* hello(void* ptr){
        int* p = (int*)ptr;
        for(int i =1; i <= *p; i++){
                printf("Hello\n");
        }
	return NULL;
}


