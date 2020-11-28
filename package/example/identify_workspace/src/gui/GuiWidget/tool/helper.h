#ifndef HELPER_H
#define HELPER_H
#include <stddef.h>
namespace  nsHelper{

template<class T, class  K>  class  Toolkit{

public:
    static  void initNULL(T*  objGroup[], K  maxLen)
    {
        for(int i=0;i<maxLen;i++)
        {
            objGroup[i]=NULL;
        }
    }

    static  void  destroyObjs(T*  objGroup[], K  maxLen)
    {
        for(int i=0;i<maxLen;i++)
        {
            if(NULL !=  objGroup[i])
            {
                delete  objGroup[i];
                objGroup[i]=NULL;
            }
        }
    }

    static  void closeWidgets(T*  objGroup[], K  maxLen)
    {
        for(int i=0;i<maxLen;i++)
        {
            if(NULL !=  objGroup[i])
            {
                objGroup[i]->close();
            }
        }
    }

    static  T*   createObject(){
          return (new K());
    }

};

}
#endif // HELPER_H
