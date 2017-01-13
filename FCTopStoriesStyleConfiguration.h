//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NTPBTopStoriesStyleConfig, UIColor;

@interface FCTopStoriesStyleConfiguration : NSObject
{
    NTPBTopStoriesStyleConfig *_pbConfig;
    unsigned long long _storyType;
    NSString *_label;
    UIColor *_foreground_color;
    UIColor *_background_color;
    NSString *_stringType;
}

@property(readonly, nonatomic) NSString *stringType; // @synthesize stringType=_stringType;
@property(readonly, nonatomic) UIColor *background_color; // @synthesize background_color=_background_color;
@property(readonly, nonatomic) UIColor *foreground_color; // @synthesize foreground_color=_foreground_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;
- (id)initWithStoryType:(unsigned long long)arg1 label:(id)arg2 foregroundColor:(id)arg3 backgroundColor:(id)arg4 stringType:(id)arg5;

@end

