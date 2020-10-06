#include "Array.h"

Array::Array(int size){
	if(size<=0){
		data=0;
		len=0;
		cout<<"Array 생성 실패"<<endl;
	}
	else{
		data=new int[size];
		len=size;
	}
}

Array::~Array(){
	delete(data);
}

int Array::length(){
	return len;
}

int& Array::operator[](int i){
	static int tmp;
	if(i<0||i>=len){
		cout<<"Array bound error!"<<endl;
		return tmp;
	}
	else{
		return data[i];
	}
}

int Array::operator[](int i)const{
	if(i<0||i>=len){
		cout<<"Array bound error!"<<endl;
		return 0;
	}
	else{
		return i;
	}
}

void Array::print(){
	int i;
	cout<<"[";
	for(i=0;i<len;i++){
		cout<<data[i]<<" ";
	}
	cout<<"]"<<endl;
}
