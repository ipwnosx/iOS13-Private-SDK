//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtensions:(id)arg1;
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;
- (void)addExtension:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

