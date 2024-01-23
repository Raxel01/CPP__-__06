#include <iostream>
#include <sstream>
#include <cstdlib>

#include <iostream>
#include <limits>

class ScalarConverter {
public:
  // Static method to convert string to various scalar types
  static void convert(const std::string& str) {
    // Detect type
    bool is_char = str.length() == 1 && !isdigit(str[0]);
    bool is_int = !is_char && str.find_first_of(".f") == std::string::npos;
    bool is_float = !is_char && !is_int && str.find('.') != std::string::npos;
    bool is_double = !is_char && !is_int && !is_float && str.find('f') == std::string::npos;
    
    if (is_char) {
      char c = str[0];
      if (isprint(c)) {
        std::cout << "Original: '" << str << "'" << std::endl;
        std::cout << "Converted to: " << static_cast<int>(c) << " (char)" << std::endl;
        std::cout << "Converted to: " << static_cast<float>(c) << " (float)" << std::endl;
        std::cout << "Converted to: " << static_cast<double>(c) << " (double)" << std::endl;
      } else {
        std::cout << "Error: Non-displayable character '" << str << "'" << std::endl;
      }
    } else if (is_int) {
      int value = std::stoi(str);
      std::cout << "Original: " << str << " (int)" << std::endl;
      std::cout << "Converted to: " << value << " (unchanged)" << std::endl;
      if (static_cast<float>(value) > std::numeric_limits<float>::max()) {
        std::cout << "Converted to: Overflow for float" << std::endl;
      } else {
        std::cout << "Converted to: " << static_cast<float>(value) << " (float)" << std::endl;
      }
      if (static_cast<double>(value) > std::numeric_limits<double>::max()) {
        std::cout << "Converted to: Overflow for double" << std::endl;
      } else {
        std::cout << "Converted to: " << static_cast<double>(value) << " (double)" << std::endl;
      }
    } else if (is_float) {
      float value = std::stof(str);
      std::cout << "Original: " << str << " (float)" << std::endl;
      if (static_cast<int>(value) != value) {
        std::cout << "Converted to: Loss of precision to " << static_cast<int>(value) << " (int)" << std::endl;
      } else {
        std::cout << "Converted to: " << static_cast<int>(value) << " (int)" << std::endl;
      }
      std::cout << "Converted to: " << value << " (unchanged)" << std::endl;
      if (static_cast<double>(value) > std::numeric_limits<double>::max()) {
        std::cout << "Converted to: Overflow for double" << std::endl;
      } else {
        std::cout << "Converted to: " << static_cast<double>(value) << " (double)" << std::endl;
      }
    } else if (is_double) {
      double value = std::stod(str);
      std::cout << "Original: " << str << " (double)" << std::endl;
      if (static_cast<int>(value) != value) {
        std::cout << "Converted to: Loss of precision to " << static_cast<int>(value) << " (int)" << std::endl;
      } else {
        std::cout << "Converted to: " << static_cast<int>(value) << " (int)" << std::endl;
      }
      if (static_cast<float>(value) != value) {
        std::cout << "Converted to: Loss of precision to " << static_cast<float>(value) << " (float```)"
      }
}
int main (int ac, char **av)
{
    // double a = strtod("3.0", NULL);
    // std::cout << a << std::endl;
    // char c = 0;
    // std::cout <<(int)c << "\'" << c << "\'" <<std::endl;
    // char **lol;
    double i = strtod("42.000000001", NULL);
    std::cout <<   i  <<  std::endl;
    // std::cout <<(int)i << std::endl;
    // float b = a;
    // std::cout << b <<std::endl;
//    int a = 'a';
//     std::string stringo = av[1];
//    std::stringstream(stringo) >> a;
//    std::cout << a << std::endl;
    // bool flag = 0000;
    // std::cout<< flag << std::endl;
    return (0);
}