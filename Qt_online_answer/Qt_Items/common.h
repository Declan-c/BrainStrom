#ifndef COMMON_H
#define COMMON_H

//5XXX  用户操作指令
#define OK                 5000
#define REGISTER           5001  //注册
#define LOGIN              5002  //登录
#define GETMATHQUESTION    5003  //数学获取问题
#define GETCHIQUESTION     5004  //语文获取问题
#define GETENGQUESTION     5005  //英语获取问题
#define RANK               5006  //进入排位模式
#define ANSWER             5007  //排位回答一个问题
#define RANKRESULT         5008  //排位结果
#define CANCEL             5009  //取消排位

//8XXX  错误

#define ERROR          8001  //未知错误
#define USEREXIST      8002  //用户已经存在
#define NAMEORPASSWD   8003  //用户名或者密码错误
#define USERLOGIN      8004  //用户已经登陆

#endif
