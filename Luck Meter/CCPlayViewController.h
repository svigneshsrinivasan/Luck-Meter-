//
//  CCPlayViewController.h
//  Luck Meter
//
//  Created by VIGNESH SRINIVASAN on 20/10/15.
//  Copyright © 2015 VIGNESH SRINIVASAN. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CCPlayViewController : UIViewController


-(void) passValue:(NSString *)value ;

@property (strong, nonatomic) IBOutlet UILabel *chanceLabel;
@property (strong, nonatomic) IBOutlet UIButton *leftButton;
@property (strong, nonatomic) IBOutlet UIButton *rightButton;
@property (strong, nonatomic) IBOutlet UIButton *upButton;
@property (strong, nonatomic) IBOutlet UIButton *downButton;
@property (strong, nonatomic) IBOutlet UILabel *matchedStatus;
@property (strong, nonatomic) IBOutlet UILabel *tagLabel;
@property (strong, nonatomic) IBOutlet UILabel *blackLabel;
@property (strong, nonatomic) IBOutlet UILabel *numberLabel;
@property (strong, nonatomic) IBOutlet UILabel *yourNumberLabel;
@property (strong, nonatomic) IBOutlet UIImageView *boxesImg;
@property (strong, nonatomic) IBOutlet UIImageView *bg2Img;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *backButton;
//Action

- (IBAction)upButtonPessed:(id)sender;
- (IBAction)leftButtonPressed:(id)sender;
- (IBAction)rightButtonPressed:(id)sender;
- (IBAction)downButtonPressed:(id)sender;


@property (nonatomic, strong) NSString *str1;



@end
