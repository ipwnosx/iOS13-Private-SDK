//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol SXWebContentInteraction;

@protocol SXWebContentInteractionProvider 
@property(readonly, nonatomic) id <SXWebContentInteraction> interaction;
- (void)onChange:(void (^)(id <SXWebContentInteraction>))arg1;
@end
