//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3QuerySection : NSObject
{
    NSUInteger _sectionIndex;
    NSRange _range;
}

@property(nonatomic) NSUInteger sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) NSRange range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithRange:(NSRange)arg1 sectionIndex:(NSUInteger)arg2;

@end

