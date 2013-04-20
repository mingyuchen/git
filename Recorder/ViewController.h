//
//  ViewController.h
//  Recorder
//
//  Created by Ming Yu Chen on 4/15/13.
//  Copyright (c) 2013 Ming Yu Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController
<AVAudioRecorderDelegate, AVAudioPlayerDelegate>

@property (strong, nonatomic) AVAudioRecorder *audioRecorder;
@property (strong, nonatomic) AVAudioPlayer *audioPlayer;
//@property (strong, nonatomic) IBOutlet UISlider *volumeControl;
@property (strong, nonatomic) IBOutlet UIButton *recordButton;
@property (strong, nonatomic) IBOutlet UIButton *playButton;
@property (strong, nonatomic) IBOutlet UIButton *stopButton;
- (IBAction)recordAudio:(id)sender;
- (IBAction)playAudio:(id)sender;
- (IBAction)stop:(id)sender;
//- (IBAction)adjustVolume:(id)sender;

@end