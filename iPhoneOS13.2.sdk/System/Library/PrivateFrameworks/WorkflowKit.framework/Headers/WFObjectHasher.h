//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFObjectHasher : NSObject
{
//    struct SipHasher _hasher;
    NSUInteger _hash;
    BOOL _finalized;
}

- (id).cxx_construct;
- (NSUInteger)finalize;
- (id)combineContentsOf:(id)arg1;
- (id)combineBytes:(void )arg1 size:(NSUInteger)arg2;
- (id)combineInteger:(long long)arg1;
- (id)combineBool:(BOOL)arg1;
- (id)combine:(id)arg1;
- (id)init;

@end

