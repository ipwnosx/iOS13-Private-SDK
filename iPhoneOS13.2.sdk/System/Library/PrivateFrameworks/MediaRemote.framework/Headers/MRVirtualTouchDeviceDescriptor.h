//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _absolute;
    BOOL _integratedDisplay;
    union _MRHIDSize _screenSize;
}

@property(readonly, nonatomic) union _MRHIDSize screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic, getter=isIntegratedDisplay) BOOL integratedDisplay; // @synthesize integratedDisplay=_integratedDisplay;
@property(readonly, nonatomic, getter=isAbsolute) BOOL absolute; // @synthesize absolute=_absolute;
// - (id)_copyWithZone:(_NSZone )arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

