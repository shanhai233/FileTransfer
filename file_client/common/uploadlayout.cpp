#include "uploadlayout.h"

//静态数据成员，类中声明，类外必须定义
UploadLayout * UploadLayout::instance = new UploadLayout;

//static类的析构函数在main()退出后调用
UploadLayout::Garbo UploadLayout::temp; //静态数据成员，类中声明，类外定义

UploadLayout * UploadLayout::getInstance()
{
    return instance;
}

// 设置布局
// 给当前布局添加窗口
void UploadLayout::setUploadLayout(QWidget *p)
{
    m_wg = new QWidget(p);
    QLayout* layout = p->layout();
    layout->addWidget(m_wg);
    layout->setContentsMargins(0, 0, 0, 0);
    QVBoxLayout* vlayout = new QVBoxLayout;
    // 布局设置给窗口
    m_wg->setLayout(vlayout);
    // 边界间隔
    vlayout->setContentsMargins(0, 0, 0, 0);
    m_layout = vlayout;

    // 添加弹簧
    vlayout->addStretch();  //添加一弹簧
}

//获取布局
QLayout *UploadLayout::getUploadLayout()
{
    return m_layout; // 垂直布局
}
