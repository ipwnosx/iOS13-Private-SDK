//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMAutocompleteUserSelectedContact : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
//  (void)trackEventWithScalar:(NSUInteger)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_)arg2 wasKnownContact:(struct SGMTypeSafeBool_)arg3 app:(struct SGMContactDetailUsedApp_)arg4;
- (id)init;

@end

