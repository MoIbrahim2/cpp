#include <iostream>
using namespace std;

class Character{
    int heal;
    int damage;
    public:
    Character(int _heal =0,int _damage=0){
        heal = _heal;
        damage = _damage;
    }
    void setHeal(int _heal){
        heal = _heal;
    }
    void setDamage(int _damage){
        damage = _damage;
    }
    int getDamage(){
        return damage;
    }
    int getHeal(){
        return heal;
    }
};
int main() {
    int n;
    cin>>n;
    Character* Hayabusa =new Character[n];
    Character* Dyroth =new Character[n];

    for(int i =0;i<n;i++){
        int heal1,damage1,heal2,damage2;
        cin >> heal1>>damage1>>heal2>>damage2;
        Hayabusa[i].setHeal(heal1);
        Hayabusa[i].setDamage(damage1);
        Dyroth[i].setHeal(heal2);
        Dyroth[i].setDamage(damage2);
    }
    for(int i =0;i<n;i++){
        int timeToEliminateHayabusa,timeToEliminateDyroth;
        int healH = Hayabusa[i].getHeal();
        int dmgH = Hayabusa[i].getDamage();
        int healD = Dyroth[i].getHeal();
        int dmgD = Dyroth[i].getDamage();
        if (healH % dmgD == 0)
            timeToEliminateHayabusa = healH / dmgD;
        else
            timeToEliminateHayabusa = healH / dmgD + 1;

            
        if (healD % dmgH == 0)
            timeToEliminateDyroth = healD / dmgH;
        else
            timeToEliminateDyroth = healD / dmgH + 1;

        if (timeToEliminateHayabusa > timeToEliminateDyroth)
                cout << "Hayabusa\n";
        else if (timeToEliminateHayabusa < timeToEliminateDyroth)
            cout << "Dyroth\n";
        else
            cout << "Tie\n";
                    
    }
    delete[] Hayabusa;
    delete[] Dyroth;
    return 0;
}