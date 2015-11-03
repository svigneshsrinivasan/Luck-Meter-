//
//  CCResultViewController.h
//  Luck Meter
//
//  Created by VIGNESH SRINIVASAN on 20/10/15.
//  Copyright © 2015 VIGNESH SRINIVASAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCResultViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *bg3Img;
@property (strong, nonatomic) IBOutlet UILabel *blackLabel;
@property (strong, nonatomic) IBOutlet UILabel *cementLabel;
@property (strong, nonatomic) IBOutlet UILabel *yoursTodayLabel;
@property (strong, nonatomic) IBOutlet UILabel *isLabel;
@property (strong, nonatomic) IBOutlet UILabel *luckLabel;
@property (strong, nonatomic) IBOutlet UIButton *shareButton;
@property (strong, nonatomic) IBOutlet UIButton *tryAgainButton;
//Action

- (IBAction)tryAgainButtonPressed:(id)sender;
- (IBAction)shareButtonPressed:(id)sender;




@end
