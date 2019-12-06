//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCTranslationProvider-Protocol.h>

@class NSDictionary, NSString;

@interface FCTranslationMap : NSObject <FCTranslationProvider>
{
    NSString *_resourceID;
    NSDictionary *_topicTranslationMap;
    NSDictionary *_favoriteTranslationMap;
}

@property(retain, nonatomic) NSDictionary *favoriteTranslationMap; // @synthesize favoriteTranslationMap=_favoriteTranslationMap;
@property(retain, nonatomic) NSDictionary *topicTranslationMap; // @synthesize topicTranslationMap=_topicTranslationMap;
@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
// - (void).cxx_destruct;
- (id)favoriteTranslationForTagID:(id)arg1;
- (id)topicTranslationForTagID:(id)arg1;
- (id)initWithPBTranslationMap:(id)arg1 resourceID:(id)arg2;

@end

