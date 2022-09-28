#include <iostream>

int* find_rep_sym(std::string& str, char sym);

int main() {
  std::string str{};
  std::cout << "Please, enter string: \n" << "str = ";
  std::cin >> str;
  std::cout << std::endl;
  char sym{};
  std::cout << "Please, enter a symbol which do you want to find in the string and fixed the indexs: \n" << "sym = " ;
  std::cin >> sym;
  std::cout << std::endl;
  int* arr = find_rep_sym(str, sym);
  delete [] arr;
  arr = nullptr;
  return 0; 
}

int* find_rep_sym(std::string& str, char sym) {
  int size = 0;
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == sym) {
      ++size;
    }
  }
  int* arr = new int[size];
  int j = 0;
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == sym) {
      std::cout << i << " ";
      arr[j] = i;
      ++j;
    }
  }
  return arr;
}