//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBSSceneMessage;
@protocol FBSSceneAgent;

@protocol FBSSceneAgentProxy <NSObject>
- (void)agent:(id <FBSSceneAgent>)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (void)agent:(id <FBSSceneAgent>)arg1 registerMessageHandler:(void (^)(FBSSceneMessage *, void (^)(FBSSceneMessage *)))arg2;
@end

