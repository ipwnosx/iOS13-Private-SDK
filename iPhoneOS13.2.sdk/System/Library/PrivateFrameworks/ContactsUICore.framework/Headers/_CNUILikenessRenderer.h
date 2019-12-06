//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUILikenessRendering-Protocol.h>

@protocol CNSchedulerProvider, CNUIPRLikenessResolver;

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering>
{
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (CGImageRef)cgImageForLikenessProvider:(id)arg1 pointSize:(CGSize)arg2 scale:(double)arg3 style:(NSUInteger)arg4;
+ (id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2;
+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
// - (void).cxx_destruct;
- (id)renderedLoadingPlaceholderForContactCount:(NSUInteger)arg1 provider:(id)arg2 scope:(id)arg3;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(NSUInteger)arg1 scope:(id)arg2;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1 likenessResolverOptions:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;

@end

