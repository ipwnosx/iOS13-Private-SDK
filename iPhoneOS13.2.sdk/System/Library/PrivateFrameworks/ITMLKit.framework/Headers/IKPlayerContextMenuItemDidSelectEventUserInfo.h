//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerContextMenuItemDidSelectEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithIdentifier:(id)arg1;

@end

