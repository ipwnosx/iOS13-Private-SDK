//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject
{
    unsigned char _type;
    BOOL _shouldShowAccepted;
    PHSuggestionMessageContext *_messageContext;
    NSUInteger _matchingStrategy;
    long long _fetchLimit;
}

@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) BOOL shouldShowAccepted; // @synthesize shouldShowAccepted=_shouldShowAccepted;
@property(nonatomic) NSUInteger matchingStrategy; // @synthesize matchingStrategy=_matchingStrategy;
@property(retain, nonatomic) PHSuggestionMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (BOOL)supportsMatching;
- (id)description;
- (id)initWithType:(unsigned char)arg1;

@end

