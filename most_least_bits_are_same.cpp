//Իրականացնել ֆունկցիա, որը կվերադարձնի true եթե int արգումենտի least significant և most significant բիթերը իրար հավասար են։

#include <iostream>

bool same_Bit(int num);

int main() {
  int num;
  std::cout << "Please, enter a number: \n" << "num = ";
  std::cin >> num;
  std::cout << std::endl;
  std::cout << same_Bit(num) << std::endl;;
}

bool same_Bit(int num)
{
    int last = num % 2;
    int tail;

    while (num) {
        tail = num % 2;
        num /= 2;     
    }
    int most = tail;
    
    return !(last ^ most);
}