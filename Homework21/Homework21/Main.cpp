#include <iostream>

class IA
{
public:
	IA()
	{
		std::cout << "A constructed\n";
	}
	~IA()
	{
	}
	virtual void ShowInfo() = 0;
};

void IA::ShowInfo()
{
	std::cout << "default implementation\n";
}

class B : virtual public IA
{
public:
	B()
	{
		std::cout << "B constructed\n";
	}
	~B()
	{
	}
	virtual void ShowInfo() override
	{
		IA::ShowInfo();
		std::cout << "Show info in class B\n";
	}
};

class C : virtual public IA
{
public:
	C()
	{
		std::cout << "C constructed\n";
	}
	~C() {}
	virtual void ShowInfo() override
	{
		IA::ShowInfo();
	}
};

class D : virtual public B, virtual public C
{
public:
	D()
	{
		std::cout << "D constructed\n";
	}
	virtual void ShowInfo() override
	{
		IA::ShowInfo();
	}
};

int main()
{
	D* p = new D;
	delete p;
}