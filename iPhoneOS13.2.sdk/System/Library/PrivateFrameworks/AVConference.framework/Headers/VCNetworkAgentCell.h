//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgentCell : VCObject
{
    BOOL _cellularAssertionActive;
}

+ (id)sharedInstance;
@property(readonly) BOOL cellularAssertionActive; // @synthesize cellularAssertionActive=_cellularAssertionActive;
- (void)removeCellularAssertion;
- (void)addCellularAssertion;

@end

