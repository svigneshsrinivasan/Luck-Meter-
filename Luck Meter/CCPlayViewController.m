//
//  CCPlayViewController.m
//  Luck Meter
//
//  Created by VIGNESH SRINIVASAN on 20/10/15.
//  Copyright © 2015 VIGNESH SRINIVASAN. All rights reserved.
//

#import "CCPlayViewController.h"
#import "CCViewController.h"
@interface CCPlayViewController ()

@end

@implementation CCPlayViewController


-(void) passValue:(NSString*)value {
    
     self.str1 = value;
    
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self passValue:0];
    self.numberLabel.text=self.str1;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)upButton:(id)sender {
}
- (IBAction)upButtonPessed:(id)sender {
}

- (IBAction)leftButtonPressed:(id)sender {
}

- (IBAction)rightButtonPressed:(id)sender {
}

- (IBAction)downButtonPressed:(id)sender {
}
@end
