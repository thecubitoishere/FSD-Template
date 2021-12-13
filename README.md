# FSD-Template

Project generated by Archengius' [UE4 Template Generator](https://github.com/Archengius/UE4GameProjectGenerator). Reflected C++ classes generated by CheatingMuppet & Archengius' [UE4SS UHT Generator](https://github.com/UE4SS/UE4SS). If you want to use these tools to generate an FSD project yourself, contact me (Buckminsterfullerene#6666) on Discord for information on how to fix all of the build errors *of which there are plenty*.

To use, click use this as a template, [clone](https://docs.github.com/en/desktop/contributing-and-collaborating-using-github-desktop/adding-and-cloning-repositories/cloning-and-forking-repositories-from-github-desktop) or fork the repository and follow these steps:
* Double click FSD.uproject to build the project - **NOTE** that it will take a while on the first time since it has to build all the modules. **If the build fails, you must do one of the following:**
    * If you have [Rider for Unreal Engine](https://www.jetbrains.com/rider/unreal/) (free IDE which I *highly* recommend), you can simply right click the FSD.uproject and select "Open with Rider". Then you can build the project from in there.
    * If you have Visual Studio installed (it has to be [VS2019](https://visualstudio.microsoft.com/vs/older-downloads/)), you should be able to right click the FSD.uproject and select "Generate Visual Studio Project Files".
* Then you can copy all of your files from your old FSD projects to the Content folder. 
* When you go to package your project for the first time, it will rebuild all the modules again, so it will take another while. From then on it should all be normal speed.
* If you want to generate a .sln file, inside Unreal Engine, navigate to File -> Create [name of your editor] Project e.g. File -> Create [name of your editor] Solution. It will then create a new solution file in the same directory as your project.

If your project building gets the errors along the lines of:
> Error: Visual Studio 2019 is installed, but is missing the C++ toolchain.<br>

Then you need to open the Visual Studio Installer app, click 'Modify' on your Visual Studio installation, and select the 'Desktop development with C++' and '.NET desktop development' (you will need this later) options.

If your project building is getting errors along the lines of:
> c1xx: fatal error C1076: compiler limit: internal heap limit reached<br>
> c1xx: error C3859: Failed to create virtual memory for PCH

Then you need to just build it again. Same with first time packaging - package it again.

Enjoy!