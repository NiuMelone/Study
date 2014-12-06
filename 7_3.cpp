#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box a);
void set(box * a);

int main()
{
	box one{"Melone",5,10,15};
	set(&one);
	show(one);
	return 0;
}

void show(box a)
{
	using namespace std;
	cout<<"maker: "<<a.maker
	    <<"    height: "<<a.height
	    <<"    width: "<<a.width
	    <<"    length: "<<a.length
	    <<"    volume: "<<a.volume<<endl;
}

void set(box * a)
{
	a->volume=a->height*a->width*a->length;
}