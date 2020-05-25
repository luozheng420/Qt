#include "widget.h"

#include <QApplication>
#include <QTranslator>
//第一步，在源代码中将需要翻译的文字用tr()形式表示
//第二步，在pro文件中添加ts文件 例如
    //TRANSLATIONS += \
    //zh_CN.ts \
    //en.ts
//第三步，工具-外部-Qt语言家-更新翻译，这时候就会生成一个ts文件，可以将这个ts文件添加到工程中，方便以后编辑
//第四步，在工程中将ts文件右键用语言家打开，语言家界面会自动显示没有翻译的字段，自己根据需要进行翻译然后保存就可以了
//第五步，工具-外部-Qt语言家-发布翻译，这时候会生成一个qm文件，将这个qm文件添加到资源文件中
//第六步，在如下main函数中创建QTranslator对象，并安装到QApplication即可，
//说明：可以生成多个ts文件，每个语种一个，需要发布那个语种版本程序就安装哪个就行
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator ts;
    ts.load(":/en.qm");
    a.installTranslator(&ts);

    Widget w;
    w.show();
    return a.exec();
}
