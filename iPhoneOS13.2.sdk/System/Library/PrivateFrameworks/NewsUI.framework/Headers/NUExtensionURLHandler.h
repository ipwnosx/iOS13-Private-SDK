//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUURLHandling-Protocol.h>
#import <NewsUI/SXURLHandling-Protocol.h>

@class NSExtensionContext;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling>
{
    NSExtensionContext *_extensionContext;
}

@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
// - (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithExtensionContext:(id)arg1;

@end

