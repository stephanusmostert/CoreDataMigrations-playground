//
//  DetailViewController.h
//  PassingThoughts
//
//  Created by FanieM on 11/11/13.
//  Copyright (c) 2013 FanieM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
