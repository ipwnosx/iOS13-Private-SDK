//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString;

@protocol _PARSearchResponse_Section <NSObject>
@property(readonly, nonatomic) NSUInteger whichMore;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *resultIdentifiers;
@property(nonatomic) BOOL doNotFold;
@property(nonatomic) int blockId;
@property(copy, nonatomic) NSString *morePunchout;
@property(copy, nonatomic) NSString *moreUrl;
@property(copy, nonatomic) NSString *moreLabel;
@property(copy, nonatomic) NSString *header;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)resultIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultIdentifiersCount;
- (void)addResultIdentifiers:(NSString *)arg1;
- (void)clearResultIdentifiers;
@end

