#include<iostream>
using namespace std;
class family{
	public:
		virtual void message();
};
void family::message(){
	cout<<"大家好呀！"<<endl;
}
class Dad:public family{
	public:
		void message(){
			cout<<"我是爸爸"<<endl;
		}
}; 
class Mom:public family{
	public:
		void message(){
			cout<<"我是妈妈"<<endl;
		}
};
void mes(family *news){
	news->message();
}
int main(){
	family Family;
	Dad dad;
	Mom mom;
	mes(&Family);
	mes(&dad);
	mes(&mom);
	
}
