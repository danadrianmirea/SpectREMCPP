//
//  AudioCore.h
//  ZXRetroEmulator
//
//  Created by Mike Daley on 03/09/2016.
//  Copyright © 2016 71Squared Ltd. All rights reserved.
//

#include "ZXSpectrum.hpp"
#include "EmulationProtocol.h"

@interface AudioCore : NSObject

#pragma mark - Methods

/*! @method initWithSampleRate:fps
	@abstract
 Initialize the audio engine
	@param sampleRate to be used for audio
	@param fps being rendered which is used to calculate the frame capacity for each audio buffer
    @param callback back used by the audio core when its finished processing audio data
 */
- (instancetype)initWithSampleRate:(int)sampleRate framesPerSecond:(float)fps callback:(id <EmulationProtocol>)callback;

- (void)stop;
- (void)start;
- (BOOL)isRunning;
- (void)setAudioMasterVolume:(float)audioMasterVolume;
- (void)setAudioLowPassFilter:(float)audioLowPassFilter;
- (void)setAudioHighPassFilter:(float)audioHighPassFilter;

@end
