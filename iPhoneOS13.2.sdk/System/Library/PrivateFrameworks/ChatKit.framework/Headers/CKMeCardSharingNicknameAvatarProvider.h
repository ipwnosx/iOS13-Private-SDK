//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CNMeCardSharingAvatarProvider-Protocol.h>

@class NSData;

@interface CKMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider>
{
    NSData *_imageData;
}

@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
// - (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(CDUnknownBlockType)arg2;
- (id)initWithImageData:(id)arg1;

@end

