/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString, NSURL;

@interface ISAsset : NSObject <NSCoding> {
    NSString *_downloadFileName;
    BOOL _external;
    long long _fileSize;
    NSString *_finalizedFileName;
    NSArray *_hashes;
    long long _numberOfBytesToHash;
    NSInteger _type;
    NSURL *_url;
}

@property(retain) NSString *downloadFileName;
@property(readonly) NSString *downloadInformationKey;
@property(readonly) NSString *downloadPath;
@property(retain) NSString *finalizedFileName;
@property(readonly) NSString *finalizedPath;
@property(retain) NSArray *hashes;
@property(readonly) NSString *purchaseManifestKey;
@property(retain) NSURL *url;
@property(getter=isExternal) BOOL external;
@property long long fileSize;
@property long long numberOfBytesToHash;
@property NSInteger type;

+ (id)externalAssetWithURL:(id)arg1 type:(NSInteger)arg2;

- (void)dealloc;
- (id)downloadFileName;
- (id)downloadInformationKey;
- (id)downloadPath;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileSize;
- (id)finalizedFileName;
- (id)finalizedPath;
- (id)hashes;
- (id)initWithCoder:(id)arg1;
- (BOOL)isExternal;
- (long long)numberOfBytesToHash;
- (id)purchaseManifestKey;
- (void)setDownloadFileName:(id)arg1;
- (void)setExternal:(BOOL)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFinalizedFileName:(id)arg1;
- (void)setHashes:(id)arg1;
- (void)setLocalFileNameFromBase:(id)arg1;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setUrl:(id)arg1;
- (NSInteger)type;
- (id)url;

@end