//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount
{
    NSString *_token;
    NSString *_email;
}

+ (id)localizedServiceName;
+ (id)serviceID;
+ (id)accountWithToken:(id)arg1;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
// - (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (BOOL)isValid;

@end

