#include<iostream>
using namespace std;
class akshay
{
	private:
		string tv;
	public:
		void show()
		{
			tv="IPL final 2021";
		}
		friend void avi(akshay r);
};
void avi(akshay r)
{
	cout<<"i am avi now i am watching "<<r.tv;
}
int main()
{
	akshay a;
	a.show();
	avi(a);
	return 0;
}
