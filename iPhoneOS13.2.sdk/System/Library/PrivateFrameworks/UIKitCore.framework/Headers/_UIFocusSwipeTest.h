//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest
{
    NSUInteger _eventCount;
    const struct {
        double _field1;
        long long _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
    } _events;
    int _swipeAxis;
    UIWindow *_window;
}

@property(nonatomic) int swipeAxis; // @synthesize swipeAxis=_swipeAxis;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
// - (void).cxx_destruct;
- (void)main;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

