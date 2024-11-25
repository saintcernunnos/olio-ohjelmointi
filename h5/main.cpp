#include <iostream>
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"
using namespace std;

int main () {

    int a = 5;
    int b = 10;
    int* myPointer;
    int& refA = a;

    cout<<"A:n arvo on: "<<a<< " ja osoite on: "<< &a<<endl;
    cout<<"B:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;

    myPointer = &a;
    cout<<"\nPointerin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointerin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;

    myPointer = &b;
    cout<<"\nPointerin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointerin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;

    myPointer = &refA;
    cout<<"\nrefA osoittama osoite on: "<<myPointer<<endl;
    cout<<"refA osoittaman muistipaikan arvo on: "<<*myPointer<<"\n"<<endl;

    //Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?
    //ref = b; muuttaa arvoa, mutta ei osoitetta
    //ref = &b; ei ole mahdollinen
    //referenssi sidottu muuttujaan, toiseen muuttujaan viitatessa käytetään osoitinta

    //työstetään em. ratkaisua: osoitin ref
    //int* ptr = &refA;
    //cout<<"\nPtr viittaa refA, osoite on: "<<ptr<<", arvo on: "<<*ptr<<endl;
    //osoitin b
    //ptr = &b;
    //cout<<"Ptr viittaa muuttujaan b, osoite on: "<<ptr<<", arvo on: "<<*ptr<<endl;
    //referenssi EI voi osoittaa toisen muuttujan osoitteeseen
    //em. yritys pelleillä referessin kanssa liittämällä se osoittimeen ei toimi, referenssi on kiinteä

//vaihe2
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<"\n"<<endl;

//vaihe3
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;
}
