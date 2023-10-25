// 3.5.2 stack 常用接口

// 功能描述：栈容器常用的对外接口

// 构造函数：

// stack<T> stk;                                 //stack采用模板类实现， stack对象的默认构造形式
// stack(const stack &stk);                      //拷贝构造函数

// 赋值操作：

// stack& operator=(const stack &stk);          //重载等号操作符

// 数据存取：

// push(elem);     //向栈顶添加元素
// pop();                //从栈顶移除第一个元素
// top();                 //返回栈顶元素

// 大小操作：

// empty();           //判断堆栈是否为空
// size();              //返回栈的大小

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    stack<int>s;

    //入栈:
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "栈的大小: " << s.size() << endl;

    //只要栈不为空,查看栈顶,并且执行出栈操作
    //s.empty() == 0 ---> 不为零
    while(s.empty() != 1)   //s.empty() == 0 也可以
    {
        //查看栈顶元素
        cout << "栈顶元素为:" << s.top() << endl;
        
        //出栈
        s.pop();
    }

    cout << "栈的大小: " << s.size() << endl;
}


int main()
{
    test01();
    return 0;
}

