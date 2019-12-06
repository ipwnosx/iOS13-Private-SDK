//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBURL, _SFPBUserActivityData;

@protocol _SFPBPunchout <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL isRunnableInBackground;
@property(copy, nonatomic) NSString *actionTarget;
@property(retain, nonatomic) _SFPBUserActivityData *userActivityData;
@property(copy, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBURL *)urlsAtIndex:(NSUInteger)arg1;
- (NSUInteger)urlsCount;
- (void)addUrls:(_SFPBURL *)arg1;
- (void)clearUrls;
@end

