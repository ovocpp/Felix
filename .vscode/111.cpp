#include<iostream>
#include<string>
using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
    };
//冒泡排序
    void bubbleSort(Hero heroarray[], int len)
    {
        for(int i=0; i < len - 1; i++)
        {
            for(int j=0; j <len - 1 - i; j++)
            {
                if(heroarray[j].age > heroarray[j +1].age)
                {
                    Hero temp = heroarray[j];
                    heroarray[j] = heroarray[j + 1];
                    heroarray[j + 1] = temp;
                }
            }
        }
}
     

void printHero(Hero heroarray[], int len)
{
    for(int i=0; i < len; i++)
    {
        cout << "姓名：" << heroarray[i].name << "\t年龄：" << heroarray[i].age << "\t性别：" << heroarray[i].sex << endl;
    }
}
int main()
{
    struct Hero heroarray[5]=
    {
       {"刘备", 23, "男"},
       {"关羽", 25, "男"},
       {"张飞", 22, "男"},
       {"赵云", 20, "男"},
       {"貂蝉", 18, "女"}
    };
    int len = sizeof(heroarray) / sizeof(heroarray[0]);
    cout << "排序前：" << endl;
    printHero(heroarray, len);

    bubbleSort(heroarray, len);

    cout << "排序后：" << endl;
    
    printHero(heroarray, len);
}




