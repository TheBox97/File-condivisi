#include<iostream> 


int main(){
    int a[5];
    std::cout<<"Initialize the array of 5 elements"<<std::endl;
    for (int i{0};i<5;i++){
        std::cin>>a[i];
    }
    std::cout<<"The array is "<<std::endl;
for (int i{0};i<5;i++){
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    //FINE DICHIARAZIONE ARRAY 
    double inf;
    for (int j{4};j!=0;j--){
        inf =a[j];
        for(int i{0};i<j;i++){
            if (inf>a[i]){
                inf=a[i];
                a[i]=a[j];
                a[j]=inf;
            }
        }
        std::cout<<"Ordered "<<inf<<" into a["<<j<<"]"<<std::endl;   
    }
      
      std::cout<<"The ordered array is "<<std::endl;
for (int i{0};i<5;i++){
        std::cout<<a[i]<<" ";
    }
 std::cout<<std::endl;   
return 0;
}
