#include <iostream>
#include <string>

template <typename n>
class Vector {
  n* elem;
  std::size_t _size;

 public:
  Vector(const std::size_t size) : elem{new n[size]}, _size{size} {}

  // automatically release the acquired memory
  ~Vector() { delete[] elem; }

  // try to remove the const and recompile
  auto size() const { return _size; }

  auto& operator[](const std::size_t i) { return elem[i]; }

  // try to comment this line and recompile
  const n& operator[](const std::size_t i) const { return elem[i]; }
};

int main(){
Vector<int> v{10};
  for (auto i = 0u; i < v.size(); ++i)
  { v[i] = i;
    std::cout<<v[i]<<" ";
  }

}