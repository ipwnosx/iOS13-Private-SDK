//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface DNDSSyncSettings : NSObject <NSCopying>
{
    BOOL _syncEnabled;
}

@property(readonly, nonatomic, getter=isSyncEnabled) BOOL syncEnabled; // @synthesize syncEnabled=_syncEnabled;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithSyncEnabled:(BOOL)arg1;

@end

