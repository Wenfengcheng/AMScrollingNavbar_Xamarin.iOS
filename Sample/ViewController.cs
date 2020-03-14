using AMScrollingNavbar;
using Foundation;
using System;
using UIKit;

namespace Sample
{
    public partial class ViewController : UIViewController
    {
        public UITableView table;
        public int Count { get; set; } = 55;


        public ViewController()
        {

        }

        public ViewController(IntPtr handle) : base(handle)
        {
        }

        public override void ViewDidLoad()
        {
            base.ViewDidLoad();

            this.Title = "Sample";
            this.View.BackgroundColor = UIColor.White;

            table = new UITableView
            {
                TableFooterView = new UIView(),
                Frame = new CoreGraphics.CGRect(0, 0, UIScreen.MainScreen.Bounds.Width, UIScreen.MainScreen.Bounds.Height),
                DataSource = new TableDataSource(this),
                Delegate = new TableDelegate(this)
            };
            this.View.AddSubview(table);          
        }

        public override void ViewWillAppear(bool animated)
        {
            base.ViewWillAppear(animated);

            if (this.NavigationController is ScrollingNavigationController navigationController)
            {
                navigationController.FollowScrollView(this.table, 0, 1, NavigationBarCollapseDirection.Down, 0, null);
            }
        }
    }

    public class TableDelegate : UITableViewDelegate
    {
        [Weak] ViewController _vc;
        public TableDelegate(ViewController vc)
        {
            _vc = vc;
        }
        public override void RowSelected(UITableView tableView, NSIndexPath indexPath)
        {
            _vc.NavigationController.PushViewController(new MainViewController(), true);
        }
    }

    public class TableDataSource : UITableViewDataSource
    {
        [Weak] ViewController _vc;
        public TableDataSource(ViewController vc)
        {
            _vc = vc;
        }
        public override UITableViewCell GetCell(UITableView tableView, NSIndexPath indexPath)
        {
            UITableViewCell cell = tableView.DequeueReusableCell("testcell");
            if (cell == null)
                cell = new UITableViewCell(UITableViewCellStyle.Default, "testcell");
            cell.TextLabel.Text = $"测试数据{indexPath.Row}";
            return cell;
        }

        public override nint RowsInSection(UITableView tableView, nint section)
        {
            return _vc.Count;
        }

    }
}