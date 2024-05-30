#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication8/ConsoleApplication8.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCreateNode)
		{
			Node* node = createNode(5);
			Assert::IsNotNull(node);
			Assert::AreEqual(5, node->data);
			Assert::IsNull(node->next);
			delete node;
		}

		TEST_METHOD(TestAppendNode)
		{
			Node* head = nullptr;
			appendNode(head, 1);
			Assert::IsNotNull(head);
			Assert::AreEqual(1, head->data);
			Assert::IsNull(head->next);

			appendNode(head, 2);
			Assert::IsNotNull(head->next);
			Assert::AreEqual(2, head->next->data);
			Assert::IsNull(head->next->next);

			delete head->next;
			delete head;
		}

		TEST_METHOD(TestPrintList)
		{
			Node* head = nullptr;
			appendNode(head, 1);
			appendNode(head, 2);
			appendNode(head, 3);

			// Для тестування виводу можна використовувати перенаправлення потоку.
			std::stringstream buffer;
			std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

			printList(head);

			std::cout.rdbuf(old);
			std::string text = buffer.str();
			Assert::AreEqual(std::string("1 -> 2 -> 3 -> nullptr\n"), text);

			delete head->next->next;
			delete head->next;
			delete head;
		}

		TEST_METHOD(TestSumPositiveElements)
		{
			Node* head = nullptr;
			appendNode(head, 1);
			appendNode(head, -2);
			appendNode(head, 3);
			appendNode(head, -4);
			appendNode(head, 5);

			int sum = sumPositiveElements(head);
			Assert::AreEqual(9, sum);

			delete head->next->next->next->next;
			delete head->next->next->next;
			delete head->next->next;
			delete head->next;
			delete head;
		}
	};
}