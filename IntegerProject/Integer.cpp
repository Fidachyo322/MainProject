#include "Integer.h"

Integer Integer::add(Integer number) {
	return Integer(value + number.value);
	
}
Integer Integer::sub(Integer number) {
	return Integer(value - number.value);
}
Integer Integer::mul(Integer number) {
	return Integer(value * number.value);
}
Integer Integer::div(Integer number) {
	if (number.value != 0)
	{
		return Integer(value / number.value);
	}
	return Integer();
}
Integer Integer::mod(Integer number) {
	if (number.value != 0)
	{
		return Integer(value % number.value);
	}
	return Integer();
}
Integer Integer::minus() {
	return Integer(-value);
}
Integer Integer::increment() {
	value++;
	return Integer(value);
}
Integer Integer::decrement() {
	value--;
	return Integer(value);
}

int Integer::getValue() {
	return value;


}
void Integer::setValue(int Value) {
	this->value = value;
}


