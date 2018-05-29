#pragma once
#ifdef Dll_Exports 
#define DllExport __declspec(dllexport) 
#else 
#define DllExport __declspec(dllimport) 
#endif 

namespace Ex
{
	class MTranslater {
	public:
		static DllExport double RadToDeg(double R);
	};


}