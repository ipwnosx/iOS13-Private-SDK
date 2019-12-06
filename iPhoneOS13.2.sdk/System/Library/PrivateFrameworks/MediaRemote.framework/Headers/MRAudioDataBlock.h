//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MRAudioBuffer, NSData, _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface MRAudioDataBlock : NSObject <NSMutableCopying>
{
    MRAudioBuffer *_buffer;
//     CDStruct_ace97b7a _time;
    float _gain;
}

@property(readonly, nonatomic) float gain; // @synthesize gain=_gain;
// @property(readonly, nonatomic) CDStruct_ace97b7a time; // @synthesize time=_time;
@property(readonly, nonatomic) MRAudioBuffer *buffer; // @synthesize buffer=_buffer;
// - (void).cxx_destruct;
- (void)_parseGain:(id)arg1;
- (void)_parseTimestamp:(id)arg1;
- (void)_parseBuffer:(id)arg1;
// - (id)_copyWithZone:(_NSZone )arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithData:(id)arg1;

@end

