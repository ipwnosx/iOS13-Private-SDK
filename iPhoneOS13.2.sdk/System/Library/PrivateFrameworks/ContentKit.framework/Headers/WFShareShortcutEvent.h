//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShareShortcutEvent : WFEvent
{
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_sharingDestinationBundleIdentifier;
}

+ (id)serializablePropertyTransformers;
+ (Class)codableEventClass;
@property(copy, nonatomic) NSString *sharingDestinationBundleIdentifier; // @synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;

@end

