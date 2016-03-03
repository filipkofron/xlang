#include <cstring>

template <size_t ELEM_SIZE, size_t MIN_SIZE = 4>
class CArray
{
private:
  size_t _realSize
  char _minArr[MIN_SIZE];
  char* _dynArr;

  CArray()
    : _realSize(0), _dynArr(nullptr)
  {
    memset(_minArr, 0, MIN_SIZE * ELEM_SIZE);
  }

  void updateSize()
  {
    //if (_realSize < )
  }
};
