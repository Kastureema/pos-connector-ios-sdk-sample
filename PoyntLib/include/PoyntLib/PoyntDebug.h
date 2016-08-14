//
//  PoyntDebug.h
//  PoyntLib
//
//  Created by Eric McConkie on 8/13/16.
//  Copyright © 2016 com.poynt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PoyntDebug : NSObject
+ (id)sharedDebugger;
@property(nonatomic) BOOL verbose;
-(void) log:(NSString*)message;

@end
