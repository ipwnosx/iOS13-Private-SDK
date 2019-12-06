//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, SFSearchSuggestion;

@interface SPSearchQuery : NSObject <NSCopying>
{
    NSUInteger _queryID;
    NSString *_searchString;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    double _scaleFactor;
    NSArray *markedTextArray;
    BOOL _finished;
    BOOL _promoteLocalResults;
    BOOL _promoteParsecResults;
    double _creationTime;
    double _cancellationTime;
    NSUInteger _creationStamp;
    _Atomic BOOL _cancelled;
    BOOL _grouped;
    BOOL _noTokenize;
    BOOL _infinitePatience;
    BOOL _isWideScreen;
    BOOL _isPasscodeLocked;
    BOOL _internalDebug;
    BOOL _internalValidation;
    NSArray *_searchDomains;
    NSArray *_markedTextArray;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_disabledDomains;
    NSArray *_searchEntities;
    long long _maxCount;
    NSArray *_disabledBundles;
    NSArray *_disabledApps;
    NSUInteger _whyQuery;
    NSUInteger _queryIdent;
    long long _contentFilters;
    double _currentTime;
}

@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) NSUInteger creationStamp; // @synthesize creationStamp=_creationStamp;
@property(nonatomic) long long contentFilters; // @synthesize contentFilters=_contentFilters;
@property(nonatomic) BOOL internalValidation; // @synthesize internalValidation=_internalValidation;
@property(nonatomic) BOOL internalDebug; // @synthesize internalDebug=_internalDebug;
@property(nonatomic) BOOL promoteParsecResults; // @synthesize promoteParsecResults=_promoteParsecResults;
@property(nonatomic) BOOL promoteLocalResults; // @synthesize promoteLocalResults=_promoteLocalResults;
@property(nonatomic) NSUInteger queryIdent; // @synthesize queryIdent=_queryIdent;
@property(readonly, nonatomic) BOOL isPasscodeLocked; // @synthesize isPasscodeLocked=_isPasscodeLocked;
@property(nonatomic) BOOL isWideScreen; // @synthesize isWideScreen=_isWideScreen;
@property(nonatomic) NSUInteger whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) BOOL infinitePatience; // @synthesize infinitePatience=_infinitePatience;
@property(nonatomic) BOOL noTokenize; // @synthesize noTokenize=_noTokenize;
@property(retain, nonatomic) NSArray *disabledApps; // @synthesize disabledApps=_disabledApps;
@property(retain, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) BOOL grouped; // @synthesize grouped=_grouped;
@property(readonly, nonatomic) NSArray *searchEntities; // @synthesize searchEntities=_searchEntities;
@property(readonly, nonatomic) NSArray *disabledDomains; // @synthesize disabledDomains=_disabledDomains;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) SFSearchSuggestion *engagedSuggestion; // @synthesize engagedSuggestion=_engagedSuggestion;
@property(readonly, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(readonly, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly, nonatomic) double cancellationTime; // @synthesize cancellationTime=_cancellationTime;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property(readonly, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasMarkedText;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)cancel;
@property(readonly, nonatomic) BOOL cancelled;

@end

