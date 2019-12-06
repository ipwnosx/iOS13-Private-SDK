//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject
{
    NSString *_subcommandName;
    NSMutableArray *_optionArray;
}

+ (id)subcommandWithName:(id)arg1;
// - (void).cxx_destruct;
- (id)description;
- (void)showHelp;
- (void)stopDueToSigTerm;
- (void)stop;
- (int)run;
- (void)addOption:(BOOL)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (id)optionArray;
- (id)subcommandName;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)addOptions;
- (id)initWithName:(id)arg1;

@end

