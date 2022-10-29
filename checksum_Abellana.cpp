#include<iostream>
#include<string.h>
using namespace std;
 
int main() {
    int i;
    char binary1[20], binary2[20];
    char sum[20], checksum[20];
    
    cout<<"Enter First Binary : ";
    cin>>binary1;
    cout<<"Enter Second Binary : ";
    cin>>binary2;
    
    if (strlen(binary1) == strlen(binary2)) {
        char carry = '0';
        int length = strlen(binary1);
        
    for(i = length - 1; i >= 0; --i) {
            if (binary1[i] == '0' && binary2[i] == '0' && carry == '0') {
                sum[i] = '0';
                carry = '0';
            } else if (binary1[i] == '0' && binary2[i] == '0' && carry == '1') {
                sum[i] = '1';
                carry = '0';
            } else if (binary1[i] == '0' && binary2[i] == '1' && carry == '0') {
                sum[i] = '1';
                carry = '0';
            } else if (binary1[i] == '0' && binary2[i] == '1' && carry == '1') {
                sum[i] = '0';
                carry='1';
            } else if (binary1[i] == '1' && binary2[i] == '0' && carry == '0') {
                sum[i] = '1';
                carry = '0';
            } else if (binary1[i] == '1' && binary2[i] == '0' && carry == '1') {
                sum[i] = '0';
                carry = '1';
            } else if (binary1[i] == '1' && binary2 [i] == '1' && carry == '0') {
                sum[i] = '0';
                carry = '1';
            } else if (binary1[i] == '1' && binary2[i] == '1' && carry == '1') {
                sum[i] = '1';
                carry = '1';
            } else
                break;
            }
        cout<<"\nSum = "<<carry<<sum;
 
    for (i = 0; i < length; ++i) {
        if (sum[i] == '0') {
            checksum[i] = '1';
        } else {
            checksum[i] = '0';
        }
    }
        
if(carry == '1') {
        carry = '0';
    } else {
        carry = '1';
	}
    cout<<"\nChecksum = "<<carry<<checksum;
    }
    else
        cout<<"\nWrong Input Strings";
        
    return 0;
}