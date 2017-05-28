#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>

template <class T>
class Array
{
private:
		T* list;
		int size;
public:
		Array(int sz=50);
		Array(const Array<T> &a);
		Array<T> & operator=(const Array<T> &);
		~Array(){delete []list;}
		T & operator [](int i)const;
		const T &operator [](int n)const;
		operator T* ();
		operator const T*()const;
		int getsize()const;
		void resize(int sz);
};
template <class T>
Array<T>::Array(int sz=50)
{
	list=new a[size];
	size=sz;
}
template <class T>
Array<T>::Array(const Array<T> &a)
{
	size=a.size;
	list=new T[size];
	for(int i=0;i<size;i++)
		list[i]=a.list[i];
}

template <class T>
Array<T> & operator =(const Array<T> & res)
{
	delete []list;
	size=res.size;
	list=new T[size];
	for(int i=0;i<size;i++)
		list[i]=res.list[i];
}

template <class T>
T & Array<T>::operator [](int n)const
{
	assert(n>=0);
	assert(n<size);//判断下标是否越界
	return list[n];
}

template <class T>
const T& Array<T>::operator [](int n)const 
{
	assert(n>=0);
	assert(n<size);//判断下标是否越界
	return list[n];//返回下标为n的数组元素？？为什么？
}

template <class T>
int Array<T>::getsize()const
{
	return size;
}

template <class T>
void Array<T>:: resize(int sz)
{
	assert(sz>0);
	if(sz==size)
		return ;
	T* newlist=new T[sz];
	int n=(sz<size)?sz:size;
	for(int i=0;i<n;i++)
		newlist[i]=list[i];
	delete []list;
	list=newlist;
	size=sz;
}
#endif

#include <iostream>
using namespace std;
void read(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
}

int main()
{
	Array<int> a(10);
	read(a,10);
}
