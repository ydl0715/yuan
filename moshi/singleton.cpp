//
//  singleton.cpp
//  moshi
//
//  Created by Sudent on 14-9-25.
//  Copyright (c) 2014年 Sudent. All rights reserved.
//

#include "singleton.h"
#include <iostream>
using namespace std;


//class CSystemControl
//{
//    public :
//    ~CSystemControl();
//    CSystemControl();
//private:
//    static CSystemControl* _instance;
//};
//CSystemControl* CSystemControl::_instance=NULL;
//CSystemControl* CSystemControl::Instance()
//{
//    if (_instance==NULL) {
//        _instance=new CSystemControl;
//    }
//    return _instance;
//}
//CSystemControl::~CSystemControl()
//{
//    if (_instance) {
//        delete _instance;
//        _instance=NULL;
//    }
//}
//void CSystemControl::Print()
//{
//    cout<<"call the print method"<<endl;
//}
//CSystemControl::CSystemControl()
//{
//    cout<<"construct a systemcontrol object"<<endl;
//}

//main()
//CSystemControl* p1=CSystemControl::Instance();
//CSystemControl* p2=CSystemControl::Instance();
//p1->Print();
//return 0;


