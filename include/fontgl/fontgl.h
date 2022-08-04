#pragma once

#if FONTGL_EXPORTS
# define FONTGL_API __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define FONTGL_API __declspec (dllimport)
#endif /* Not BUILDING_DLL */


namespace fgl
{
	class FontGL
	{
	public:
		virtual ~FontGL() = default;

		void OnProcessAttach();
		void OnThreadAttach();
		void OnThreadDetach();
		void OnProcessDetach();
	private:

	};


		double FONTGL_API sq(double val);
	
}


