//
//  CameraStyleKitClass.h
//  iOS Cam
//
//  Created by Gabriel Alvarado on 2/22/15.
//  Copyright (c) 2015 CompanyName. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface MPCameraStyleKitClass : NSObject

// Drawing Methods
+ (void)drawCameraShutterWithFrame: (CGRect)frame style:(BOOL)style;
+ (void)drawCameraFlashWithFrame: (CGRect)frame;
+ (void)drawCameraToggleWithFrame: (CGRect)frame;
+ (void)drawCameraDismissWithFrame: (CGRect)frame;
+ (void)drawCameraTopBarWithFrame: (CGRect)frame;
+ (void)drawCameraFocusWithFrame: (CGRect)frame;
+ (void)drawLaunchCameraWithFrame: (CGRect)frame pressed: (BOOL)pressed;

@end