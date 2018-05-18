//
//  ViewController.h
//  IVPAssignment
//
//  Created by Andy Nguyen on 5/14/18.
//  Copyright © 2018 Green App. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TesseractOCR/TesseractOCR.h>
#import <JGProgressHUD/JGProgressHUD.h>
#import "Base64Tools.h"
#import <AFNetworking/AFNetworking.h>
#import "RippleAnimation.h"
#import "CameraFocusSquare.h"
#import "CropViewController.h"
#import "UIImageView+LBBlurredImage.h"

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate,MMCropDelegate,UITextViewDelegate>

@property (nonatomic,strong) UIImage *myImage;
@property (nonatomic,strong) JGProgressHUD *HUD;
@property (nonatomic,strong) IBOutlet UITextView *myTextView;
@property (nonatomic,strong) IBOutlet UIButton *myButton;
@property (nonatomic,strong) G8RecognitionOperation *operation;
@property (nonatomic,strong) RippleAnimation *ripple;
@property (nonatomic, strong) IBOutlet UIImageView *blurredImageView;

@end

