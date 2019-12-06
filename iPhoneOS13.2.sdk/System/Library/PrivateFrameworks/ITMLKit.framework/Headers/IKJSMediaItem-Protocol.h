//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol IKJSMediaItem <JSExport>
@property(retain, nonatomic) NSArray *highlightGroups;
@property(retain, nonatomic) NSArray *interstitials;
@property(retain, nonatomic) NSDictionary *metadata;
@property(retain, nonatomic) NSNumber *resumeTime;
@property(nonatomic) BOOL isExplicit;
@property(retain, nonatomic) NSString *artworkImageSrcset;
@property(retain, nonatomic) NSString *artworkImageURL;
@property(retain, nonatomic) NSNumber *contentRatingRanking;
@property(retain, nonatomic) NSString *contentRatingDomain;
@property(retain, nonatomic) NSString *description;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *externalID;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *type;
- (id)initWithType:(NSString *)arg1:(NSString *)arg2;
@end

