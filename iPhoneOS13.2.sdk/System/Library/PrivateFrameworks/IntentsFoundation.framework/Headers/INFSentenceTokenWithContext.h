//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INFSentenceContext, INFSentenceToken, NSString;

__attribute__((visibility("hidden")))
@interface INFSentenceTokenWithContext : NSObject
{
    BOOL _resolved;
    NSString *_placeholderName;
    INFSentenceContext *_context;
    INFSentenceToken *_originalToken;
}

+ (id)sentenceResolvedTokenWithOriginalToken:(id)arg1 placeholderName:(id)arg2;
@property(retain, nonatomic) INFSentenceToken *originalToken; // @synthesize originalToken=_originalToken;
@property(retain, nonatomic) INFSentenceContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *placeholderName; // @synthesize placeholderName=_placeholderName;
@property(nonatomic, getter=isResolved) BOOL resolved; // @synthesize resolved=_resolved;
// - (void).cxx_destruct;
- (id)initWithToken:(id)arg1 variableName:(id)arg2;

@end

