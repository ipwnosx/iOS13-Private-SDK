//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface NEPublisherLogoProcessorRequest : NSObject
{
    MISSING_TYPE *assetHandles;
    MISSING_TYPE *publisherLogoImageSize;
    MISSING_TYPE *scale;
    MISSING_TYPE *theme;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *cacheIdentifier;
- (id)initWithPublisherLogoAssetHandle:(id)arg1 publisherLogoImageSize:(CGSize)arg2 scale:(double)arg3 theme:(long long)arg4;
@property(nonatomic, copy) NSDictionary *assetHandles;

@end

