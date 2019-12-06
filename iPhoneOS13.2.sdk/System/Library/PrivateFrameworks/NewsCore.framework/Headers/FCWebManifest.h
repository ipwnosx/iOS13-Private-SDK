//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, FCInterestToken, NSString, NSURL;
@protocol FCWebArchiveSource;

@interface FCWebManifest : NSObject
{
    FCAssetHandle *_excerptAssetHandle;
    NSString *_articleID;
    NSURL *_sourceURL;
    id <FCWebArchiveSource> _webArchiveSource;
    FCInterestToken *_webArchiveHoldToken;
}

@property(retain, nonatomic) FCInterestToken *webArchiveHoldToken; // @synthesize webArchiveHoldToken=_webArchiveHoldToken;
@property(retain, nonatomic) id <FCWebArchiveSource> webArchiveSource; // @synthesize webArchiveSource=_webArchiveSource;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) FCAssetHandle *excerptAssetHandle; // @synthesize excerptAssetHandle=_excerptAssetHandle;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *baseURL;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4;
- (id)init;

@end

