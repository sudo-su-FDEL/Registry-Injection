#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
HKEY hkey;
LONG regoOpenResult;
//Directory given is a template, CHANGE AS NEEDED
WCHAR PATH[] = L"C:\\Users\\NAME\\DIRECTORY\\NameOfFile";
  
//Path in the regisrty, this path is currently set in Start Up programs meaning the program will run or will open as soon as computer boots.
regoOpenResult = RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_ALL_ACCESS, &hkey);
//"NAME IF VALUE" is the name that will appear in the registry
RegSetValueEx(hkey, L"NAME OF VALUE", 0, REG_SZ, (LPBYTE)PATH, sizeof(PATH));

RegCloseKey(hkey); 



}






