#include<iostream>
using namespace std;
class nbrcomplexe {
    public:
    double reel;
    double Img;
};
void addition(nbrcomplexe& premier,nbrcomplexe& second){
    nbrcomplexe result;
    result.reel=premier.reel+second.reel;
    result.Img=premier.reel+second.Img;
    cout<< "l'addition des deux nombres complexes entrés est:"<<result.reel<<"+i."<<result.Img<<endl;
}
void soustraction(nbrcomplexe& premier,nbrcomplexe& second){
     nbrcomplexe result;
     result.reel=premier.reel-second.reel;
     result.Img=premier.reel-second.reel;
     cout<<"la soustraction des deux nombres complexes entrés est:"<<result.reel<<"+i."<<result.Img<<endl;
}
void multiplication(nbrcomplexe& premier,nbrcomplexe& second){
nbrcomplexe result;
result.reel=premier.reel*second.reel -premier.Img * second.Img;
result.Img=premier.reel*second.Img +premier.Img*second.reel;
cout<<"la multiplication des deux nombres complexes entrés est:"<<result.reel<<"+i."<<result.Img<<endl;
}
void division(nbrcomplexe& premier,nbrcomplexe& second){
    nbrcomplexe result;
    double denominateur=second.reel*second.reel +second.Img*second.Img;
    result.reel=(premier.reel*second.reel+premier.Img*second.Img)/denominateur;
    result.Img=(premier.Img*second.reel-premier.reel*second.Img)/denominateur;
    cout<<"la division des deux nombres complexes entrés est:"<<result.reel<<"+i."<<result.Img<<endl;
};
void egalite(nbrcomplexe& premier,nbrcomplexe& second){
    if(premier.reel==second.reel){
        if(premier.Img==second.Img){
            cout<<"les deux nombres complexes sont egaux"<<endl;
        }
    }
    else(cout<<"il n'ya pas d'egalite.")<<endl;

}
int main(){
    int choice;
    nbrcomplexe First_Number,Second_Number;
    cout<<"Donner deux nombre complexe z :"<<endl<<"(Premier Nombre complexe) Partie reel : ";
    cin>>(First_Number.reel);
    cout<<"Partie Imaginaire : ";
    cin>>(First_Number.Img);
    cout<<"(Deuxieme nombre Imaginaire) Partie reel:";
    cin>>(Second_Number.reel);
    cout<<"Partie Imaginaire : ";
    cin>>(Second_Number.Img);
    cout<<"Tapez 1 pour l'addition, 2 pour la soustraction, 3 pour la multiplication, 4 pour la division, 5 pour l'égalité (0 pour finir le programme)"<<std::endl;
    do{
        std::cin>>choice;
        switch(choice){
            case 1:addition(First_Number,Second_Number);continue;
            case 2:soustraction(First_Number,Second_Number);continue;
            case 3:multiplication(First_Number,Second_Number);continue;
            case 4:division(First_Number,Second_Number);continue;
            case 5:egalite(First_Number,Second_Number);continue;
            default:continue;
        }
    }while(choice !=0);
    return 0;
}       












   
