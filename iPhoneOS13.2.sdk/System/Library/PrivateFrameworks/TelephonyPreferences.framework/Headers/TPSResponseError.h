//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface TPSResponseError : NSError
{
}

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;

@end

