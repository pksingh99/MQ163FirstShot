//
//  MQSecondViewControllerStep2.h
//  MQ163FirstShot
//
//  Created by VenCKi on 3/3/13.
//  Copyright (c) 2013 VenCKi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MQMerchandize, MQSocialIntegratorAccess;

@interface MQSecondViewControllerStep2 : UIViewController<UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate>
{
    IBOutlet UILabel *merchandizeText;
    IBOutlet UITextField *additionalText;
    IBOutlet UIImageView *image;
    IBOutlet UIImagePickerController *imagePicker;
}

@property MQMerchandize *merchandizeData; /* merchandize data displayed on the screen - entity*/
@property MQSocialIntegratorAccess *socialDataAccess; /* Data access with messages to post to Social Integrator service */

-(IBAction) selectImageClicked: (id) sender; /* IBAction for choosing image from Photo library */
- (IBAction) uploadMerchandizeData:(id)sender;/* IBAction for posting merchandize data on Facebook */

@end
