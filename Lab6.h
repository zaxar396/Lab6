#include<iostream>
using namespace std;
class vect
{
  protected:
	        int a;
			    int b;
  public:
	        vect():a(0),b(0)
			{
			}

			vect(int a_,int b_):a(a_),b(b_)
			{
			}

			virtual void print()
			{
				cout << a << endl;
				cout << b << endl;
			}

			 virtual ~vect()
			 {
			 }
};

class vector3d : public vect
{
  private:
	      int c;
  public:
	      vector3d() : vect(),c(0)
		  {
		  }

		  vector3d(int a_,int b_,int c_) : vect(a_,b_),c(c_)
		   {
		   }

		  void print()
		  {
			 vect :: print();
			 cout << c << endl;
		  }
		   ~vector3d()
		   {
		   }

};
