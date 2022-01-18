#include <iostream>

bool is_collection_sorted(int numbers[], unsigned int collection_size){


  // Don't modify anything above this line
  //Your code will go below this line
  
  bool sorted{false};
  for(int i=0;i<collection_size;++i)
  {
      for(int j=0;j<collection_size;++j)
      {
          if(j!=i){
          if(numbers[i]<numbers[j]==false)
          {
              sorted=false;
              break;
          }else
          {
              sorted=true;
              
          };
          };

      };
      if(!sorted)break;
      
  };
  
 
  //Your code will go above this line
  //Don't modify anything below this line

  return sorted;
}
#include<iomanip>
int main(void)
{
    int arr[]{1, 2, 3, 4, 5};
    // for (auto &i : arr)
    //     std::cerr << i << " ";

    std::cout<<std::boolalpha<<is_collection_sorted(arr,std::size(arr));
    std::cerr << "\n----------------------\nsize of arr : " << std::size(arr) << "\n";
    return 0;
}