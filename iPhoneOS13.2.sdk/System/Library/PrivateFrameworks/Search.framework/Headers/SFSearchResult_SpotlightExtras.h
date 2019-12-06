//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>


@class MISSING_TYPE, NSData, NSDate, NSMutableArray, NSNumber, NSString, PRSRankingItem, SFPunchout;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding>
{
    SFPunchout *_cachedPunchout;
    BOOL _hasCommunicationContent;
    float _l2score;
    unsigned int _feedbackBlockId;
    NSString *_protectionClass;
    NSNumber *_fileIdentifier;
    NSNumber *_parentFileIdentifier;
    NSString *_filename;
    NSNumber *_documentIdentifier;
    NSString *_launchString;
    NSDate *_lastUsedDate;
    NSString *_userActivityType;
    NSMutableArray *_duplicatedItems;
    NSString *_contentURL;
    PRSRankingItem *_rankingItem;
    NSData *_suggestionsFeedbackData;
    NSUInteger _predictionsFeedbackActionType;
    MISSING_TYPE *_score;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger predictionsFeedbackActionType; // @synthesize predictionsFeedbackActionType=_predictionsFeedbackActionType;
@property(nonatomic) BOOL hasCommunicationContent; // @synthesize hasCommunicationContent=_hasCommunicationContent;
@property(nonatomic) unsigned int feedbackBlockId; // @synthesize feedbackBlockId=_feedbackBlockId;
@property(retain, nonatomic) NSData *suggestionsFeedbackData; // @synthesize suggestionsFeedbackData=_suggestionsFeedbackData;
@property(retain) PRSRankingItem *rankingItem; // @synthesize rankingItem=_rankingItem;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSMutableArray *duplicatedItems; // @synthesize duplicatedItems=_duplicatedItems;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(retain, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(retain, nonatomic) NSString *launchString; // @synthesize launchString=_launchString;
@property(nonatomic) float l2score; // @synthesize l2score=_l2score;
@property(nonatomic) MISSING_TYPE *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSNumber *parentFileIdentifier; // @synthesize parentFileIdentifier=_parentFileIdentifier;
@property(retain, nonatomic) NSNumber *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(retain, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
// - (void).cxx_destruct;
- (id)punchout;
- (id)debugDescription;
- (void)setUrl:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)objectForFeedback;

@end

