#include <cstdint>

class Token
{
private:
  int32_t _lineNum;
  int32_t _linePos;
  uint32_t enum;
  std::string _val;
};
