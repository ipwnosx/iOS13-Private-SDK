//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

#import <SafariShared/WBSIconResponse-Protocol.h>

@class UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    UIImage *_favicon;
    NSUInteger _faviconType;
}

@property(readonly, nonatomic) NSUInteger faviconType; // @synthesize faviconType=_faviconType;
@property(readonly, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *icon;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(NSUInteger)arg3;
- (id)initWithURL:(id)arg1;

@end

