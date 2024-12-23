#pragma once
#include<set>
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include"reverse_iterator_copy.h"
namespace ljh
{
	template<class T>
	struct list_node
	{
		list_node(const T& x = T())
			:_date(x)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	public:
		T _date;
		list_node<T>* _next;
		list_node<T>* _prev;
	};

	//T T& T*
	//T const T& const T*
	template<class T ,class Ref,class Ptr>
	struct __list_iterator
	{
		typedef list_node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> self;
		Node* _node;

		__list_iterator(Node* node)
			:_node(node)
		{}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;;
			return tmp;
		}

		self operator--(int)
		{
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}

		Ref operator* ()
		{
			return _node->_date;
		}

		Ptr operator->()
		{
			return &(_node->_date);
		}

		bool operator!=(const self& s)
		{
			return _node != s._node;
		}

		bool operator==(const self& s)
		{
			return _node == s._node;
		}

	public:
	};

	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		typedef ReverseIterator<iterator, T&, T*> reverse_iterator;
		typedef ReverseIterator<const_iterator, const T&, const T*> const_reverse_iterator;

		reverse_iterator rbegin()
		{
			return reverse_iterator(--end());
		}

		reverse_iterator rend()
		{
			return reverse_iterator(end());
		}

		const_reverse_iterator rbegin() const
		{
			return const_reverse_iterator(--end());
		}

		const_reverse_iterator rend() const
		{
			return const_reverse_iterator(end());
		}

		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}

		const_iterator end() const
		{
			return const_iterator(_head);
		}

		iterator begin()
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		void empty_init()
		{
			_head = new Node;
			_size = 0;
			_head->_next=_head;
			_head->_prev = _head;
		}

		list()
		{
			empty_init();
		}

		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
			std::swap(_size, lt._size);
		}
		//lt2(lt1)
		list(const list<T>& lt)
		{
			empty_init();
			for (auto e : lt)
			{
				push_back(e);
			}
		}

		//lt2=lt1
		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}

		~list()
		{
			clear();

			delete _head;
			_head = nullptr;
			_size = 0;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}

		void pop_front()
		{
			erase(begin());
		}

		void pop_back()
		{
			erase(--end());
		}

		iterator insert(iterator pos, const T& x)
		{
			Node* cur = pos._node;
			Node* newnode = new Node(x);
			Node* prev = cur->_prev;

			prev->_next = newnode;
			newnode->_next = cur;
			cur->_prev = newnode;
			newnode->_prev = prev;

			++_size;
			return iterator(newnode);
		}

		iterator erase(iterator pos)
		{
			Node* cur = pos._node;
			Node* next = cur->_next;
			Node* prev = cur->_prev;

			delete cur;
			next->_prev = prev;
			prev->_next = next;
			--_size;
			return iterator(next);
		}

		size_t size()
		{
			return _size;
		}

	private:
		Node* _head;
		size_t _size;
	};

	void test_list1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);

		// 封装屏蔽底层差异和实现细节
		// 提供统一的访问修改遍历方式
		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			*it += 20;

			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		/*set<int> s;
		s.insert(1);
		s.insert(3);
		s.insert(2);
		s.insert(4);

		set<int>::iterator sit = s.begin();
		while (sit != s.end())
		{
			cout << *sit << " ";
			++sit;
		}
		cout << endl;*/
	}

	void test_list2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);

		list<int> lt1(lt);

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		for (auto e : lt1)
		{
			cout << e << " ";
		}
		cout << endl;

		list<int> lt2;
		lt2.push_back(10);
		lt2.push_back(200);
		lt2.push_back(30);
		lt2.push_back(40);
		lt2.push_back(50);

		lt1 = lt2;
		for (auto e : lt1)
		{
			cout << e << " ";
		}
		cout << endl;

		for (auto e : lt2)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	struct AA
	{
		AA(int a1 = 0, int a2 = 0)
			:_a1(a1)
			, _a2(a2)
		{}

		int _a1;
		int _a2;
	};

	void test_list3()
	{
		list<AA> lt;
		lt.push_back(AA(1, 1));
		lt.push_back(AA(2, 2));
		lt.push_back(AA(3, 3));

		list<AA>::iterator it = lt.begin();
		while (it != lt.end())
		{
			//cout << (*it)._a1<<" "<<(*it)._a2 << endl;
			cout << it->_a1 << " " << it->_a2 << endl;
			cout << it.operator->()->_a1 << " " << it.operator->()->_a1 << endl;


			++it;
		}
		cout << endl;

		int* p = new int;
		*p = 1;

		AA* ptr = new AA;
		ptr->_a1 = 1;

	}

	//void print_list(const list<int>& lt)
	//{
	//	list<int>::const_iterator it = lt.begin();
	//	while (it != lt.end())
	//	{
	//		//*it = 10;
	//		cout << *it << " ";
	//		++it;
	//	}
	//	cout << endl;

	//	for (auto e : lt)
	//	{
	//		cout << e << " ";
	//	}
	//	cout << endl;
	//}


	//void print_list(const list<int>& lt)
	//{
	//	list<int>::const_iterator it = lt.begin();
	//	while (it != lt.end())
	//	{
	//		//*it = 10;
	//		cout << *it << " ";
	//		++it;
	//	}
	//	cout << endl;

	///*	for (auto e : lt)
	//	{
	//		cout << e << " ";
	//	}
	//	cout << endl;*/
	//}

	// 实例化
	//template<typename T>
	////template<class T>
	//void print_list(const list<T>& lt)
	//{
	//	// list<T>未实例化的类模板，编译器不能去他里面去找
	//	// 编译器就无法list<T>::const_iterator是内嵌类型，还是静态成员变量
	//	// 前面加一个typename就是告诉编译器，这里是一个类型，等list<T>实例化
	//	// 再去类里面去取
	//	typename list<T>::const_iterator it = lt.begin();
	//	while (it != lt.end())
	//	{
	//		cout << *it << " ";
	//		++it;
	//	}
	//	cout << endl;
	//}

	// 10:20继续
	// 模板(泛型编程)本质，本来应该由我们干的活交给编译器
	template<typename Container>
	void print_container(const Container& con)
	{
		typename Container::const_iterator it = con.begin();
		while (it != con.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void test_list4()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		//print_list(lt);
		print_container(lt);

		list<string> lt1;
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		lt1.push_back("1111111111111");
		//print_list(lt1);
		print_container(lt1);

		vector<string> v;
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		v.push_back("222222222222222222222");
		//print_list(v);
		print_container(v);
	}
}