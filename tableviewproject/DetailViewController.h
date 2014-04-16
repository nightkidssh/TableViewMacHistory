//
//  DetailViewController.h
//  tableviewproject
//
//  Created by nightkidssh on 4/15/14.
//  Copyright (c) 2014 WANG BOWEI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
