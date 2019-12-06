//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSUserDefaults-Protocol.h>

@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults>
{
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
}

@property(nonatomic) __weak id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
// - (void).cxx_destruct;
- (void)removeData:(id)arg1;
- (void)setData:(id)arg1:(id)arg2;
- (id)getData:(id)arg1;
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;

@end

