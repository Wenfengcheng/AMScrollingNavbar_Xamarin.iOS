// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AMScrollingNavbar",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// The direction of scrolling that the navigation bar should be collapsed.
/// The raw value determines the sign of content offset depending of collapse direction.
/// <ul>
///   <li>
///     scrollUp: scrolling up direction
///   </li>
///   <li>
///     scrollDown: scrolling down direction
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, NavigationBarCollapseDirection, closed) {
  NavigationBarCollapseDirectionScrollUp = -1,
  NavigationBarCollapseDirectionScrollDown = 1,
};

@class UIView;
enum NavigationBarFollowerCollapseDirection : NSInteger;

/// Wraps a view that follows the navigation bar, providing the direction that the view should follow
/// <ul>
///   <li>
///     changeAlphaWhileCollapsing: update the follower’s view alpha while the navigation bar collapses.
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("NavigationBarFollower")
@interface NavigationBarFollower : NSObject
- (nonnull instancetype)initWithView:(UIView * _Nonnull)view direction:(enum NavigationBarFollowerCollapseDirection)direction changeAlphaWhileCollapsing:(BOOL)changeAlphaWhileCollapsing OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The direction of scrolling that a followe should follow when the navbar is collapsing.
/// The raw value determines the sign of content offset depending of collapse direction.
/// <ul>
///   <li>
///     scrollUp: scrolling up direction
///   </li>
///   <li>
///     scrollDown: scrolling down direction
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, NavigationBarFollowerCollapseDirection, closed) {
  NavigationBarFollowerCollapseDirectionScrollUp = -1,
  NavigationBarFollowerCollapseDirectionScrollDown = 1,
};

/// The state of the navigation bar
/// <ul>
///   <li>
///     collapsed: the navigation bar is fully collapsed
///   </li>
///   <li>
///     expanded: the navigation bar is fully visible
///   </li>
///   <li>
///     scrolling: the navigation bar is transitioning to either <code>Collapsed</code> or <code>Scrolling</code>
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, NavigationBarState, closed) {
  NavigationBarStateCollapsed = 0,
  NavigationBarStateExpanded = 1,
  NavigationBarStateScrolling = 2,
};

@protocol UIViewControllerTransitionCoordinator;
@class UIGestureRecognizer;
@class UITouch;
@class UIViewController;
@class NSBundle;
@class NSCoder;

/// A custom <code>UINavigationController</code> that enables the scrolling of the navigation bar alongside the
/// scrolling of an observed content view
SWIFT_CLASS_NAMED("ScrollingNavigationController")
@interface ScrollingNavigationController : UINavigationController <UIGestureRecognizerDelegate>
/// Start scrolling
/// Enables the scrolling by observing a view
/// \param scrollableView The view with the scrolling content that will be observed
///
/// \param delay The delay expressed in points that determines the scrolling resistance. Defaults to <code>0</code>
///
/// \param scrollSpeedFactor This factor determines the speed of the scrolling content toward the navigation bar animation
///
/// \param collapseDirection The direction of scrolling that the navigation bar should be collapsed
///
/// \param additionalOffset The additional distance that the navigation bar can move up after reaching the top of the screen. Defaults to 0
///
/// \param followers An array of <code>NavigationBarFollower</code>s that will follow the navbar. The wrapper holds the direction that the view will follow
///
- (void)followScrollView:(UIView * _Nonnull)scrollableView delay:(double)delay scrollSpeedFactor:(double)scrollSpeedFactor collapseDirection:(enum NavigationBarCollapseDirection)collapseDirection additionalOffset:(CGFloat)additionalOffset followers:(NSArray<NavigationBarFollower *> * _Nonnull)followers;
/// Stop observing the view and reset the navigation bar
/// \param showingNavbar If true the navbar is show, otherwise it remains in its current state. Defaults to <code>true</code>
///
- (void)stopFollowingScrollViewWithShowingNavbar:(BOOL)showingNavbar;
/// UIContentContainer protocol method.
/// Will show the navigation bar upon rotation or changes in the trait sizes.
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)didBecomeActive:(NSNotification * _Nonnull)notification;
- (void)willResignActive:(NSNotification * _Nonnull)notification;
/// UIGestureRecognizerDelegate function. Begin scrolling only if the direction is vertical (prevents conflicts with horizontal scroll views)
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
/// UIGestureRecognizerDelegate function. Enables the scrolling of both the content and the navigation bar
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
/// UIGestureRecognizerDelegate function. Only scrolls the navigation bar with the content when <code>scrollingEnabled</code> is true
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




/// Scrolling Navigation Bar delegate protocol
SWIFT_PROTOCOL("_TtP17AMScrollingNavbar37ScrollingNavigationControllerDelegate_")
@protocol ScrollingNavigationControllerDelegate <NSObject>
@optional
/// Called when the state of the navigation bar changes
/// \param controller the ScrollingNavigationController
///
/// \param state the new state
///
- (void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller didChangeState:(enum NavigationBarState)state;
/// Called when the state of the navigation bar is about to change
/// \param controller the ScrollingNavigationController
///
/// \param state the new state
///
- (void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller willChangeState:(enum NavigationBarState)state;
/// Called when the navigation bar position changed
/// \param controller the ScrollingNavigationController
///
/// \param offset changes amount
///
/// \param state the new state
///
- (void)scrollingNavigationController:(ScrollingNavigationController * _Nonnull)controller didUpdateOffset:(CGFloat)offset forStateChange:(enum NavigationBarState)state;
@end

@class UIScrollView;

/// A custom <code>UIViewController</code> that implements the base configuration.
SWIFT_CLASS_NAMED("ScrollingNavigationViewController")
@interface ScrollingNavigationViewController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate>
/// On appear calls <code>showNavbar()</code> by default
- (void)viewWillAppear:(BOOL)animated;
/// On disappear calls <code>stopFollowingScrollView()</code> to stop observing the current scroll view, and perform the tear down
- (void)viewWillDisappear:(BOOL)animated;
/// Calls <code>showNavbar()</code> with the <code>scrollToTop</code> parameter to <code>true</code> when a scroll to top is requested
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop