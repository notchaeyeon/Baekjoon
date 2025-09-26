#include <vector>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    //Input
    int total_cash = 0 ;
    vector<int> stock_price(14);
    
    cin >> total_cash;
    for(int i = 0;i<14;i++){
        cin>>stock_price[i];
    }
    
    //Junhyeon_BNP
    int j_cash = total_cash;
    int j_stock = 0;
    int j_res = 0;
    
    for(int i = 0;i<14;i++){
        if(j_cash>=stock_price[i]){
            j_stock = j_cash/stock_price[i];
            j_cash = j_cash - j_stock*stock_price[i];
        }
    }
    j_res = j_cash + j_stock*stock_price[13];
    
    //Sungmin_33
    int s_cash = total_cash;
    int s_stock = 0;
    int s_res = 0;
    
    for(int i = 3;i<14;i++){
        // 3일 연속 하락
        if(stock_price[i-3]>stock_price[i-2] && stock_price[i-2]>stock_price[i-1]&&stock_price[i-1]>stock_price[i] && s_cash>=stock_price[i]){
            s_stock = s_cash/stock_price[i];
            s_cash = s_cash - s_stock*stock_price[i];
        }
        
        // 3일 연속 상승
        else if(stock_price[i-3]<stock_price[i-2]&&stock_price[i-2]<stock_price[i-1]&&stock_price[i-1]<stock_price[i] && s_stock>0){
            s_cash = s_cash + s_stock*stock_price[i];
            s_stock = 0;
        }
    }
    
    s_res = s_cash + s_stock*stock_price[13];
    
    //res
    if(j_res>s_res) cout<<"BNP";
    else if(j_res<s_res) cout<< "TIMING";
    else if(j_res==s_res) cout << "SAMESAME";
    
    return 0;
}