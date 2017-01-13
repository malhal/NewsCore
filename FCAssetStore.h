//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FCAssetStore : NSObject
{
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableDictionary *_fileURLsByKey;
}

@property(copy, nonatomic) NSMutableDictionary *fileURLsByKey; // @synthesize fileURLsByKey=_fileURLsByKey;
@property(copy, nonatomic) NSString *preferredExtension; // @synthesize preferredExtension=_preferredExtension;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (id)_keyForFileName:(id)arg1;
- (id)_filePathForKey:(id)arg1;
- (id)allKeys;
- (unsigned long long)storeSize;
- (id)fileURLForKey:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (_Bool)removeAllFiles;
- (_Bool)removeFileWithKey:(id)arg1;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;

@end
