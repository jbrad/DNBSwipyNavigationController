//
//  SampleViewController.h
//  DeckControllerSample
//
//  Created by Aaron Alexander on 12/11/11.
//  Copyright (c) 2011 drunknbass. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DNBSwipyNavigationController.h"

typedef enum {
    ControllerThemeFacebook = 0,
    ControllerThemePath = 1
}ControllerTheme;


@interface SampleViewController : UIViewController <DNBSwipyNavigationControllerDelegate>

@property (nonatomic, retain) IBOutlet UINavigationBar *bar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *closeButton;
@property (nonatomic, retain) IBOutlet UINavigationItem *titleItem;
@property (nonatomic, retain) IBOutlet UIImageView *backgroundView;

- (IBAction)push:(id)sender;
- (IBAction)pop:(id)sender;
- (IBAction)popLast:(id)sender;
- (IBAction)popToSelf:(id)sender;
- (IBAction)presentModal:(id)sender;
- (IBAction)dismissModal:(id)sender;
- (IBAction)switchTheme:(id)sender;

@end
