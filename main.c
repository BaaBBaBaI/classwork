#include <iostream>
#include <array>
#include <list>





template<class T, size_t size>

class Array {
	private:
		T* ar;
	public:
		Array() {
			ar = new T[size];
		}
		int SizeBack() {
			return size;
		}
		T& operator[](int value) {

		}
};

std::ostream& operator<<(std::ostream& out, const Array<int, 10>& value) {}

int main() {
	Array<int, 10> myArray;
	myArray[10] = 20;

}
