//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>
{
    NSString *_requestIdentifier;
    NSDictionary *_requestDictionary;
}

@property(retain, nonatomic) NSDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqualToRemoteThumbnailKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;

@end

