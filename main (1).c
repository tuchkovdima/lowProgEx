#include <stdio.h>
#include <stdlib.h>
/*
// 12. найти максимальный элемент массива
int main(){
    
    int array[5] = {2,4,3,5,1};
    int array_lend = 5;
    int i;
    int max_element = array[0];
    
    for(i=0; i<array_lend; i++){
        if(array[i] > max_element){
           max_element = array[i];         
                    
        }               
    }  
     printf("Max_element= %d \n", max_element); 
}
*/

/*
// 13. найти минимальный элемент

int main(){
    
   int array[5] = {4,2,1,5,3};
   int array_lend = 5;
   int i;
   
   int min_element = array[0];
   
   for(i=0; i<array_lend-1; i++){
       if(array[i] < array[i+1]){
           min_element = array[i];
       }
   }
   printf("min_element = %d \n", min_element);
}
*/
/*
// 15. Поменять в массиве максимальный и минимальный элементы 
int main(){
    int array[5] = {4,1,3,5,2};
    int array_lend = 5;
    int i;
    int min_element = array[0];
    int max_element =array[0];
    int min_index_elem, max_index_element;
    
    for(i=0; i<array_lend-1; i++){
        if(array[i]> max_element){
            max_element = array[i];
            max_index_element = i;
        }
        if(array[i] < min_element){
            min_element = array[i];
            min_index_elem = i;
        }
    }
    printf("max_element = %d\n min_element = %d\n", max_element, min_element);
    
    array[min_index_elem] = max_element;
    array[max_index_element] = min_element;
    
    for(i=0; i<array_lend; i++){
        printf("%d", array[i]);
    }
    
}
*/
/*
//19.Находим сумму всех элементов массива, если сумма меньше 50, прибавляем ко всем элементам 7
int main(){
    
    int array[5] = {4,2,1,5,3};
    int i;
    int array_lend = 5;
    int summ = 0;
    
    printf("Mass = ");
    for(i=0; i<array_lend; i++){
        printf("%d ", array[i]);
    }
        for(i=0; i < array_lend; i++){
            summ += array[i];
        }
        for(i=0; i < array_lend; i++){
            if(summ<50){
                      for(i=0; i<array_lend; i++){
                          array[i] += 7;
                    }
                    printf("\nMass+7 = ");
                    
                    for(i=0; i<array_lend; i++){
                    printf(" %d ", array[i]);
                        
            }
        }
    printf("\nsumm = %d ", summ);
    
    }
    
}
*/
/*
//20.Найти минимальный элемент массива. Из всех элементов массива вычесть минимальный

int main(){
    
    int array[5] = {4, 1, 3, 5, 2};
    int array_lend = 5;
    int i;
    int min_element = array[0];
    
    for(i=0; i<array_lend; i++){
        if(array[i]<min_element){
            min_element = array[i];
        }
    }
        printf("min_element = %d \n", min_element);
        
    for(i=0; i<array_lend; i++){
        array[i] = array[i] - min_element;
    }
    printf("mass-7 =");
    
    for(i=0; i<array_lend; i++){
        printf(" %d ", array[i]);
    }
}
*/
// 18. в массиве элементов попарно. Если 1-е число больше 2 го меняем местами если 3 число больше 4 меняем

int main(){
    
    int array[6] = {4,2,5,1,3,6};
    int array_lend = 6;
    int i;
    int zamena;
    
    for(i=0; i<array_lend -1; i++){
        if(array[i]> array[i+1]){
            zamena = array[i];
            array[i] = array[i+1];
            array[i+1] = zamena;
        }
    }
    for(i=0; i<array_lend; i++){
        printf("%d", array[i]);
    }
}

















