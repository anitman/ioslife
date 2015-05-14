//
//  DetailViewController.h
//  Life
//
//  Created by 林珂 on 15/5/12.
//  Copyright (c) 2015年 林珂. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

