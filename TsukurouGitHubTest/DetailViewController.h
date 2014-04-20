//
//  DetailViewController.h
//  TsukurouGitHubTest
//
//  Created by Haruki on 2014/04/20.
//  Copyright (c) 2014年 Haruki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
