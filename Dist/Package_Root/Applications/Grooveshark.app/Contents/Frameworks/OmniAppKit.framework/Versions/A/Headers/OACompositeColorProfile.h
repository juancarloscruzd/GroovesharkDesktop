// Copyright 2003-2005 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/tags/OmniSourceRelease/2008-03-20/OmniGroup/Frameworks/OmniAppKit/ColorSync/OACompositeColorProfile.h 68913 2005-10-03 19:36:19Z kc $

#import "OAColorProfile.h"

@class NSArray, NSColor, OAColorProfile;

@interface OACompositeColorProfile : OAColorProfile
{
    NSArray *profiles;
}

// API
- initWithProfiles:(NSArray *)someProfiles;

@end
