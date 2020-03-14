using AMScrollingNavbar;
using Foundation;
using UIKit;

namespace Sample
{
    // The UIApplicationDelegate for the application. This class is responsible for launching the
    // User Interface of the application, as well as listening (and optionally responding) to application events from iOS.
    [Register("AppDelegate")]
    public class AppDelegate : UIApplicationDelegate
    {

        public override UIWindow Window
        {
            get;
            set;
        }

        public override bool FinishedLaunching(UIApplication application, NSDictionary launchOptions)
        {
            // Override point for customization after application launch.
            // If not required for your application you can safely delete this method
            this.Window = new UIWindow(UIScreen.MainScreen.Bounds);
            Window.RootViewController = new ScrollingNavigationController(new ViewController());
            Window.MakeKeyAndVisible();

            UINavigationBar.Appearance.BarTintColor = UIColor.Red;

            return true;
        }
    }
}

