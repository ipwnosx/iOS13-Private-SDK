//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NLP/NLParsecNamedEntity-Protocol.h>

@class NLPOIEntryImpl, NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntry : NSObject <NLParsecNamedEntity>
{
    NLPOIEntryImpl *m_impl;
}

@property(readonly, nonatomic) float score;
@property(readonly, nonatomic) unsigned char category;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithProtoBuf:(id)arg1;

@end

