#pragma once
#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass {
public:

	MyClass(int a, int b);

	void tryChange(int a, int b);
	int regVar;
	const int constVar;
};

#endif // MYCLASS_H