//
//  DetailViewController.h
//  gotenks
//
//  Created by Mariano Abdala on 2/8/15.
//  Copyright (c) 2015 Mariano Abdala. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

