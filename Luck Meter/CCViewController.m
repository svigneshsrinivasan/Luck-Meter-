//
//  ViewController.m
//  Luck Meter
//
//  Created by VIGNESH SRINIVASAN on 16/10/15.
//  Copyright (c) 2015 VIGNESH SRINIVASAN. All rights reserved.
//

#import "CCViewController.h"
#import "CCPlayViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.str=self.DOBTextFeild.text;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)goButtonPressed:(id)sender {
    CCPlayViewController   *PlayViewController = [[CCPlayViewController alloc] initWithNibName:@"CCPlayViewController" bundle:nil];
    
    [PlayViewController passValue: self.str ];
    [self.navigationController pushViewController:PlayViewController animated:YES];
}
@end

