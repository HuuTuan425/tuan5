#include<iostream>
using namespace std;
class HOCSINH{
    private:
        string ten;
        int tuoi;
    public:
        void nhap(){
            cin.ignore();
            cout<<"Nhap ten hoc sinh:";
            getline(cin,ten);
            cout<<"Nhap tuoi hoc sinh:";
            cin>>tuoi;
        
        }
        void operator<<(ostream&out){
            out<<"Ten hoc sinh la:"<<ten<<";"<<"tuoi hoc sinh la:"<<tuoi<<endl;
        }
};
int main(){
    int i,n;
    cout<<"Nhap so luong hoc sinh:";
    do{
        cin>>n;

    } while(n<1);
    HOCSINH hs[n];
    for(i=0;i<n;i++){
        cout<<"Nhap thong tin sinh vien thu"<<i+1<<":"<<endl;
        hs[i].nhap();
    
    }
    cout<<"Thong tin sinh vien cuoi cung la:"<<endl;
    hs[n-1]<<cout;
}