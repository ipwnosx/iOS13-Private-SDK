//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/JSExport-Protocol.h>

@class TMLRect, TMLSize;

@protocol TMLSizeJSExports <JSExport>
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (TMLSize *)max:(double)arg1:(double)arg2;
- (TMLSize *)min:(double)arg1:(double)arg2;
- (TMLRect *)asRect;
- (TMLSize *)scale:(double)arg1:(double)arg2;
- (TMLSize *)extend:(double)arg1:(double)arg2;
@end

