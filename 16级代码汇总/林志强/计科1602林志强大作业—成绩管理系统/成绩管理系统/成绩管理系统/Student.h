#pragma once
using namespace System;
ref class Student
{String^number;
String^name;
String^sex;
String^xy;
String^zy;
String^obj;
double math;
double english;
double wuli;
double other;
public:
	Student(void);
	property String^Number{
		String^get(){return number;}
		void set(String^a){number=a;}
	}
	property String^Name{
		String^get(){return name;}
		void set(String^a){name=a;}
	}
	property String^Sex{
		String^get(){return sex;}
		void set(String^a){sex=a;}
	}
	property String^Xy{
		String^get(){return xy;}
		void set(String^a){xy=a;}
	}
	property String^Zy{
		String^get(){return zy;}
		void set(String^a){zy=a;}
	}
	property String^Obj{
		String^get(){return obj;}
		void set(String^a){obj=a;}
	}

	property double Math{
		double get(){return math;}
		void set(double a){math=a;}
	}
	property double English{
		double get(){return english;}
		void set(double a){english=a;}
	}
	property double Wuli{
		double get(){return wuli;}
		void set(double a){wuli=a;}
	}
	property double Other{
		double get(){return other;}
		void set(double a){other=a;}
	}
};

