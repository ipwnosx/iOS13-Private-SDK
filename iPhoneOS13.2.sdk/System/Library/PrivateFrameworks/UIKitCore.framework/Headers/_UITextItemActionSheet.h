//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRotatingAlertControllerDelegate-Protocol.h>

@class NSArray, NSString, UIView, UIWindow, _UIRotatingAlertController;

__attribute__((visibility("hidden")))
@interface _UITextItemActionSheet : NSObject <_UIRotatingAlertControllerDelegate>
{
    NSString *_title;
    UIView *_view;
    CGRect _rect;
    NSArray *_ddActions;
    _UIRotatingAlertController *_alertController;
    UIWindow *_alertWindow;
}

// - (void).cxx_destruct;
- (CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (id)_alertActionsWithController:(id)arg1;
- (BOOL)_hasAlertActions;
- (void)present;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 datadetectorActions:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4;

@end

