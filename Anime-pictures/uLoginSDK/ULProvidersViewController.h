//
//  ULProvidersViewController.h
//
//  Created by Alexey Talkan on 10.04.13.
//  Copyright (c) 2013 Alexey Talkan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ULDefaultConfigurator.h"
#import "ULWebViewController.h"

@interface ULProvidersViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
	IBOutlet UIViewController *infoView;
	IBOutlet UITableView *detailsTable;
}

@property (nonatomic, retain) ULDefaultConfigurator *config;

@end

@interface ULInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
	IBOutlet UIScrollView *scrollView;
}

@end



