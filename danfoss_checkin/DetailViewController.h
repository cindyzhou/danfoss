//
//  DetailViewController.h
//  danfoss_checkin
//
//  Created by JIN JIA SHUN on 13-8-9.
//  Copyright (c) 2013年 JIN JIA SHUN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
