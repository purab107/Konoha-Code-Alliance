#include <iostream>
#include <stdlib.h>

class meraPyaraArray {

    public : 

        int purna_Akaar; //total size of array
        int upyukt_Akaar; //used size in array
        int *adhaar_Pata; //base address

        //constructor for dynamic memory allocation
        meraPyaraArray(meraPyaraArray * arr, int pAkaar, int uAkaar){
            
            arr -> purna_Akaar = pAkaar; // allocating total size of array
            arr -> upyukt_Akaar = uAkaar; // allocating used size in array
            arr -> adhaar_Pata = (int *)malloc(pAkaar * sizeof(int)); // allocating pointer to base address
        }

        // method for displaying the array
        void dikhaiye(meraPyaraArray *arr){
            
            int n = arr -> upyukt_Akaar;
            std::cout << "Entered Array : " << std::endl;
            for(int i=0; i<n; i++){
                
                std::cout << (arr -> adhaar_Pata)[i] << "  " ;
            }
        }

        // method for inserting elements in array
        void daaliye(meraPyaraArray *arr){
            
            int n = arr -> upyukt_Akaar;
            std::cout << "Enter Array Elements : " << std::endl;
            for(int i=0; i<n; i++){
                
                std::cin >> (arr -> adhaar_Pata)[i] ;
            }
        }

};

int main (){

    meraPyaraArray arr(&arr, 10, 5);
    arr.daaliye(&arr);
    arr.dikhaiye(&arr);

    return 0;
}