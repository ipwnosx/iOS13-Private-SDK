//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKContentProvider-Protocol.h>

@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
// - (void).cxx_destruct;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id )arg2;
- (id)initWithKnowledgeStore:(id)arg1;

@end

