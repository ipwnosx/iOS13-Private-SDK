//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UILongPressGestureRecognizer, UINavigationController;

@interface PXSnapBackController : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _enabled;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)_backButtonView;
- (void)_enumerateDestinationViewControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_presentHistory;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_unloadGestureRecognizer;
- (void)_loadGestureRecognizer;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

@end

