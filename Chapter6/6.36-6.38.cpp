//6.36
string (&return10Strs(string (&str)[10]))[10]
{
	return str;
}
//6.37.1
using strs = string[10];
strs &func(strs &str1)
{
}
//6.37.2
auto func(strs & str)-> string(&)[10]
//6.37.3
string strs[10]
decltype(strs) &func(strs &str);//有点懵
//6.38
