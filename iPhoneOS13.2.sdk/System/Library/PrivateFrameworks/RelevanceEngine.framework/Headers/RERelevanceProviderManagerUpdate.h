//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying>
{
    RERelevanceProvider *_provider;
    id /* CDUnknownBlockType */ _completion;
}

+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;
+ (id)immediateUpdateForAllProviders;
+ (id)immediateUpdateForProvider:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allProviders;
@property(readonly, nonatomic) RERelevanceProvider *provider;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithProvider:(id)arg1;

@end

