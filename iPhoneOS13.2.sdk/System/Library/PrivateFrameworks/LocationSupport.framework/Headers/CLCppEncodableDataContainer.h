//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LocationSupport/CLCppContainer.h>

@class NSData;

@interface CLCppEncodableDataContainer : CLCppContainer
{
    NSData *_serialized;
    id _compatibilityInfo;
    id /* block */ _encoder;
}

+ (_Bool)supportsSecureCoding;
+ (id)containerWithObject:(void *)arg1 cppDataEncoder:(id /* block */)arg2 destructor:(id /* block */)arg3;
@property(copy, nonatomic) id /* block */ encoder; // @synthesize encoder=_encoder;
@property(copy, nonatomic) id compatibilityInfo; // @synthesize compatibilityInfo=_compatibilityInfo;
@property(copy, nonatomic) NSData *serialized; // @synthesize serialized=_serialized;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(void *)arg1 cppDataEncoder:(id /* block */)arg2 destructor:(id /* block */)arg3;

@end
