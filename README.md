# What is this?!
This is a header file created to make [DxLib](https://dxlib.xsrv.jp/ "DxLib") a little easier to use.

## Example 1
```cpp
#include "DxLib.hpp" // !!!!!

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  // wtf?
  if (DxLib_Init() == 0)
  {
    return EXIT_FAILURE;
  }

  // ...
}
```

It can be confusing whether `0` in `DxLib_Init() == 0` means success or failure.

```cpp
#include "DxLib.hpp" // !!!!!

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  if (DxLib_Init() == DXLIB_FAILURE)
  {
    return EXIT_FAILURE;
  }

  // ...
}
```

You can use `DXLIB_SUCCESS` or `DXLIB_FAILURE` to avoid confusion.

## Example 2
```cpp
#include "DxLib.hpp" // !!!!!

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  if (DxLib_Init() == DXLIB_FAILURE)
  {
    return EXIT_FAILURE;
  }

  // Set the double buffering.
  SetDrawScreen(DX_SCREEN_BACK);
  
  while (ProcessMessage() == DXLIB_SUCCESS and ScreenFlip() == DXLIB_SUCCESS and ClearDrawScreen() == DXLIB_SUCCESS)
  {
    // What color is “0xFFFFFFFF”?
    DrawString(0, 0, "Hello, DxLib!", 0xFFFFFFFF);
  }

  // ...
}
```

With hexadecimal, it's hard to tell what color it is.

You can use `GetColor(255, 255, 255)`, but it's not intuitive.

```cpp
#include "DxLib.hpp" // !!!!!

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  if (DxLib_Init() == DXLIB_FAILURE)
  {
    return EXIT_FAILURE;
  }

  // Set the double buffering.
  SetDrawScreen(DX_SCREEN_BACK);
  
  while (ProcessMessage() == DXLIB_SUCCESS and ScreenFlip() == DXLIB_SUCCESS and ClearDrawScreen() == DXLIB_SUCCESS)
  {
    DrawString(0, 0, "Hello, DxLib!", COLOR_WHITE);
    DrawString(0, 50, "Hello, DxLib!", COLOR_CORAL);
    DrawString(0, 100, "Hello, DxLib!", COLOR_SKYBLUE);
  }

  // ...
}
```

`COLOR_WHITE`, `COLOR_CORAL`, `COLOR_SKYBLUE` ... etc.

Please check the color at [WebColors](https://en.wikipedia.org/wiki/Web_colors) and change `{COLOR_NAME}` in `COLOR_{COLOR_NAME}`.

## Example 3
```cpp
#include "DxLib.hpp"  // !!!!!

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// Hmm...
	VECTOR vec1 = { 1, 1 }, vec2 = { 1, 1 }, vec3 = { 1, 1 }, vec4 = { 1, 1 };
	VECTOR result = VAdd(VAdd(VAdd(vec1, vec2), vec3), vec4);

	// Good!
	vec1 += vec2;
	vec1 += vec3;
	vec1 += vec4;

	return 0;
}
```

## Example 4
```cpp
#include "DxLib.hpp"   // !!!!!

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  if (DxLib_Init() == DXLIB_FAILURE) { return EXIT_FAILURE; }

  // Set the double buffering.
  SetDrawScreen(DX_SCREEN_BACK);
  
  while (ProcessMessage() == DXLIB_SUCCESS and ScreenFlip() == DXLIB_SUCCESS and ClearDrawScreen() == DXLIB_SUCCESS)
  {
    // What is "DX_PI_F / 2" ???
    DrawRotaGraph(0, 0, 1.0, DX_PI_F / 2, handle, FALSE, FALSE);
  }

  // ...
}
```

In game development, we use **radian** angle. This can be awkward for people who are used to **degree** angle.

```cpp
#include "DxLib.hpp"   // !!!!!

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  if (DxLib_Init() == DXLIB_FAILURE) { return EXIT_FAILURE; }

  // Set the double buffering.
  SetDrawScreen(DX_SCREEN_BACK);
  
  while (ProcessMessage() == DXLIB_SUCCESS and ScreenFlip() == DXLIB_SUCCESS and ClearDrawScreen() == DXLIB_SUCCESS)
  {
    // A-ha!
    DrawRotaGraph(0, 0, 1.0, ToDegreeF(90.0F), handle, FALSE, FALSE);
  }

  // ...
}
```

You can do the same thing with `90.0_DegF`.

## Example 5
```cpp
{
  // ...
  if (GetHandleType(your_handle) == DX_HANDLETYPE_MODEL or GetHandleType(your_handle) == DX_HANDLETYPE_GRAPH)
  {
    // ...
  }
  // ...
}
```

`GetHandleType` can be used to determine the type of the Handle.
