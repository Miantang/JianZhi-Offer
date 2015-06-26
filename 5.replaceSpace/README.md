###替换空格


####题目描述
请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

####tijie

使用[repalce](http://www.cplusplus.com/reference/string/string/replace/)

```c++
class Solution {
public:
	string replaceSpace(string str) {
		int i = 0;
		while(i < str.size()) {
			if(str[i] == ' ') {
				str.replace(i, 1, "%20");
				i += 3;
			} else {
				++i;
			}
		}
		return str;
	}
};
```

