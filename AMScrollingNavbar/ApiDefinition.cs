using System;
using CoreGraphics;
using Foundation;
using ObjCRuntime;
using UIKit;

namespace AMScrollingNavbar
{
	// @interface NavigationBarFollower : NSObject
	[BaseType(typeof(NSObject))]
	[DisableDefaultCtor]
	interface NavigationBarFollower
	{
		// -(instancetype _Nonnull)initWithView:(UIView * _Nonnull)view direction:(enum NavigationBarFollowerCollapseDirection)direction changeAlphaWhileCollapsing:(BOOL)changeAlphaWhileCollapsing __attribute__((objc_designated_initializer));
		[Export("initWithView:direction:changeAlphaWhileCollapsing:")]
		[DesignatedInitializer]
		IntPtr Constructor(UIView view, NavigationBarFollowerCollapseDirection direction, bool changeAlphaWhileCollapsing);
	}

	// @interface ScrollingNavigationController : UINavigationController <UIGestureRecognizerDelegate>
	[BaseType(typeof(UINavigationController))]
	interface ScrollingNavigationController : IUIGestureRecognizerDelegate
	{
		// -(void)followScrollView:(UIView * _Nonnull)scrollableView delay:(double)delay scrollSpeedFactor:(double)scrollSpeedFactor collapseDirection:(enum NavigationBarCollapseDirection)collapseDirection additionalOffset:(CGFloat)additionalOffset followers:(NSArray<NavigationBarFollower *> * _Nonnull)followers;
		[Export("followScrollView:delay:scrollSpeedFactor:collapseDirection:additionalOffset:followers:")]
		void FollowScrollView(UIView scrollableView, double delay, double scrollSpeedFactor, NavigationBarCollapseDirection collapseDirection, nfloat additionalOffset, [NullAllowed]NavigationBarFollower[] followers);

		// -(void)stopFollowingScrollViewWithShowingNavbar:(BOOL)showingNavbar;
		[Export("stopFollowingScrollViewWithShowingNavbar:")]
		void StopFollowingScrollViewWithShowingNavbar(bool showingNavbar);

		// -(void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
        [Override]
		[Export("viewWillTransitionToSize:withTransitionCoordinator:")]
		void ViewWillTransitionToSize(CGSize size, IUIViewControllerTransitionCoordinator coordinator);

		// -(void)didBecomeActive:(NSNotification * _Nonnull)notification;
		[Export("didBecomeActive:")]
		void DidBecomeActive(NSNotification notification);

		// -(void)willResignActive:(NSNotification * _Nonnull)notification;
		[Export("willResignActive:")]
		void WillResignActive(NSNotification notification);

		// -(BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer __attribute__((warn_unused_result));
		[Export("gestureRecognizerShouldBegin:")]
		bool GestureRecognizerShouldBegin(UIGestureRecognizer gestureRecognizer);

		// -(BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer __attribute__((warn_unused_result));
		[Export("gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:")]
		bool GestureRecognizer(UIGestureRecognizer gestureRecognizer, UIGestureRecognizer otherGestureRecognizer);

		// -(BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch __attribute__((warn_unused_result));
		[Export("gestureRecognizer:shouldReceiveTouch:")]
		bool GestureRecognizer(UIGestureRecognizer gestureRecognizer, UITouch touch);

		// -(instancetype _Nonnull)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass __attribute__((availability(ios, introduced=5.0))) __attribute__((objc_designated_initializer));
		[iOS(5, 0)]
		[Export("initWithNavigationBarClass:toolbarClass:")]
		[DesignatedInitializer]
		IntPtr Constructor([NullAllowed] Class navigationBarClass, [NullAllowed] Class toolbarClass);

		// -(instancetype _Nonnull)initWithRootViewController:(UIViewController * _Nonnull)rootViewController __attribute__((objc_designated_initializer));
		[Export("initWithRootViewController:")]
		[DesignatedInitializer]
		IntPtr Constructor(UIViewController rootViewController);

		// -(instancetype _Nonnull)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil __attribute__((objc_designated_initializer));
		[Export("initWithNibName:bundle:")]
		[DesignatedInitializer]
		IntPtr Constructor([NullAllowed] string nibNameOrNil, [NullAllowed] NSBundle nibBundleOrNil);

		// -(instancetype _Nullable)initWithCoder:(NSCoder * _Nonnull)aDecoder __attribute__((objc_designated_initializer));
		//[Export("initWithCoder:")]
		//[DesignatedInitializer]
		//IntPtr Constructor(NSCoder aDecoder);
	}

	// @protocol ScrollingNavigationControllerDelegate <NSObject>
	[Protocol, Model]
	[BaseType(typeof(NSObject))]
	interface ScrollingNavigationControllerDelegate
	{
		// @optional -(void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller didChangeState:(enum NavigationBarState)state;
		[Export("scrollingNavigationController:didChangeState:")]
		void DidChangeState(ScrollingNavigationController controller, NavigationBarState state);

		// @optional -(void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller willChangeState:(enum NavigationBarState)state;
		[Export("scrollingNavigationController:willChangeState:")]
		void WillChangeState(ScrollingNavigationController controller, NavigationBarState state);

		// @optional -(void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller didUpdateOffset:(CGFloat)offset forStateChange:(enum NavigationBarState)state;
		[Export("scrollingNavigationController:didUpdateOffset:forStateChange:")]
		void DidUpdateOffset(ScrollingNavigationController controller, nfloat offset, NavigationBarState state);
	}

	// @interface ScrollingNavigationViewController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate>
	[BaseType(typeof(UIViewController))]
	interface ScrollingNavigationViewController : IUINavigationControllerDelegate, IUIScrollViewDelegate
	{
		// -(void)viewWillAppear:(BOOL)animated;
		[Override]
		[Export("viewWillAppear:")]
		void ViewWillAppear(bool animated);

		// -(void)viewWillDisappear:(BOOL)animated;
		[Override]
		[Export("viewWillDisappear:")]
		void ViewWillDisappear(bool animated);

		// -(BOOL)scrollViewShouldScrollToTop:(UIScrollView * _Nonnull)scrollView __attribute__((warn_unused_result));
		[Export("scrollViewShouldScrollToTop:")]
		bool ScrollViewShouldScrollToTop(UIScrollView scrollView);

		// -(instancetype _Nonnull)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil __attribute__((objc_designated_initializer));
		[Export("initWithNibName:bundle:")]
		[DesignatedInitializer]
		IntPtr Constructor([NullAllowed] string nibNameOrNil, [NullAllowed] NSBundle nibBundleOrNil);

		// -(instancetype _Nullable)initWithCoder:(NSCoder * _Nonnull)coder __attribute__((objc_designated_initializer));
		//[Export("initWithCoder:")]
		//[DesignatedInitializer]
		//IntPtr Constructor(NSCoder coder);
	}
}
