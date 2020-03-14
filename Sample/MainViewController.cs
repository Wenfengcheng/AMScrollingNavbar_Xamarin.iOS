using System;
using UIKit;

namespace Sample
{
    public class MainViewController : UITableViewController
    {
        public MainViewController()
        {
        }

        public override void ViewDidLoad()
        {
            base.ViewDidLoad();

            this.Title = "MainViewController";
            this.View.BackgroundColor = UIColor.Red;
        }
    }
}
