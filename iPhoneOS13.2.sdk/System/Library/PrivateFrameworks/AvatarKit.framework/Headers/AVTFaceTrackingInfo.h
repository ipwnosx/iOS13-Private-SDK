//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject
{
//     CDStruct_32896d86 _trackingData;
    BOOL _deleteWhenDone;
    BOOL _hasFaceTrackingData;
    ARFrame *_arFrame;
    double _timestamp;
}

// + (id)trackingInfoWrappingTrackingData:(CDStruct_32896d86 )arg1;
@property(readonly, nonatomic) BOOL hasFaceTrackingData; // @synthesize hasFaceTrackingData=_hasFaceTrackingData;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) ARFrame *arFrame; // @synthesize arFrame=_arFrame;
// - (void).cxx_destruct;
// - (CDStruct_32896d86 )trackingData;
- (void)dealloc;

@end

