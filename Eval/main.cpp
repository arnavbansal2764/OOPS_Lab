#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;

    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    rectangle(){
        int l;
        cout<<"Enter length breadth : ";
        cin>>l;
        length = l;
        int b;
        cin>>b;
        breadth = b;
    }
    rectangle createRec(rectangle &r){
        int l;
        cout<<"Enter length breadth : ";
        cin>>l;
        r.length = l;
        int b;
        cin>>b;
        r.breadth = b;
        return r;
    }

};
rectangle sumRect(rectangle r1, rectangle r2){
    int a = r1.length+r2.breadth;
    int b = r1.breadth+r2.breadth;
    rectangle sumrec(a,b);
    return sumrec;
}
rectangle compRect(rectangle r1, rectangle r2){
    int a;
    if(r1.length>r2.length){
        a=r1.length;
    }
    else{
        a = r2.length;
    }
    int b;
    if(r1.breadth>r2.breadth){
        b=r1.breadth;
    }
    else{
        b=r2.breadth;
    }
    rectangle comp(a,b);
    return comp;
}
int main(){
    rectangle r1(3,4);
    rectangle r3=r1.createRec(r3);
    cout<<"rectangle 1 is "<<r1.length<<" "<<r1.breadth<<endl;
    cout<<"rectangle 3 is "<<r3.length<<" "<<r3.breadth<<endl;
    rectangle r2(5,6);
    rectangle sumofrect = sumRect(r1,r2);
    cout<<sumofrect.length<<" "<<sumofrect.breadth<<endl;
    rectangle comprect = compRect(r1,r2);
    cout<<comprect.length<<" "<<comprect.breadth<<endl;
    return 0;
}