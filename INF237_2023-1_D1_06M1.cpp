#include <iostream>

using namespace std;

?
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio Version 17
VisualStudioVersion = 17.7.34009.444
MinimumVisualStudioVersion = 10.0.40219.1
Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "INF237_2023-1_D1_06M1", "INF237_2023-1_D1_06M1.vcxproj", "{6580FA23-DDDF-44E5-A454-44CE8127F950}"
EndProject
Global
GlobalSection(SolutionConfigurationPlatforms) = preSolution
Debug | x64 = Debug | x64
Debug | x86 = Debug | x86
Release | x64 = Release | x64
Release | x86 = Release | x86
EndGlobalSection
GlobalSection(ProjectConfigurationPlatforms) = postSolution
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Debug | x64.ActiveCfg = Debug | x64
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Debug | x64.Build.0 = Debug | x64
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Debug | x86.ActiveCfg = Debug | Win32
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Debug | x86.Build.0 = Debug | Win32
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Release | x64.ActiveCfg = Release | x64
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Release | x64.Build.0 = Release | x64
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Release | x86.ActiveCfg = Release | Win32
{ 6580FA23 - DDDF - 44E5 - A454 - 44CE8127F950 }.Release | x86.Build.0 = Release | Win32
EndGlobalSection
GlobalSection(SolutionProperties) = preSolution
HideSolutionNode = FALSE
EndGlobalSection
GlobalSection(ExtensibilityGlobals) = postSolution
SolutionGuid = { C1FC1092 - 3D97 - 4D46 - 8F5D - 2E242F2984F5 }
EndGlobalSection
EndGlobal


int main(int argc, char** argv) {
	int n, i, num, Mayor;
	int serie[15];
	int arrNum[15], fibonacci[30];
	char arrWord[15];
	char word;
	cout << "Ingrese la cantidad de numeros fibonacci y caracteres que tendra la palabra:  ";
	cin >> n;
	cout << "Ingrese la serie de numeros: ";
	for (i = 0; i < n; i++) {
		cin >> num;
		arrNum[i] = num;
	}
	cout << "Ingrese la serie de letras:  ";
	for (i = 0; i < n; i++) {
		cin >> word;
		arrWord[i] = word;
	}
	Fibonacci(fibonacci);
	Mayor = mayor(arrNum, n);
	orden(fibonacci, arrWord, arrNum, n, Mayor);
	return 0;
}
