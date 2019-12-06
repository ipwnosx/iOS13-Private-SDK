//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARScreenViewArea : NSObject
{
    BOOL _displaysTransitionControl;
    CGRect _visibleFrame;
    CGRect _safeFrame;
}

@property(readonly, nonatomic) BOOL displaysTransitionControl; // @synthesize displaysTransitionControl=_displaysTransitionControl;
@property(readonly, nonatomic) CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
@property(readonly, nonatomic) CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (BOOL)isEqualToViewArea:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 additionalInsets:(NSEdgeInsets)arg2;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end

