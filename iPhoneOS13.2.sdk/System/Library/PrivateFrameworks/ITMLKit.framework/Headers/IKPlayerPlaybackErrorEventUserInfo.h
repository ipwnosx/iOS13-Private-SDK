//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    _Bool _shouldStopDueToError;
    NSError *_error;
}

@property(readonly, nonatomic) _Bool shouldStopDueToError; // @synthesize shouldStopDueToError=_shouldStopDueToError;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithError:(id)arg1 shouldStopDueToError:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
