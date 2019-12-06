//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject
{
    NSString *_defaultPNGName;
    NSString *_extension;
    NSString *_minOSVersionString;
    CGSize _size;
    long long _interfaceOrientation;
}

+ (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id )arg3;
+ (id)validInfoPlistOrientationKeys;
+ (id)launchImageParametersFromLaunchImagesInfo:(id)arg1 withBundleIdentifier:(id)arg2 isMonarchLinked:(BOOL)arg3;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *minOSVersionString; // @synthesize minOSVersionString=_minOSVersionString;
@property(readonly, copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) NSString *defaultPNGName; // @synthesize defaultPNGName=_defaultPNGName;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_initWithDefaultPNGName:(id)arg1 extension:(id)arg2 minOSVersionString:(id)arg3 size:(CGSize)arg4 interfaceOrientation:(long long)arg5;
- (id)init;

@end

