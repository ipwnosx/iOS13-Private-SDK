//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUEmbedDataManager-Protocol.h>
#import <NewsUI/SXEmbedDataProvider-Protocol.h>

@class SXJSONDictionary;
@protocol NUEmbedConfigurationLoader;

@interface NUEmbedDataManager : NSObject <NUEmbedDataManager, SXEmbedDataProvider>
{
    id <NUEmbedConfigurationLoader> _embedConfigurationLoader;
    SXJSONDictionary *_embedConfiguration;
}

@property(retain, nonatomic) SXJSONDictionary *embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
@property(readonly, nonatomic) id <NUEmbedConfigurationLoader> embedConfigurationLoader; // @synthesize embedConfigurationLoader=_embedConfigurationLoader;
// - (void).cxx_destruct;
- (id)embedForType:(id)arg1;
- (void)loadEmbedDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithEmbedConfigurationLoader:(id)arg1;

@end

