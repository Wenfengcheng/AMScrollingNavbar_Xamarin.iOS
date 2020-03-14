using System;
using ObjCRuntime;

namespace AMScrollingNavbar
{
	[Native]
	public enum NavigationBarCollapseDirection : long
	{
		Up = -1,
		Down = 1
	}

	[Native]
	public enum NavigationBarFollowerCollapseDirection : long
	{
		Up = -1,
		Down = 1
	}

	[Native]
	public enum NavigationBarState : long
	{
		Collapsed = 0,
		Expanded = 1,
		Scrolling = 2
	}
}
