//#pragma once
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//template<class K>
//struct BSTreeNode
//{
//	typedef BSTreeNode<K> Node;
//	BSTreeNode(const K& key)
//		:_key(key)
//		,_left(nullptr)
//		,_right(nullptr)
//	{}
//	K _key;
//	BSTreeNode<K>* _left;
//	BSTreeNode<K>* _right;
//};
//
//template<class K>
//class BSTree
//{
//	typedef BSTreeNode<K> Node;
//public:
//	bool Insert(const K& key)
//	{
//		if (_root == nullptr)
//		{
//			Node* newnode = new Node(key);
//			_root = newnode;
//			return true;
//		}
//		else
//		{
//			Node* parent = nullptr;
//			Node* cur = _root;
//			while (cur)
//			{
//				if (cur->_key < key)
//				{
//					parent = cur;
//					cur = cur->_right;
//				}
//				else if (cur->_key > key)
//				{
//					parent = cur;
//					cur = cur->_left;
//				}
//				else
//				{
//					return false;
//				}
//			}
//			cur = new Node(key);
//			if (parent->_key > key)
//			{
//				parent->_left = cur;
//			}
//			else
//			{
//				parent->_right = cur;
//			}
//			return true;
//		}
//	}
//
//	bool Find(const K& key)
//	{
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_key < key)
//			{
//				cur = cur->_right;
//			}
//			else if (cur->_key > key)
//			{
//				cur = cur->_left;
//			}
//			else
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//
//	bool Erase(const K& key)
//	{
//		Node* parent = nullptr;
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_key < key)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_key > key)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				if (cur->_left == nullptr)
//				{
//					if (cur == _root)
//					{
//						_root = cur->_right;
//					}
//					else
//					{
//						if (parent->_left == cur)
//						{
//							parent->_left = cur->_right;
//						}
//						else
//						{
//							parent->_right = cur->_right;
//						}
//					}
//					delete cur;
//				}
//				else if (cur->_right == nullptr)
//				{
//					if (cur == _root)
//					{
//						_root = cur->_left;
//					}
//					else
//					{
//						if (parent->_left == cur)
//						{
//							parent->_left = cur->_left;
//						}
//						else
//						{
//							parent->_right = cur->_left;
//						}
//					}
//					delete cur;
//				}
//				else if (cur->_left != nullptr && cur->_right != nullptr)
//				{
//					//找右子树的最左节点
//					//这里进行了重新给parent赋值，是解决删除节点是根节点的情况时，parent如果还是nullptr会出现空指针的解引用
//					Node* parent = cur;
//					Node* subLeft = cur->_right;
//					while (subLeft->_left)
//					{
//						parent = subLeft;
//						subLeft = subLeft->_left;
//					}
//					swap(cur->_key, subLeft->_key);
//					if (subLeft == parent->_left)
//					{
//						parent->_left = subLeft->_right;
//					}
//					else if (subLeft == parent->_right)
//					{
//						parent->_right = subLeft->_right;
//					}
//					delete subLeft;
//				}
//				return true;
//			}
//		}
//		return false;
//	}
//
//	void InOrder()
//	{
//		_InOrder(_root);
//		cout << endl;
//	}
//
//	bool FinR(const K& key)
//	{
//		return _FinR(_root,key);
//	}
//
//	bool InsertR(const K& key)
//	{
//		return _InsertR(_root, key);
//	}
//
//	bool EraseR(const K& key)
//	{
//		return _EraseR(_root, key);
//	}
//
//private:
//	bool _EraseR(Node*& root, const K& key)
//	{
//		if (root == nullptr)
//		{
//			return false;
//		}
//		if (root->_key < key)
//		{
//			_EraseR(root->_right, key);
//		}
//		else if (root->_key > key)
//		{
//			_EraseR(root->_left, key);
//		}
//		else
//		{
//			//删除
//			if (root->_left == nullptr)
//			{
//				Node* del = root;
//				root = root->_right;
//				delete del;
//				return true;
//			}
//			else if (root->_right == nullptr)
//			{
//				Node* del = root;
//				root = root->_left;
//				delete del;
//				return true;
//			}
//			else
//			{
//				Node* subLeft = root->_right;
//				while (subLeft->_left)
//				{
//					subLeft = subLeft->_left;
//				}
//				swap(subLeft->_key, root->_key);
//				//转换成在子树去递归删除
//				return _EraseR(root->_right, key);
//			}
//		}
//	}
//
//	bool _InsertR(Node*& root, const K& key)
//	{
//		if (root == nullptr)
//		{
//			root = new Node(key);
//			return true;
//		}
//
//		if (root->_key < key)
//		{
//			_InsertR(root->_right, key);
//		}
//		else if (root->_key > key)
//		{
//			_InsertR(root->_left, key);
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool _FindR(Node* root, const K& key)
//	{
//		if (root == nullptr)
//		{
//			return false;
//		}
//		if (root->_key < key)
//		{
//			return _FindR(root->_right, key);
//		}
//		else if (root->_key > key)
//		{
//			return _FindR(root->_left, key);
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//	void _InOrder(Node* root)
//	{
//		if (root == nullptr)
//		{
//			return;
//		}
//		_InOrder(root->_left);
//		cout << root->_key << " ";
//		_InOrder(root->_right);
//	}
//
//	Node* _root = nullptr;
//};
#include<iostream>
using namespace std;
//namespace key_value
namespace kv
{
	template<class K, class V>
	struct BSTreeNode
	{
		BSTreeNode<K, V>* _left;
		BSTreeNode<K, V>* _right;
		K _key;
		V _value;

		BSTreeNode(const K& key, const V& value)
			:_left(nullptr)
			, _right(nullptr)
			, _key(key)
			, _value(value)
		{}
	};

	template<class K, class V>
	class BSTree
	{
		typedef BSTreeNode<K, V> Node;
	public:
		bool Insert(const K& key, const V& value)
		{
			if (_root == nullptr)
			{
				_root = new Node(key, value);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				parent = cur;

				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(key, value);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}

			return true;
		}

		Node* Find(const K& key)
		{
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}

			return nullptr;
		}

		bool Erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					if (cur->_left == nullptr)
					{//左为空
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (cur == parent->_left)
							{
								parent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
					}
					else if (cur->_right == nullptr)
					{//右为空
						if (cur == _root)
						{
							_root = cur->_left;
						}
						else
						{
							if (cur == parent->_left)
							{
								parent->_left = cur->_left;
							}
							else
							{
								parent->_right = cur->_left;
							}
						}
					}
					else
					{//左右都不为空

						// 右树的最小节点(最左节点)
						Node* parent = cur;
						Node* subLeft = cur->_right;
						while (subLeft->_left)
						{
							parent = subLeft;
							subLeft = subLeft->_left;
						}

						swap(cur->_key, subLeft->_key);

						if (subLeft == parent->_left)
							parent->_left = subLeft->_right;
						else
							parent->_right = subLeft->_right;
					}

					return true;
				}
			}

			return false;
		}

		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
				return;

			_InOrder(root->_left);
			cout << root->_key << ":" << root->_value << endl;
			_InOrder(root->_right);
		}
	private:
		Node* _root = nullptr;
	};
}