//
//  ViewController.h
//  ametomuti
//
//  Created by ビザンコムマック０４ on 2014/09/12.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController<AVAudioPlayerDelegate>
- (IBAction)button1:(UIButton *)sender;
- (IBAction)stopbutton:(UIButton *)sender;
- (IBAction)restartbutton:(UIButton *)sender;
- (IBAction)creabutton:(UIBarButtonItem *)sender;
@property (weak, nonatomic) IBOutlet UILabel *countdownlabel;
@property (weak, nonatomic) IBOutlet UIDatePicker *datepicker;
@property (weak, nonatomic) IBOutlet UILabel *startlabel;
- (IBAction)valuechangedpicker:(UIDatePicker *)sender;
- (IBAction)okbutton:(UIBarButtonItem *)sender;
@end


