//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPStorageRangeProvider : NSObject
{
    NSString *_identifier;
    NSRange * _range;
    NSObject *_object;
}

@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) NSRange * range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)nextRange;
- (NSUInteger)rangeEnd;
- (void)setRangeStart:(NSUInteger)arg1;
- (NSUInteger)rangeLength;
- (NSUInteger)rangeStart;
- (id)initWithIdentifier:(id)arg1;

@end

