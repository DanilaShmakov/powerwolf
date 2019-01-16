#include <iostream> 
#include <string>

#include <stack> // ���������� ���������� ��� ������������� ����� 
#include <queue> // ���������� ���������� ��� ������������� ������� 
#include <deque> // ���������� ���������� ��� ������������� ���� 


#include <list> // ���������� ���������� ��� ������������� ������
#include <set> // ���������� ���������� ��� ������������� ���������
#include <map> // ���������� ���������� ��� ������������� �������������� �������


int main()
{
	setlocale(LC_ALL, "rus");
	/*
	���� � ��� ��������� ������, ������� ��������
	�� �������� FILO(first in � last out; ������ ������ � ��������� ����).
	� ����� ��� ��������,�.�. ������ ���������� � ������������� ��������.
	������ ������� ����� ��������� �� ��������� �������.
	�������� ������� ��������� �� NULL.
	�����������: �������� �������� � ���������� �������� �������� �� const �����.
	*/
	/*
		std::stack<int> stackInt;//stack <��� ������> <���>; -�������� �����
		int i = 0, a = 0;
		std::cout << "������� 5 ����� �����: "<< std::endl;
		while (i != 5) {
			std::cin>> a;
			stackInt.push(a); // ��������� ��������� �����
			i++;
		}
		if (stackInt.empty()) // ��������� ���� �� ���� (���)
			std::cout <<"���� �� ����";
		std::cout <<"������� ������� �����: "<< stackInt.top() << std::endl;
		stackInt.pop(); // ������� ������� �������
		std::cout << "����� ������� �������: " << stackInt.top()<< std::endl;
		*/
		// ������� 1 
		/*
		��������� ������������ ����������� ������ (,),[,],{,}
		� ��������� ������������� ��������� �� �������� �����
		(���� �������� ���������).
		2+4-5(87192479_7348){72648]76823[] -> no
		({}) -> yes
		({)} -> no
		*/

		//������� 
		/*
		��������� �������.
		���� ��� (,[ ��� {, �� �������� �� � ����.
		���� ��� ),] ��� }, �� ���������� � ������� ��������� �����.
		���� ������������ ����, �� ������� ������� ����� �������.
		����� - ��������� ������������.
		����� ��� �������� �������, �� ��������� ���� �� �������.
		���� ���� ����, �� ��������� ����������.
		����� - ��������� ������������.
		*/
		/*
		std::stack <char> stack1;
		char a;
		while (1)
		{
			std::cin >> a;
			if (a == 'e')
			{
				std::cout << "Yes";
				break;
			}
			if (a == '(' || a == '{' || a == '[') stack1.push(a);
			if (a == ')')
			{
				if ('(' == stack1.top())
				{
					stack1.pop();
				}
				else
				{
					std::cout << "No";
					break;
				}
			}
			if (a == '}')
			{
				if ('{' == stack1.top())
				{
					stack1.pop();
				}
				else
				{
					std::cout << "No";
					break;
				}
			}
			if (a == ']')
			{
				if ('[' == stack1.top())
				{
					stack1.pop();
				}
				else
				{
					std::cout << "No";
					break;
				}
			}
		}
		if (stack1.empty() == true) std::cout << "OK";
		else std::cout << "\nall bad!";
		*/
		/*
		������� � ��� ��������� ������, ������� ��������� �� ��������
		LILO (last in � last out: ��������� ������ � ��������� �����).
		*/
		/*
			std::queue <int> MyQueue; // ������� �������
			std::cout << "������� 7 �����: " << std::endl;
			for (int i = 0; i < 7; i++) {
				std::cin >> a;
				MyQueue.push(a); // ��������� � ������� ��������
			}
			std::cout << std::endl;
			std::cout << "������ ������� � �������: " << MyQueue.front() << std::endl;
			MyQueue.pop(); // ������� ������� �� �������
			std::cout << "������ ������� (����� ��������): " << MyQueue.front() << std::endl;
			if (!MyQueue.empty()) // ��������� ����� �� ������� (���)
				std::cout << "������� �� �����!";
			*/
			/*
			������� � ����������� (priority_queue) � ��� ������� �������,
			�� � ��� ����� ������� ����������� � ����� �����,
			����� ������� ���� ������������� �� ��������.
			*/
			/*
			std::priority_queue <int> priority_q; // ��������� ������������ �������
			std::cout << "������� 7 �����: " << std::endl;
			for (int i = 0; i < 7; i++) {
				std::cin >> a;
				priority_q.push(a); // ��������� �������� � �������
			}
			// ������� ������
			std::cout << "������ ������� �������: " << priority_q.top();
			*/
			// ������� 2 
			/*
			��������� �� ���� �������� ������ ����������.
			� ������ ������ ������� ������� ����� ������ (�����, ������ 9, 10 ��� 11),
			����� (����� ������) � �������.
			���������� ������� ������ �� �������:
			������� ���� �������� 9 ������, ����� � 10, ����� � 11.
			������ ������ ������ ������� ������ ������ ���� ����� ��, ��� �� �����.
			*/
			/*
			������� 3 ������� (���� ��� ������� ������).
			��������� ��������� ������. � ����������� �� ������
			��������� ������� � ��������������� �������
			����� ��� �������, ������� ������� ���������������:
			������� ��� 9 ������, ����� ������� 10 ������,
			� � ����� ����� ������� 11 ������.
			*/
			/*
			std::queue <std::string> q9, q10, q11;
				std::string cl, name;
				while (1)
				{
					std::getline(std::cin, cl);
					if (cl == "0") break; // ������� ����
					if (cl[0] == '9')
					{
						name.assign(cl.begin() + 2, cl.end());
						q9.push(name);
					};
					if (cl[0] == '1')
					{
						if (cl[1] =='0')
						{
							name.assign(cl.begin() + 3, cl.end());
							q10.push(name);
						}
						if (cl[1] == '1')
						{
							name.assign(cl.begin() + 3, cl.end());
							q11.push(name);
						}
					};
				}
				std::cout << "9 class" << std::endl;
				while (!q9.empty())
				{
					std::cout << q9.front()<< std::endl;
					q9.pop();
				}
				std::cout << "10 class" << std::endl;
				while (!q10.empty())
				{
					std::cout << q10.front() << std::endl;
					q10.pop();
				}
				std::cout << "11 class" << std::endl;
				while (!q11.empty())
				{
					std::cout << q11.front() << std::endl;
					q11.pop();
				}
					*/

					/*
					����� (����. deque � ������������ �� double-ended queue, ������������� �������)
					���������� ��������� ������, � ������� �����
					������� � ��������� ��������
					��� � ������, ��� � � �����.
					��� �������� � ������ ��� ��, ��� � �������.
				*/

				//������ 3 
				/*
				���������, �������� �� ��������� ������ �����������
				(�������� ��������� ����� ������� � ������ ������). ������������ ���.
				*/
				/*
			std::deque<int> deq1;
				int w, k=0,  b=0, r=0;
				std::cout << "size=";
				std::cin >> w; //size
				while (k != w) {
					std::cin >> b;
					deq1.push_front(b);
					k++;
				}
				while (1) {
					if (deq1.back() == deq1.front())
					{
						deq1.pop_back();
						deq1.pop_front();
					}
					else { std::cout << "not polendrom"; break; }
					if (deq1.size() == 1 || deq1.size() == 0) { std::cout << "polendrom"; break; }
				}
				*/
				/*
				��������� ������ �����������. ������ ������ ��������� � ����� ����.
				����� ���������� ������ � ��������� ������ ����.
				*/

				//������ 4 
				/*
				������� ��������� ������ List.
				������������������ ������ � ���� ����������:
				����, �����,
				���������� �������� � ��������,
				����������.
				*/
				/*������ (list) ������������ ����� ���������, ������� ������������
				������� ������� � �������� ��������� �� ����� ������� � ����������.
				������� ������������ ������ �� ��������������. �� ���������� � ���� ����������� ������.
				� ������� �� std::forward_list ���� ��������� ������������
				����������� ���������������� ������������,
				������� ��� ���� ����� ����������� � ��������� ������������ ������.*/
				/*
				std::list<int> mylist;
				std::cout << "������� 5 �����: " << std::endl;
				int a;
				for (int i = 0; i < 5; i++)
				{
					std::cin >> a;
					mylist.push_back(a); // ��������� � ������ ��������
				}
				std::cout << std::endl;
				std::cout << "������ ������� � ������: " << mylist.front() << std::endl;
				mylist.pop_front(); // ������� ������� �� ������
				std::cout << "������ ������� (����� ��������): " << mylist.front() << std::endl;
				std::list<int>::iterator it1; //���������
				it1 = mylist.begin();//������������ ��� ������� ��������
				it1++; // �������� �� ���� �����
				mylist.insert(it1, 10); // ��������� 10 �� ������ ������
				std::cout << "������ ����� ���������� 10:";
				for (it1 = mylist.begin(); it1 != mylist.end(); ++it1)
				std::cout << ' ' << *it1;
				std::cout << '\n';
				if (!mylist.empty()) // ��������� ���� �� ������ (���)
				std::cout << "������ �� ����!";*/
				//������ 5 
				/*
				������� ��������� ������ Set.
				������������������ ������ � ���� ����������:
				����, �����,
				���������� �������� � ��������.
				*/
				/*������� ����� � �������� ������� ��������� � ��������� � ������,
				��� ������� � ���, ��� �������� ��������� ������������� �����������.
				��� ����� ����� ������ ������� �������� ��, ��� � ��������� �� ����������� ���������,
				���� ��������� ���� ��� ���������� ��������� � ���������. ��� ����� � ������ ���������,
				������ ������� ��������� ��������.*/
				/*
				std::set<char> mySet; // �������� ������ ���������
				// ��������� �������� � ���������
				mySet.insert('I');
				mySet.insert('n');
				mySet.insert('f');
				mySet.insert('i');
				mySet.insert('n');
				mySet.insert('i');
				mySet.insert('t');
				mySet.insert('y');
				for (auto it = mySet.begin(); it != mySet.end(); ++it)
				{
					std::cout << *it <<" ";
				}
				std::cout << std::endl;
				*/
				//������ 6 
				/*
				������� ��������� ������ map.
				������������������ ������ � ���� ����������:
				����, �����,
				���������� �������� � ��������.
				*/
				/*std::map � ��������������� ������������� ���������,
				������� �������� ���� ����-�������� � ���������������� �������.*/

				/*
				char c;
				std::map <char, int> myMap;
				std::map<char, int>::iterator mm;
				for (int i = 0, c = 'a'; i < 5; ++i, ++c)
				{
					myMap.insert(std::pair<char, int>(c, i));
				}
				///����� �� ���� ������������������ map �� �����
				for (auto it = myMap.begin(); it != myMap.end(); ++it)
				{
					std::cout << (*it).first << " : " << (*it).second << std::endl;
				}
				std::cout << std::endl;
				mm = myMap.find('b');
				std::cout <<"������� �-� �������  " << std::endl;
				myMap.erase('c'); //��������
				myMap.insert(mm, std::pair<char, int>('c', 200)); //����������
				for (auto it = myMap.begin(); it != myMap.end(); ++it)
				{
					std::cout << (*it).first << " : " << (*it).second << std::endl;
				}*/

				// ������ 7 
				/*
				��������� ������� ��������� �� ������� ���������� ��������
				��� ����, �����, �������, ������, ���������, ������� �� n ���������.
				������ ��������:
				���������� � ������
				���������� � �����
				���������� � ��������
				�������� �� ������
				�������� � �����
				�������� �� ��������
				�������� �������� �� ������
				�������� �������� � �����
				�������� �������� �� ��������
				*/
	system("pause");
	return 0;
}