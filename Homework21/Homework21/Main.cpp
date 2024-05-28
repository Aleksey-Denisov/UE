#include <iostream>

class A
{
public:
	virtual void Show()
	{
		std::cout << "A";
	}
	virtual A* GetSelf()
	{
		return this;
	}
};

class B : public A
{
public:
	void Show() override
	{
		std::cout << "B";
	}
	B* GetSelf() override
	{
		return this;
	}
	void Test()
	{
		std::cout << "Only in class B";
	}
};

int main()
{
	A* p = new B;
	auto newPointer = static_cast<B*>(p->GetSelf());
	newPointer->Test();
	auto anotherNewPtr = newPointer->GetSelf();
	anotherNewPtr->Test();
}