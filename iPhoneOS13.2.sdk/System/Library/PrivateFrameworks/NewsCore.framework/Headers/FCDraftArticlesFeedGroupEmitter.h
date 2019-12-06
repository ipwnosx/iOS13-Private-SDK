//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet, NSString;

@interface FCDraftArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    NSString *_articleList;
}

+ (id)groupEmitterIdentifier;
@property(readonly, nonatomic) NSString *articleList; // @synthesize articleList=_articleList;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL emitsSingletonGroups;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (BOOL)wantsToInsertGroupInContext:(id)arg1;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithArticleList:(id)arg1;

@end

