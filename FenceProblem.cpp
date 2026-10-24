#include <iostream>
#include "fstream"
using namespace std;
int main(){
    // int totelpaint;
    ifstream fin("paint.in");
    ofstream fout("paint.out");
    int a,b,c,d;
    fin >>a>>b;
    fin >>c>>d;
    int paint;
//     int john = b-a;
//     int cow = d-c;
//     if(b<c){
//         int totelpaint =(d-c)+(b-a);
//     }else if(c<a||b<d){
//         int totelpaint = d-c;
//     }else if(a<c||d<b){
//         int totelpaint= b-a;}
//         //    int totelpaint = max(a,b)-min(c,d);
//         //    int overlap= (max(a,b)-min(a,b)-(max(c,d)-min(c,d)));
//            return totelpaint;
//         //    fout<<"overlap: "<<overlap;
if(c<a&&a<d){
    paint=max(a,b)-min(c,d);
// }else if(d<a){
//     paint=(d-c)+(b-a);
}else if(a<c&&d<b){
    paint=b-a;
}else if(c<a&&b<d){
    paint=d-a;
}else if(b<c){
    paint=(d-c)+(b-a);

}else if(a<c||b<d){
    paint=(b-a)+(d-c);
}else if(d<a){
    paint=(b-a)+(d-c);
}
fout<<paint;
    

}
