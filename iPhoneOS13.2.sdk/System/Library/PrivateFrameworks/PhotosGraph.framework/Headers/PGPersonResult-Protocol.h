//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString;
@protocol PGPersonResult;

@protocol PGPersonResult <NSObject>
+ (NSUInteger)type;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) BOOL isInferredChild;
@property(readonly, nonatomic) BOOL isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *displayName;
- (long long)compareToPerson:(id <PGPersonResult>)arg1;
@end

