#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
public:
    int info;
    Node* next;
};
class List:public Node
{
 
    Node *first,*last;
public:
    List()
    {
        first=NULL;
        last=NULL;
    }
    void buat();
    void tambah();
    void hapus();
    void tampilkan();
    void cari();
};
void List::buat()
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\nMasukkan Data Pertama:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }
 
    else
    {
        last->next=temp;
        last=temp;
    }
}
void List::tambah()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,pilih,n;
    Node *temp=new Node;
    cout<<"\nMasukkan data:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    cout<<"\nData disimpan sebagai\n1:Urutan Pertama\n2:Urutan Terakhir\n3:Antara Awal dan Akhir";
    cout<<"\nMasukkan pilihan anda:";
    cin>>pilih;
    switch(pilih)
    {
    case 1:
        temp->next=first;
        first=temp;
        break;
    case 2:
        last->next=temp;
        last=temp;
        break;
    case 3:
        cout<<"\nMasukkan posisi yang ingin dimasukkan:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=temp;
            temp->next=cur;
        }
        else
            cout<<"\nData tidak dapat diinput";
        break;
    }
}
