//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CKSnapshotCacheKey : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _interfaceStyle;
    CGRect _bounds;
}

+ (id)keyWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3;
@property(nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *stringValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)keyWithOppositeInterfaceStyle;
- (id)initWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3;

@end
