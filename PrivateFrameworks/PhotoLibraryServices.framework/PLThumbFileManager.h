/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {
    struct CGSize { 
        float width; 
        float height; 
    int _entryLength;
    NSString *_filename;
    int _format;
    int _imageLength;
    int _imageRowBytes;
    NSString *_path;
    BOOL _readOnly;
    } _thumbnailSize;
}

@property(readonly) int imageFormat;
@property(readonly) int imageHeight;
@property(readonly) int imageLength;
@property(readonly) int imageRowBytes;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;
@property(readonly) int imageWidth;
@property(readonly) BOOL isReadOnly;
@property(readonly) NSString * path;

+ (BOOL)_deviceShouldUseBGRAThumbs;
+ (struct __CFDictionary { }*)decodeSessionOptions;
+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;

- (id)_debugDescription;
- (void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2;
- (void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (BOOL)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (int)imageFormat;
- (int)imageHeight;
- (int)imageLength;
- (int)imageRowBytes;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)imageWidth;
- (id)imageWithIdentifier:(id)arg1;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(BOOL)arg3;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (BOOL)isReadOnly;
- (id)path;
- (id)preheatItemForAsset:(id)arg1 options:(unsigned int)arg2;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (BOOL)usesThumbIdentifiers;

@end
