#include<bits/stdc++.h>
using namespace std;

class hero{
    //properties
    private:
    int health;
    public:
    char *name;
    char level;
    
    static int timetoComplete;
    
    hero(){
        cout<<"simple coonstructor called"<<endl<<endl;
        name = new char[100];
    }
    
    // parameterized constructor 
    hero (int health){
        this->health=health;
    }
    hero (int health, int level){
        this->health=health;
        this->level=level;
    }
    
    //copy constructor 
    
    hero(hero &temp){
        cout<<"copy constructor called "<<endl;
        char*ch= new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        this->health = temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<"Name: "<<this->name;
        cout<<" , Health: "<<this->health;
        cout<<" , Level: "<<this->level<<endl<<endl;
    }
    
    int gethealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }
    
    void sethealth(int h){
        health =h;
    }
    void setlevel(char ch){
        level=ch;
    }
    
    void setname(char name[]){
        strcpy(this->name, name);
    }
    
    
    
};

int main()
{
    cout<<"size of class hero "<<sizeof(hero)<<endl;
   /* cout<<"size of hero function  "<<sizeof(hero())<<endl;
    cout<<"size of hero(int health) function  "<<sizeof(hero(int health))<<endl;
    cout<<"size of hero(int health, int level) function  "<<sizeof(hero(int health, int level))<<endl;*/
    
    char name[10]="alpha";
    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    hero1.setname(name);
    
   /* cout<<"hero1"<<endl;
    hero1.print();
    */
    //using deafault copy constructor -
    
    hero hero2(hero1);    // OR hero hero2 = hero1;
    
    /*cout<<"hero2"<<endl;
    hero2.print();*/
    
    hero1.name[0]='b';
    cout<<"hero1"<<endl;
    hero1.print();
    cout<<"hero2"<<endl;
    hero2.print();
    
    hero1=hero2;
    
    cout<<"hero1"<<endl;
    hero1.print();
    cout<<"hero2"<<endl;
    hero2.print(); 
    
}
