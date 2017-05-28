#include <iostream>
using namespace std;

template <class R> class test
{
	private:
		R task;
public:
		test (R r):task(r){};
		R &get();
};

template <class R> R& test<R>::get()
 {
	 return task;
 }

int main()
{
    test<int> t1(10);
	cout<<t1.get();
	return 0;
}
