//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_propertiesDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *propertiesDictionary; // @synthesize propertiesDictionary=_propertiesDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)storeTransationID;
- (id)requiredDeviceCapabilities;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)cancelDownloadURL;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithDictionary:(id)arg1;

@end
