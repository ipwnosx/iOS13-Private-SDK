//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject
{
    NSURL *mURL;
    TSDBezierPath *mBezierPath;
}

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;
@property(retain, nonatomic) TSDBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=mURL;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)dealloc;

@end

