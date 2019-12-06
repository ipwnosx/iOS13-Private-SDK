//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProviderFactory-Protocol.h>

@protocol FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory>
{
    id <FCContentContext> _contentContext;
    id <NUFontRegistration> _fontRegistration;
    id <SXHost> _host;
    id <NUEmbedDataManager> _embedDataManager;
}

@property(readonly, nonatomic) id <NUEmbedDataManager> embedDataManager; // @synthesize embedDataManager=_embedDataManager;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
// - (void).cxx_destruct;
- (id)createArticleDataProviderWithArticle:(id)arg1;
- (id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4;

@end

