//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

@interface _PKStrokeData : NSObject <NSCopying>
{
//    struct unique_ptr<_PKStrokeDataPoints, std::__1::default_delete<_PKStrokeDataPoints>> _strokeDataPoints;
//    struct _PKStrokeDataPointsPrivate _strokeDataPointsPrivate;
//    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    NSUInteger _pointsCount;
    NSUInteger _immutablePointsCount;
    NSUInteger _startIndex;
    long long _inputType;
    double _timestamp;
    NSUUID *_strokeDataUUID;
}

+ (void)_calculateOffsets:(NSUInteger )arg1 sizes:(NSUInteger )arg2;
+ (void)calculateOffsets;
//  (id)strokeDataFromDataArchive:(const struct StrokeData )arg1;
@property(readonly, nonatomic) NSUUID *_strokeDataUUID; // @synthesize _strokeDataUUID;
@property(readonly, nonatomic) double _timestamp; // @synthesize _timestamp;
@property(readonly, nonatomic) long long _inputType; // @synthesize _inputType;
@property(readonly, nonatomic) NSUInteger _startIndex; // @synthesize _startIndex;
@property(readonly, nonatomic) NSUInteger _immutablePointsCount; // @synthesize _immutablePointsCount;
- (id).cxx_construct;
// - (void).cxx_destruct;
//  (struct PKCompressedStrokePoint)pointAt:(NSUInteger)arg1;
- (void)setPointsFrom:(id)arg1 range:(NSRange *)arg2;
//  (void)setPoints:(struct PKCompressedStrokePoint )arg1 pointsCount:(NSUInteger)arg2;
@property(readonly, nonatomic) BOOL inflight;
@property(readonly, nonatomic) BOOL hasPointTimestampData;
@property(readonly, nonatomic) NSUInteger _pointsCount; // @synthesize _pointsCount;
//  (struct _PKStrokeDataPoints )_mutablePoints;
// property(readonly, nonatomic) const struct _PKStrokeDataPoints _points; // @dynamic _points;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithData:(id)arg1 range:(NSRange *)arg2 UUID:(id)arg3;
//  (id)initWithPoints:(struct PKCompressedStrokePoint )arg1 count:(NSUInteger)arg2 immutableCount:(NSUInteger)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6;
- (id)init;
- (id)dataApplying:(id)arg1;
- (id)deltaTo:(id)arg1;
//  (void)readStrokeDataFromArchive:(const struct StrokeData )arg1;
//  (BOOL)saveToDataArchive:(struct StrokeData )arg1;

@end

