//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactConfirmed : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
//  (void)trackEventWithScalar:(NSUInteger)arg1 app:(struct SGMBannerDisplayApp_)arg2 firstNameAdj:(struct SGMTypeSafeBool_)arg3 lastNameAdj:(struct SGMTypeSafeBool_)arg4 middleNameAdj:(struct SGMTypeSafeBool_)arg5 isUpdate:(struct SGMTypeSafeBool_)arg6 extracted:(struct SGMBannerExtractionType_)arg7 extractionModelVersion:(NSUInteger)arg8 selfId:(struct SGMTypeSafeBool_)arg9 contactDetail:(struct SGMContactDetailType_)arg10;
- (id)init;

@end

