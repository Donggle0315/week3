#include "RangeArray.h"

RangeArray::RangeArray(int l, int h):Array(h-l+1){
	high=h;
	low=l;
}

RangeArray::~RangeArray(){

}

int RangeArray::baseValue(){
	return low;
}

int RangeArray::endValue(){
	return high;
}

int& RangeArray::operator[](int i){
	static int tmp;
	if(i<low||i>high){
		cout<<" Array bound error!"<<endl;
		return tmp;
	}
	else {
		return data[-low+i];
	}
}

int RangeArray::operator[](int i)const{
	if(i<low||i>high){
		cout<<" Array bound error!"<<endl;
		return 0;
	}
	else {
		return (low-high);
	}
}
