//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>
{
    NSDictionary *_persistentHistoryTokens;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *persistentHistoryTokens; // @synthesize persistentHistoryTokens=_persistentHistoryTokens;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryTokens:(id)arg1;

@end

