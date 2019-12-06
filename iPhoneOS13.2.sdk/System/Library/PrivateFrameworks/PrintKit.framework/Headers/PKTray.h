//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKTray : NSObject
{
    NSDictionary *_trayDict;
}

+ (id)trayWithString:(id)arg1 andMediaSource:(id)arg2;
+ (id)filter:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
// + (id)traysWithAttrs:(struct _ipp_s )arg1;
@property(retain) NSDictionary *trayDict; // @synthesize trayDict=_trayDict;
- (id)description;
@property(readonly) BOOL isEmpty; // @dynamic isEmpty;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *name; // @dynamic name;
- (void)dealloc;
- (id)initWithString:(id)arg1 andMediaSource:(id)arg2;

@end

