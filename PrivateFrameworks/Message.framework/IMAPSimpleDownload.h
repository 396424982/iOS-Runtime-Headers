/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MappedData, NSString, NSError;



@interface IMAPSimpleDownload : IMAPDownload 
{
    MappedData *_mdata;
    NSString *_section;
    NSError *_error;
    unsigned int _length : 32;
    unsigned int _knownLength : 1;
    unsigned int _complete : 1;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
}


- (id)initWithUid:(unsigned long)arg1 section:(id)arg2 estimatedLength:(unsigned long)arg3;
- (id)initWithUid:(unsigned long)arg1 section:(id)arg2 length:(unsigned long)arg3;
- (id)initWithUid:(unsigned long)arg1 section:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)section;
- (unsigned long)expectedLength;
- (unsigned long)bytesFetched;
- (void)dealloc;
- (void)handleFetchResult:(id)arg1;
- (void)processResults;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (BOOL)isComplete;
- (id)data;
- (id)error;
- (void)setError:(id)arg1;

@end