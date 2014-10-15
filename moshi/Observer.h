//
//  Observer.h
//  moshi
//
//  Created by Sudent on 14-9-25.
//  Copyright (c) 2014年 Sudent. All rights reserved.
//

#ifndef __moshi__Observer__
#define __moshi__Observer__

#include <iostream>
using namespace std;
class Observer {
public:
    virtual void Update()=0;
    virtual ~Observer(){}
};
class Engine {
public:
    Engine(Observer& aObserver):_observer(aObserver)
    {
        
    }
public:
    void Dowdload()
    {
        cout<<"subject finished"<<endl;
        _observer.Update();
    }
private:
    Observer& _observer;
};
class AppUI:public Observer
{
public:
    AppUI()
    {
        _engine=new Engine(*this);
    }
    ~AppUI()
    {
        delete _engine;
    }
public:
    void Start()
    {
        cout<<"the subject is called!"<<endl;
        _engine->Dowdload();
    }
public:
    void Update()
    {
        cout<<"the observer is called!"<<endl;
    }
private:
    Engine* _engine;
    
};
#endif /* defined(__moshi__Observer__) */
