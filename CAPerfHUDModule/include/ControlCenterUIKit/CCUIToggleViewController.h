/*
 * This header is generated by classdump-dyld 1.0
 * on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import "CCUIContentModuleContentViewController.h"

@class UIImageView, UIImage, UIColor, CCUICAPackageDescription, NSString, CCUIToggleModule;

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {

	UIImageView* _glyphImageView;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	UIColor* _selectedColor;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	CCUIToggleModule* _module;

}

@property (nonatomic,weak) CCUIToggleModule * module;			//@synthesize module=_module - In the implementation block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) CGFloat preferredExpandedContentHeight;
@property (nonatomic,readonly) CGFloat preferredExpandedContentWidth;
@property (nonatomic,readonly) BOOL providesOwnPlatter;
- (CCUIToggleModule *)module;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)reconfigureView;
- (void)setModule:(CCUIToggleModule *)arg1;
- (CGFloat)preferredExpandedContentHeight;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (void)refreshState;
@end
