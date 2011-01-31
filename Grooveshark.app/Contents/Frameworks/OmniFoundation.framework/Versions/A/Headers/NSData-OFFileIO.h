// Copyright 1997-2008 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/branches/Staff/bungi/OmniFocus-20080310-iPhoneFactor/OmniGroup/Frameworks/OmniFoundation/OpenStepExtensions.subproj/NSData-OFExtensions.h 98493 2008-03-11 02:02:48Z bungi $

#import <Foundation/NSData.h>

@interface NSData (OFFileIO)
// stdio support
- (FILE *)openReadOnlyStandardIOFile;
@end

@interface NSMutableData (OFFileIO)
// stdio support
- (FILE *)openReadWriteStandardIOFile;
@end
