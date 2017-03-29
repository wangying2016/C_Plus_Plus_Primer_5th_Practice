#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;		// a 是一个整数（r 是 i 的别名，而 i 是个整数）
	const int ci = i, &cr = ci;
	auto b = ci;	// b 是一个整数（ci 的顶层 const 特性被忽略掉了）
	auto c = cr;	// c 是一个整数（cr 是 ci 的别名，ci 本身是一个顶层 const）
	auto d = &i;	// d 是一个整型指针（整数的地址就是指向整数的指针）
	auto e = &ci;	// e 是一个指向整型常量的指针（对常量对象取地址是一种底层 const）
	auto &g = ci;	// g 是一个整型常量引用，绑定到 ci
	std::cout << a << " " << b << " " << c << " " << d << " " << e <<
		" " << g << std::endl;
	a = 42;
	b = 42;
	c = 42;
	d = 42;		// 错误：d 是一个指针，赋值非法
	e = 42;		// 错误：e 是一个指针，赋值非法
	g = 42;		// 错误：g 是一个常量引用，赋值非法
	std::cout << a << " " << b << " " << c << " " << d << " " << e <<
		" " << g << std::endl;
	return 0;
}