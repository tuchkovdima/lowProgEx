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
/*
//сортировка массива по возрастанию
int main(){
    
    int array[6] = {4,1,5,2,3,6};
    int array_lend = 6;
    int i;
    int zamena;
    int j;
    
    for(i=0; i<array_lend -1; i++){ 
        if(array[i] > array[i+1]){
        zamena = array[i];
        array[i] = array[i+1];
        array[i+1] = zamena;
        }
        for(j=array_lend; j>i; j-- ){
        
            if(array[j]<array[j-1]){
                zamena = array[j];
                array[j] = array[j-1];
                array[j-1] = zamena;
            }
        }
    }
    for(i=0; i<array_lend; i++){
        printf("%d", array[i]);
    }
}
*/

// 18. в массиве элементов попарно. Если 1-е число больше 2 го меняем местами если 3 число больше 4 меняем
/*
int main() {
    int array[6] = {4,1,5,2,6,3};
    int i;
    int j;
    int array_lend = 6;
    int zamena;
    int index_first = i;
    int index_second = i+1;
    
    if(array_lend%2 == 0){
    
    for(i=0; i<array_lend-1 ; i++){
        
        if(array[i] > array[i+1]){
            zamena = array[i];
            array[i] = array[i+1];
            array[i+1] = zamena;
            i++;   
        }
    }
    for(i = 0; i < array_lend; i++){
        printf("%d", array[i]);
    }
} else
    {
        ("mass not chetnii");
        
    }
}
*/
//В массиве чисел сделать перестановку - вначале все числа с нечетными индексами, потом все с четными
/*
int main(){
    int array[6] = {4,2,1,5,3,4};
    int array_lend = 6; //четные 0 2 4 -> (3 индекса), нечетные 1, 3 -> (2 индекса)
    // array_lend = 6; // четные 0,2,4 -> (3 индекса), нечетные 1,3,5 -> (3 индекса)
    int i; 
    int numb_even =(array_lend/2);
    int numb_odd = (array_lend/2);
    
    
    if(array_lend %2 !=0){
        
        numb_even+=1;

    }
    int array_even[numb_even];
    int array_odd[numb_odd];
    
    printf("odd %d  ev %d\n", numb_odd, numb_even);
    
    for(i=0; i< array_lend; i++){
        if(i %2 ==0){
            array_even[i/2] = array[i]; 
            
//1 array_even[0]=array[0];
//2 -
//3 array_even[1] = array[2];
//4 - 
//5 array_even[2] = array[4];
//6 -
        }else{
            array_odd[i/2] = array[i]; //i = 1
//1 -
//2 array_odd[0] = array[1];
//3 -;
//4 array_even[1] = array[3];
//5 
//6 array_even[2] = array[5];
        }
        
    }
    for(i=0;i< numb_even; i++){
        printf("evry = %d ", array_even[i]);
    }
    for(i=0;i< numb_odd; i++){
        printf("odd = %d\n", array_odd[i]);
    }
    
    
    int array_merge[array_lend];
    
    for(i=0; i<array_lend; i++){
       if(i <numb_even){
          array_merge[i] =  array_even[i] ; 

        }else{
          array_merge[i] = array_odd[i-numb_even] ; //i = 1
        }
        
    }
    for(i=0; i<array_lend; i++){
        printf("%d ", array_merge[i]);
    }
    
}
*/
//7. Определение наиболее часто встречающегося в массива значения.
/*Пусть дано число из массива. Сравнить его со всеми остальными. В случае
совпадения увеличить счетчик повторений на 1. Сравнить счетчик повторений с
результатами работы программы на предыдущих этапах, если текущий результат
оказался больше, запомнить текущее значение счетчика повторений и значение
числа. Повторить для всех элементов массива.
*/
int main(){
    int array[10] = {1,1,1,2,2,1,5,6,3,3};
    int array_lend = 10;
    int i;
    int max_povtor =0;
    int element_povtor;
    int result;
    for(i=0; i<array_lend;i++){
       for (int j = i; j < array_lend; j++) {
            if (array[i] == array[j]) {
                element_povtor++;
            }
        }
    if (element_povtor > max_povtor) {
        max_povtor = element_povtor;
        result = array[i];
    }
        element_povtor = 0;
}
        printf("result = %d \n", result);
}











