/*
* @Author: buyi
* @Date:   2016-04-25 22:18:30
* @Last Modified by:   buyi
* @Last Modified time: 2016-04-26 15:34:42
*/

#include <iostream>

#include "Context.h"
// #include "VariableExp.h"



// int main(){

//     return 0;
// }
Context::Context() {
	cout << "Context init";
}


	bool Context::Lookup (VariableExp* v) const {
		// VariableExp* v = new VariableExp(c);
		// v = v->replace (c,v);
		// VariableExp* v;
		// v->set(c);
		    for(auto it=maps.begin();it!=maps.end();++it)
        cout<<"####key: "<<it->first <<" ####value: "<<it->second<<endl;

		auto it = maps.find(v);//返回的是一个指针
		cout << "####find key" << it->first <<endl;
		cout << "####find value" << it->second <<endl;
		if(it==maps.end())
			cout<<"not found"<<endl;
		else
			cout<<"found"<<endl;
		return	it -> second;
	}
	void Context::Assign (VariableExp* v, bool b) {
		          maps.insert(make_pair(v, b)); 
	}

