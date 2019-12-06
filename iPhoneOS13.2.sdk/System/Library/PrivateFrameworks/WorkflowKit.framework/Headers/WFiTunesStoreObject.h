//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFiTunesObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing>
{
    NSString *_artistID;
    NSString *_artistName;
    NSDate *_releaseDate;
    NSNumber *_price;
    NSString *_currencyCode;
    NSString *_descriptionText;
}

+ (id)descriptionTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSString *artistID; // @synthesize artistID=_artistID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *formattedPrice;

@end

