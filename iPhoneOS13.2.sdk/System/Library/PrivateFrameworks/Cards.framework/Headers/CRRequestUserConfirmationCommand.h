//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCommand-Protocol.h>

@class NSDictionary;

@interface CRRequestUserConfirmationCommand : NSObject <CRCommand>
{
    NSDictionary *userInfo;
    NSUInteger commandDirection;
}

@property(nonatomic) NSUInteger commandDirection; // @synthesize commandDirection;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

