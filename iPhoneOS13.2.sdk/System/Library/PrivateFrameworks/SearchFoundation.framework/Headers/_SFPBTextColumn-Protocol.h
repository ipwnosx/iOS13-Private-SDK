//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, _SFPBTextColumnSection;

@protocol _SFPBTextColumn <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *sections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBTextColumnSection *)sectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)sectionsCount;
- (void)addSections:(_SFPBTextColumnSection *)arg1;
- (void)clearSections;
@end

