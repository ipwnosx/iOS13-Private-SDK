//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface RCSelectionTouchTrackingInfo : NSObject
{
    double _lastLocation;
    UITouch *_touch;
    double _trackingOffset;
    long long _selectionBarType;
    long long _selectionAffinity;
}

@property(nonatomic) long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
@property(nonatomic) long long selectionBarType; // @synthesize selectionBarType=_selectionBarType;
@property(nonatomic) double trackingOffset; // @synthesize trackingOffset=_trackingOffset;
@property(nonatomic) __weak UITouch *touch; // @synthesize touch=_touch;
// - (void).cxx_destruct;
- (id)description;
- (void)updateTrackingInfo;

@end

