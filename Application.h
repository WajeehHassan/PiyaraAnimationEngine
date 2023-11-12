#pragma once

#ifndef _H_APPLICATION_	//if macro not defined then do next line
#define _H_APPLICATION_

class Application
{
private:

	Application(const Application&);
	Application& operator=(const Application&);

public:
	inline Application() {}
	inline virtual ~Application() {}
	// ~Begin Application Lifecycle functions
	inline virtual void Initialize() {}
	inline virtual void Update(float inDeltaTime){}
	inline virtual void Render(float inAspectRatio) {}
	inline virtual void ShutDown() {}
	// ~End Application Lifecycle functions

};

#endif
