#include "TemplateClass.cpp"
#include <iostream>

// テンプレート実体化の際のステータスに使用
class TestClass
{
public:
	int getValue()
	{
		return 100;
	}
};

int main(void)
{
	// テンプレート実体化
	TemplateClass<TestClass>* t = new TemplateClass<TestClass>(new TestClass);
	// 100が出力される
	std::cout << t->getValue() << std::endl;

    return 0;
}
