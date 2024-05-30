# What is this?!
This is a header file created to make [DxLib](https://dxlib.xsrv.jp/ "DxLib") a little easier to use.

DxLib를 조금 더 쉽게 사용하기 위해 작성한 헤더 파일입니다.

## Example 1
```cpp
#include "DxLib.hpp" // !!!!!

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  // wtf?
  if (DxLib_Init() != 0)
  {
    return EXIT_FAILURE;
  }

  // ...
}
```

It can be confusing whether `0` in `DxLib_Init() == 0` means success or failure.

`DxLib_Init() == 0`에서 `0`이 무엇을 의미하는지 헷갈릴 수 있습니다.

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

`DXLIB_SUCCESS`나 `DXLIB_FAILURE` 매크로를 사용하여 혼동을 방지할 수 있습니다.

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

16진수로 색상을 표현하면 어떠한 색인지 알기 힘듭니다. `GetColor(255, 255, 255)` RGB 색상으로 표현해도 직관적이지 않습니다.

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

`COLOR_WHITE`, `COLOR_CORAL`, `COLOR_SKYBLUE` 등의 상수를 이용해 어떠한 색상을 사용 중인지 쉽게 알 수 있습니다.

[WebColors](https://en.wikipedia.org/wiki/Web_colors)에서 색상 이름을 확인하신 후 `COLOR_{COLOR_NAME}`에서 `{COLOR_NAME}`을 치환해주세요.

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

게임 개발에선 보통 각도 표현을 위해 **라디안** 단위를 사용합니다. **도수법**에 익숙한 우리에겐 이상하게 보일 지 모릅니다.

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

`90.0_DegF`로 똑같이 도수법을 호도법(라디안)으로 변환할 수 있습니다.

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

`GetHandleType` 함수로 어떤 변수에 담긴 핸들 값이 어떤 유형인지 확인할 수 있습니다.
