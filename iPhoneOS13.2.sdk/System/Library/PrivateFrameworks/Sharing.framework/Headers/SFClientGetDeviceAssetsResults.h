//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SFClientGetDeviceAssetsResults : NSObject <NSSecureCoding>
{
    NSString *_assetBundlePath;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *assetBundlePath; // @synthesize assetBundlePath=_assetBundlePath;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

