/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUSegmentLoadCommand : VMULoadCommand {
    unsigned long long _fileoff;
    unsigned long long _filesize;
    unsigned int _flags;
    int _initprot;
    int _maxprot;
    NSString *_name;
    NSArray *_sections;
    unsigned long long _vmaddr;
    unsigned long long _vmsize;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)fileoff;
- (unsigned long long)filesize;
- (unsigned int)flags;
- (int)initprot;
- (BOOL)isSegment;
- (int)maxprot;
- (id)name;
- (id)sectionNamed:(id)arg1;
- (id)sections;
- (unsigned long long)vmaddr;
- (unsigned long long)vmsize;

@end
