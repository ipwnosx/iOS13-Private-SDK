//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;

@interface TXRArrayElement : NSObject <NSCopying>
{
    NSMutableArray *_faces;
}

@property(readonly) NSArray *faces; // @synthesize faces=_faces;
// - (void).cxx_destruct;
- (void)setImage:(id)arg1 atFace:(NSUInteger)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initAsLevel:(NSUInteger)arg1 element:(NSUInteger)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4;

@end

