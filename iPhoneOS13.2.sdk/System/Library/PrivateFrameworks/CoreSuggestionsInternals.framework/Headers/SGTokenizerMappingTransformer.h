//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSLinguisticTagger, NSString;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSLinguisticTagger *_tagger;
    BOOL _nameTagging;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
    void _nlpTagger;
    int _linguisticDataNotificationToken;
}

+ (id)forLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;
+ (id)forLocale:(id)arg1;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTokenizerMappingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)transformWithCoreNLP:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)initForLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;

@end

