#include <iostream> 
#include <vector>

std::vector<std::string> split_by(std::string& str, std::string& delim);

int main() {
  std::string str{};
  std::cout << "str = ";
  std::cin >> str;
  std::cout << std::endl;
  std::string delim {",.;:/ _|"};
  std::vector<std::string> result = split_by(str, delim);
  for (int i = 0; i < result.size(); ++i) {
    std::cout << result[i] << std::endl;
  }
   return 0;
}

std::vector<std::string> split_by(std::string& str, std::string& delim)
{
  std::vector<std::string> str_by_word;
  std::string str_word{};
  for (int i = 0; i <= str.length(); ++i) {
    for (int j = 0; j <= delim.length(); ++j) {
      if (str[i] == delim[j]) {
        str_by_word.push_back(str_word);
        str_word = "";
        ++i;
      }
    }
    str_word += str[i];
  }
  return str_by_word;
}