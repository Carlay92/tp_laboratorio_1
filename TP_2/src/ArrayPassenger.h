
#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;


int initPassengers(Passenger*list, int len);
int createPassenger (Passenger* list, int len, int*pId,int*pIndex);
int addPassenger(Passenger*list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[], char status, int*pIndice);
int findPassengerById(Passenger* list, int len,int id);
int removePassenger(Passenger* list, int len, int id);
int sortPassengers(Passenger* list, int len, int order);
int printPassenger(Passenger* list, int length);


#endif /* ARRAYPASSENGER_H_ */
