#ifndef ITER_HPP
#define ITER_HPP

template <typename T>

class iter
{
	iter(){}
	iter(const iter &src){(void)src;}
	iter& operator=(const iter &src){(void)src; return *this;}
	~iter(){}

	static void iter(T* arr, size_t len, void(*func)(T&))
	{
		for(int i = 0; i < len; i++)
		func(arr[i]);
	}
};

#endif
