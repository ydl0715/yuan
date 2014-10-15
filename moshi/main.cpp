//
//  main.cpp
//  moshi
//
//  Created by Sudent on 14-9-25.
//  Copyright (c) 2014年 Sudent. All rights reserved.
//

#include <iostream>
#include "Delegation.h"
#include "Factory.h"
#include "Adaptee.h"
#include "Observer.h"
using namespace std;
//factory类用到
//void Create(Creator* pCreator)
//{
//    Shape* pShape=pCreator->CreateShape();
//    pShape->Area();
//    delete pShape;
//    pShape=NULL;
//}


int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
//    CSystemControl* p1=CSystemControl::Instance();
//    CSystemControl* p2=CSystemControl::Instance();
//    p1->Print();
    
    
    
//    Window win(100,200);
//    win.Area();
//    cout<<win.Area()<<endl;
    
    
//    CircleCreator cs;
//    RectCreator rs;
//    Create(&cs);
//    Create(&rs);
    
    
//    Target* aTarget=new Adapter();
//    aTarget->Request();
//    delete aTarget;
//    
//    Adapter adapter;
//    adapter.Request();
    
    
    
    AppUI* pUI=new AppUI;
    pUI->Start();
    delete pUI;
    return 0;
}

