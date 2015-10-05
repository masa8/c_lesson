#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5 
int g_value = 0;


pthread_mutex_t lock;

void *thr_func(void *arg){

	
	/* pthread_mutex_lock(&lock); */
	for ( int i =0; i< 10000; ++i) {
		g_value = g_value + 1; 
	} 
	printf("HI :%d\n",g_value);
	/* pthread_mutex_unlock(&lock); */
	pthread_exit(NULL);
}

int main(void){

 pthread_t thr[NUM_THREADS];
 pthread_mutex_init(&lock, NULL);

 int i, rc;

 for ( i = 0; i < NUM_THREADS; ++i){
   if ( ( rc = pthread_create(&thr[i], NULL, thr_func, NULL))){
    fprintf(stderr, "error: %d\n", rc);
    return EXIT_FAILURE;
  }
 }

 for ( i = 0; i < NUM_THREADS; ++i){
   pthread_join(thr[i],NULL);
 }
 printf("RESULT: %d\n", g_value);
  return EXIT_SUCCESS;
}

