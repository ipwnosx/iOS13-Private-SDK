//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle *nsBundle;
}

- (id)bundle;
- (BOOL)load;
- (Class)viewFactory;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

