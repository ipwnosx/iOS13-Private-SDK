//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandEncoder : NSObject
{
//    struct BinaryBuffer _stream;
    NSUInteger _flags;
    NSRange * _segment;
}

@property(readonly, nonatomic) NSRange * segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) NSUInteger flags; // @synthesize flags=_flags;
- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
//  (id)init:(struct BinaryBuffer )arg1 flags:(NSUInteger)arg2;

@end

