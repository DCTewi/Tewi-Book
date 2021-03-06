#ifndef MENUCONTROLLER_H
#define MENUCONTROLLER_H

#include <bits/stdc++.h>
#include "method.h"

/**
 * @brief 菜单控制器
 */
class MenuController
{
private:
public:
    /**
     * @brief 默认构造函数
     */
    MenuController();
    /**
     * @brief 默认析构函数
     */
    ~MenuController();
    
    /**
     * @brief 以指定文件为模板显示菜单。
     * 
     * @note 文件有若干行，第一行为首尾制表符长度，余下每行为菜单内容，补位空格长度。
     * 
     * @param name menu文件夹下的文件名
     * @param focus 焦点行数
     * @param header 标题
     * 
     * @return 获取到的列表
     */
    std::vector<std::string> show(std::string header = "", std::string name = "mainmenu", int focus = 0);
};

#endif // MENUCONTROLLER_H
