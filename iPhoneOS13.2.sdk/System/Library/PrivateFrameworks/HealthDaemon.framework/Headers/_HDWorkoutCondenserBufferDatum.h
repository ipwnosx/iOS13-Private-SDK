//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HDWorkoutCondenserBufferDatum : NSObject
{
    unsigned char _UUIDBytes[16];
    _Bool _isSeries;
    double _startTime;
    double _endTime;
    double _value;
}

@property(readonly, nonatomic) _Bool isSeries; // @synthesize isSeries=_isSeries;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (_Bool)shouldReplaceDatum:(id)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char [16])arg4 series:(_Bool)arg5;
- (id)init;

@end
