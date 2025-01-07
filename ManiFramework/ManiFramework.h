//
//  ManiFramework.h
//  ManiFramework
//
//  Created by Mani on 07/01/2025.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//! Project version number for ManiFramework.
FOUNDATION_EXPORT double ManiFrameworkVersionNumber;

//! Project version string for ManiFramework.
FOUNDATION_EXPORT const unsigned char ManiFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ManiFramework/PublicHeader.h>

NS_ASSUME_NONNULL_BEGIN

@interface FrameworkController : UIViewController

@property (nonatomic, copy, nullable) NSString *text;

- (void)publicText;

@end

NS_ASSUME_NONNULL_END
