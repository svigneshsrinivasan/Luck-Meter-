//
//  ViewController.h
//  Luck Meter
//
//  Created by VIGNESH SRINIVASAN on 16/10/15.
//  Copyright (c) 2015 VIGNESH SRINIVASAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *blackLabel;
@property (strong, nonatomic) IBOutlet UILabel *centerLabel;

@property (strong, nonatomic) IBOutlet UILabel *enterTheNumber;
@property (strong, nonatomic) IBOutlet UITextField *DOBTextFeild;
@property (strong, nonatomic) IBOutlet UITextField *numberTextFeild;
- (IBAction)goButtonPressed:(id)sender;

@property (strong, nonatomic) IBOutlet UIImageView *bg1Img;

@property (nonatomic, retain) NSString *str;



@end

