//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface XBLaunchImageError : NSError
{
    BOOL _fatal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, getter=isFatal) BOOL fatal; // @synthesize fatal=_fatal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 fatal:(BOOL)arg4;

@end

